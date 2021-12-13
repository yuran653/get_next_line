/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <jgoldste@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 01:48:17 by jgoldste          #+#    #+#             */
/*   Updated: 2021/12/11 20:44:43 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*get_full_line(int fd, char *line, char *buff);
char	*get_end_line(char *line, char *buff);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	ft_strlcat_gnl(char *dst, char *src);
void	ft_strlcpy_gnl(char *dst, char *src);
int		ft_strlen_gnl(char *str);
int		ft_strchr_gnl(char *str, int c);

#endif