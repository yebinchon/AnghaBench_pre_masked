
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(unsigned char *VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8;

 if (!VAR_5 || !VAR_6 || !VAR_7)
  return (-1);
 VAR_8 = *VAR_5;

 if (!(VAR_8 & VAR_1))
  return (-1);
 *VAR_6 = VAR_8 & VAR_0;
 if (*VAR_6) {
  *VAR_7 = -1;
  VAR_8 &= VAR_2;
 } else {
  *VAR_7 = VAR_8 & VAR_4;
  VAR_8 = (VAR_8 & VAR_3) >> 2;
 }
 return (VAR_8);
}
