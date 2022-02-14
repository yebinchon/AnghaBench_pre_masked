
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char**,int) ;

unsigned char *
FUNC_1(unsigned char **VAR_0, int *VAR_1, int *VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4;

 VAR_3 = *VAR_0;
 VAR_4 = FUNC_0(&VAR_3, -1);
 *VAR_2 = (int)(VAR_4 + VAR_3 - *VAR_0);
 *VAR_0 = VAR_3 + VAR_4;
 *VAR_1 = *VAR_3++;
 return (VAR_3);
}
