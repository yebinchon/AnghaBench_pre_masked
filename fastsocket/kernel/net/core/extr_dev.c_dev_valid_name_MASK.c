
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_1)
{
 if (*VAR_1 == '\0')
  return 0;
 if (FUNC_2(VAR_1) >= VAR_0)
  return 0;
 if (!FUNC_1(VAR_1, ".") || !FUNC_1(VAR_1, ".."))
  return 0;

 while (*VAR_1) {
  if (*VAR_1 == '/' || FUNC_0(*VAR_1))
   return 0;
  VAR_1++;
 }
 return 1;
}
