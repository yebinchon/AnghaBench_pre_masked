
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int n_long ;


 int VAR_0 ;
 int FUNC_0 (int) ;

n_long
FUNC_1(char *VAR_1)
{
 u_long VAR_2;
 int VAR_3;
 char VAR_4;
 u_int VAR_5[4];
 u_int *VAR_6 = VAR_5;

 for (;;) {





  VAR_2 = 0;
  while ((VAR_4 = *VAR_1) != '\0') {
   if (VAR_4 >= '0' && VAR_4 <= '9') {
    VAR_2 = (VAR_2 * 10) + (VAR_4 - '0');
    VAR_1++;
    continue;
   }
   break;
  }
  if (*VAR_1 == '.') {






   if (VAR_6 >= VAR_5 + 3 || VAR_2 > 0xff)
    goto bad;
   *VAR_6++ = VAR_2, VAR_1++;
  } else
   break;
 }



 if (*VAR_1 != '\0')
  goto bad;





 VAR_3 = VAR_6 - VAR_5 + 1;
 switch (VAR_3) {

 case 1:
  break;

 case 2:
  if (VAR_2 > 0xffffff)
   goto bad;
  VAR_2 |= VAR_5[0] << 24;
  break;

 case 3:
  if (VAR_2 > 0xffff)
   goto bad;
  VAR_2 |= (VAR_5[0] << 24) | (VAR_5[1] << 16);
  break;

 case 4:
  if (VAR_2 > 0xff)
   goto bad;
  VAR_2 |= (VAR_5[0] << 24) | (VAR_5[1] << 16) | (VAR_5[2] << 8);
  break;
 }

 return (FUNC_0(VAR_2));
 bad:
 return (FUNC_0(VAR_0));
}
