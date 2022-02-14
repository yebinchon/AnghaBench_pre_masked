
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int u_long ;
typedef int intmax_t ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ,char*,int,int,char const*) ;
 int FUNC_1 () ;
 char FUNC_2 (scalar_t__) ;

__attribute__((used)) static CHAR *
FUNC_3(uintmax_t VAR_2, CHAR *VAR_3, int VAR_4, int VAR_5, const char *VAR_6)
{
 CHAR *VAR_7 = VAR_3;
 intmax_t VAR_8;



 if (VAR_2 <= VAR_1)
  return (FUNC_0((u_long)VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
 switch (VAR_4) {
 case 10:
  if (VAR_2 < 10) {
   *--VAR_7 = FUNC_2(VAR_2 % 10);
   return (VAR_7);
  }
  if (VAR_2 > VAR_0) {
   *--VAR_7 = FUNC_2(VAR_2 % 10);
   VAR_8 = VAR_2 / 10;
  } else
   VAR_8 = VAR_2;
  do {
   *--VAR_7 = FUNC_2(VAR_8 % 10);
   VAR_8 /= 10;
  } while (VAR_8 != 0);
  break;

 case 8:
  do {
   *--VAR_7 = FUNC_2(VAR_2 & 7);
   VAR_2 >>= 3;
  } while (VAR_2);
  if (VAR_5 && *VAR_7 != '0')
   *--VAR_7 = '0';
  break;

 case 16:
  do {
   *--VAR_7 = VAR_6[VAR_2 & 15];
   VAR_2 >>= 4;
  } while (VAR_2);
  break;

 default:
  FUNC_1();
 }
 return (VAR_7);
}
