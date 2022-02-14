
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_1(char *VAR_0)
{
 char *VAR_1;

 VAR_1 = VAR_0;
 while (VAR_1) {
  if (FUNC_0(VAR_1, "hint.", 5) == 0)
   return (1);
  while (*VAR_1 != '\0')
   VAR_1++;
  VAR_1++;
  if (*VAR_1 == '\0')
   break;
 }
 return (0);
}
