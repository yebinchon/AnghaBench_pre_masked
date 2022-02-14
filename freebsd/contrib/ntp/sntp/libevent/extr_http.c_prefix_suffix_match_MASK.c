
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3;

 while (1) {
  switch (VAR_3 = *VAR_0++) {
  case '\0':
   return *VAR_1 == '\0';

  case '*':
   while (*VAR_1 != '\0') {
    if (FUNC_1(VAR_0, VAR_1,
     VAR_2))
     return (1);
    ++VAR_1;
   }
   return (0);
  default:
   if (VAR_3 != *VAR_1) {
    if (!VAR_2 ||
        FUNC_0(VAR_3) != FUNC_0(*VAR_1))
     return (0);
   }
   ++VAR_1;
  }
 }

}
