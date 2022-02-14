
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;

int
FUNC_2(const char *VAR_4, namecheck_err_t *VAR_5, char *VAR_6)
{
 const char *VAR_7;

 if (FUNC_0(VAR_4) >= VAR_3) {
  if (VAR_5)
   *VAR_5 = VAR_2;
  return (-1);
 }

 if (VAR_4[0] == '\0') {
  if (VAR_5)
   *VAR_5 = VAR_0;
  return (-1);
 }

 for (VAR_7 = VAR_4; *VAR_7; VAR_7++) {
  if (!FUNC_1(*VAR_7)) {
   if (VAR_5) {
    *VAR_5 = VAR_1;
    *VAR_6 = *VAR_7;
   }
   return (-1);
  }
 }
 return (0);
}
