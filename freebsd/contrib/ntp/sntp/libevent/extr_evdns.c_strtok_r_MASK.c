
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, const char *VAR_1, char **VAR_2) {
 char *VAR_3, *VAR_4;
 VAR_4 = VAR_3 = VAR_0 ? VAR_0 : *VAR_2;
 if (!VAR_3)
  return ((void*)0);
 while (*VAR_3 && !FUNC_0(VAR_1, *VAR_3))
  ++VAR_3;
 if (!*VAR_3) {
  if (VAR_3 == VAR_4)
   return ((void*)0);
  *VAR_2 = ((void*)0);
  return VAR_4;
 } else {
  *VAR_3++ = '\0';
  *VAR_2 = VAR_3;
  return VAR_4;
 }
}
