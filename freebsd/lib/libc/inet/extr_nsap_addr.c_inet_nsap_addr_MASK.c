
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef char u_char ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 char FUNC_3 (char) ;
 char FUNC_4 (char) ;

u_int
FUNC_5(const char *VAR_0, u_char *VAR_1, int VAR_2) {
 u_char VAR_3, VAR_4;
 u_int VAR_5 = 0;

 if (VAR_0[0] != '0' || (VAR_0[1] != 'x' && VAR_0[1] != 'X'))
  return (0);
 VAR_0 += 2;

 while ((VAR_3 = *VAR_0++) != '\0' && VAR_5 < (u_int)VAR_2) {
  if (VAR_3 == '.' || VAR_3 == '+' || VAR_3 == '/')
   continue;
  if (!FUNC_0(VAR_3))
   return (0);
  if (FUNC_1(VAR_3))
   VAR_3 = FUNC_3(VAR_3);
  if (FUNC_2(VAR_3)) {
   VAR_4 = FUNC_4(VAR_3);
   VAR_3 = *VAR_0++;
   if (VAR_3 != '\0') {
    VAR_3 = FUNC_3(VAR_3);
    if (FUNC_2(VAR_3)) {
     *VAR_1++ = (VAR_4 << 4) | FUNC_4(VAR_3);
     VAR_5++;
    } else
     return (0);
   }
   else
    return (0);
  }
  else
   return (0);
 }
 return (VAR_5);
}
