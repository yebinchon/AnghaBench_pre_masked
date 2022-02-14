
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;



__attribute__((used)) static int
FUNC_0(u_long VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4;




 VAR_4 = VAR_1 + VAR_2 - 1;
 switch(VAR_3) {
 case 3:
  *VAR_4-- = '\0';
  break;
 case 2:
  *VAR_4-- = ' ';
  *VAR_4-- = '\0';
  break;
 case 1:
  *VAR_4-- = ' ';
  break;
 case 0:
 default:
  *VAR_4-- = '\0';
  *VAR_4-- = ' ';
  break;
 }




 while (VAR_4 >= VAR_1) {
  *VAR_4-- = '0' + (char)(VAR_0 & 0x7);
  if ((VAR_0 = VAR_0 >> 3) == (u_long)0)
   break;
 }

 while (VAR_4 >= VAR_1)
  *VAR_4-- = '0';
 if (VAR_0 != (u_long)0)
  return(-1);
 return(0);
}
