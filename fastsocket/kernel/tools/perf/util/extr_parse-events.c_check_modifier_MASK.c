
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
 char *VAR_1 = VAR_0;


 if (FUNC_1(VAR_0) > (sizeof("ukhGHppp") - 1))
  return -1;

 while (*VAR_1) {
  if (*VAR_1 != 'p' && FUNC_0(VAR_1 + 1, *VAR_1))
   return -1;
  VAR_1++;
 }

 return 0;
}
