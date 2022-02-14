
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2(u_long VAR_2, char *VAR_3, int VAR_4, const char *VAR_5,
 int VAR_6, char VAR_7, const char *VAR_8)
{
 char *VAR_9 = VAR_3;
 long VAR_10;
 int VAR_11;





 switch (VAR_4) {
 case 10:
  if (VAR_2 < 10) {
   *--VAR_9 = FUNC_1(VAR_2);
   return (VAR_9);
  }
  VAR_11 = 0;






  if (VAR_2 > VAR_1) {
   *--VAR_9 = FUNC_1(VAR_2 % 10);
   VAR_11++;
   VAR_10 = VAR_2 / 10;
  } else
   VAR_10 = VAR_2;
  do {
   *--VAR_9 = FUNC_1(VAR_10 % 10);
   VAR_11++;




   if (VAR_6 && VAR_11 == *VAR_8 && *VAR_8 != VAR_0
     && VAR_10 > 9) {
    *--VAR_9 = VAR_7;
    VAR_11 = 0;





    if (*(VAR_8+1) != '\0')
     VAR_8++;
   }
   VAR_10 /= 10;
  } while (VAR_10 != 0);
  break;

 case 8:
  do {
   *--VAR_9 = FUNC_1(VAR_2 & 7);
   VAR_2 >>= 3;
  } while (VAR_2);
  break;

 case 16:
  do {
   *--VAR_9 = VAR_5[VAR_2 & 15];
   VAR_2 >>= 4;
  } while (VAR_2);
  break;

 default:
  FUNC_0(VAR_4 == 16);
 }
 return (VAR_9);
}
