
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;

int
FUNC_0(u_long VAR_1, char *VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5;
 u_long VAR_6;




 VAR_5 = VAR_2 + VAR_3 - 1;






 if (VAR_4 == VAR_0) {
  while (VAR_5 >= VAR_2) {
   if ((VAR_6 = (VAR_1 & 0xf)) < 10)
    *VAR_5-- = '0' + (char)VAR_6;
   else
    *VAR_5-- = 'a' + (char)(VAR_6 - 10);
   if ((VAR_1 = (VAR_1 >> 4)) == (u_long)0)
    break;
  }
 } else {
  while (VAR_5 >= VAR_2) {
   *VAR_5-- = '0' + (char)(VAR_1 & 0x7);
   if ((VAR_1 = (VAR_1 >> 3)) == (u_long)0)
    break;
  }
 }




 while (VAR_5 >= VAR_2)
  *VAR_5-- = '0';
 if (VAR_1 != (u_long)0)
  return(-1);
 return(0);
}
