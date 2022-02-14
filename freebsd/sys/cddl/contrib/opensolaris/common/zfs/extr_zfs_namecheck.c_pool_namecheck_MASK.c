
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const) ;

int
FUNC_3(const char *VAR_7, namecheck_err_t *VAR_8, char *VAR_9)
{
 const char *VAR_10;
 if (FUNC_1(VAR_7) >= (VAR_6 - 2 -
     FUNC_1(VAR_5) * 2)) {
  if (VAR_8)
   *VAR_8 = VAR_4;
  return (-1);
 }

 VAR_10 = VAR_7;
 while (*VAR_10 != '\0') {
  if (!FUNC_2(*VAR_10)) {
   if (VAR_8) {
    *VAR_8 = VAR_1;
    *VAR_9 = *VAR_10;
   }
   return (-1);
  }
  VAR_10++;
 }

 if (!(*VAR_7 >= 'a' && *VAR_7 <= 'z') &&
     !(*VAR_7 >= 'A' && *VAR_7 <= 'Z')) {
  if (VAR_8)
   *VAR_8 = VAR_2;
  return (-1);
 }

 if (FUNC_0(VAR_7, "mirror") == 0 || FUNC_0(VAR_7, "raidz") == 0) {
  if (VAR_8)
   *VAR_8 = VAR_3;
  return (-1);
 }

 if (VAR_7[0] == 'c' && (VAR_7[1] >= '0' && VAR_7[1] <= '9')) {
  if (VAR_8)
   *VAR_8 = VAR_0;
  return (-1);
 }

 return (0);
}
