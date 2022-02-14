
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void
FUNC_1(char *VAR_0)
{
 char *VAR_1;

 if (*VAR_0 == '\0')
  return;

 VAR_1 = VAR_0 + FUNC_0(VAR_0) - 1;

 while (VAR_1 != VAR_0) {
  if ((*VAR_1 == ' ') || (*VAR_1 == '\t')) {
   *VAR_1 = '\0';
   VAR_1--;
  } else {
   return;
  }
 }

 return;
}
