
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char **VAR_0, const char *VAR_1) {
 char *VAR_2 = *VAR_0;
 char *VAR_3;
 const char *VAR_4;
 char VAR_5, VAR_6;

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 for (VAR_3 = VAR_2; (VAR_5 = *VAR_3) != '\0'; VAR_3++)
  for (VAR_4 = VAR_1; (VAR_6 = *VAR_4) != '\0'; VAR_4++)
   if (VAR_5 == VAR_6) {
    *VAR_3++ = '\0';
    *VAR_0 = VAR_3;
    return (VAR_2);
   }
 *VAR_0 = ((void*)0);
 return (VAR_2);
}
