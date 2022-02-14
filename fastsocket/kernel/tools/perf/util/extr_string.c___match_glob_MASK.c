
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const,char const**) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0, const char *VAR_1, bool VAR_2)
{
 while (*VAR_0 && *VAR_1 && *VAR_1 != '*') {
  if (VAR_2) {

   if (FUNC_1(*VAR_0)) {
    VAR_0++;
    continue;
   }
   if (FUNC_1(*VAR_1)) {
    VAR_1++;
    continue;
   }
  }
  if (*VAR_1 == '?') {
   VAR_0++;
   VAR_1++;
   continue;
  } else if (*VAR_1 == '[')
   if (FUNC_0(VAR_1 + 1, *VAR_0, &VAR_1)) {
    VAR_0++;
    continue;
   } else
    return 0;
  else if (*VAR_1 == '\\')
   VAR_1++;
  if (*VAR_0++ != *VAR_1++)
   return 0;
 }

 if (*VAR_1 == '*') {
  while (*VAR_1 == '*')
   VAR_1++;
  if (!*VAR_1)
   return 1;
  while (*VAR_0)
   if (FUNC_2(VAR_0++, VAR_1, VAR_2))
    return 1;
 }
 return !*VAR_0 && !*VAR_1;
}
