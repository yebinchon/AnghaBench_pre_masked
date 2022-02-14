
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 char FUNC_1 (int) ;

__attribute__((used)) static CHAR *
FUNC_2(u_long VAR_1, CHAR *VAR_2, int VAR_3, int VAR_4, const char *VAR_5)
{
 CHAR *VAR_6 = VAR_2;
 long VAR_7;





 switch (VAR_3) {
 case 10:
  if (VAR_1 < 10) {
   *--VAR_6 = FUNC_1(VAR_1);
   return (VAR_6);
  }






  if (VAR_1 > VAR_0) {
   *--VAR_6 = FUNC_1(VAR_1 % 10);
   VAR_7 = VAR_1 / 10;
  } else
   VAR_7 = VAR_1;
  do {
   *--VAR_6 = FUNC_1(VAR_7 % 10);
   VAR_7 /= 10;
  } while (VAR_7 != 0);
  break;

 case 8:
  do {
   *--VAR_6 = FUNC_1(VAR_1 & 7);
   VAR_1 >>= 3;
  } while (VAR_1);
  if (VAR_4 && *VAR_6 != '0')
   *--VAR_6 = '0';
  break;

 case 16:
  do {
   *--VAR_6 = VAR_5[VAR_1 & 15];
   VAR_1 >>= 4;
  } while (VAR_1);
  break;

 default:
  FUNC_0();
 }
 return (VAR_6);
}
