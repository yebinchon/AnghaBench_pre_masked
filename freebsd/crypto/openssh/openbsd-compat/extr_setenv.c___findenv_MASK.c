
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(const char *VAR_0, int VAR_1, int *VAR_2)
{
 extern char **VAR_3;
 int VAR_4;
 const char *VAR_5;
 char **VAR_6, *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0))
  return (((void*)0));
 for (VAR_6 = VAR_3 + *VAR_2; (VAR_7 = *VAR_6) != ((void*)0); ++VAR_6) {
  for (VAR_5 = VAR_0, VAR_4 = VAR_1; VAR_4 && *VAR_7; VAR_4--)
   if (*VAR_7++ != *VAR_5++)
    break;
  if (VAR_4 == 0 && *VAR_7++ == '=') {
   *VAR_2 = VAR_6 - VAR_3;
   return (VAR_7);
  }
 }
 return (((void*)0));
}
