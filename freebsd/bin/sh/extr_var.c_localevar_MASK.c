
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char const* const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1)
{
 const char *const *VAR_2;

 if (*VAR_1 != 'L')
  return 0;
 if (FUNC_1(VAR_1 + 1, "ANG"))
  return 1;
 if (FUNC_0(VAR_1 + 1, "C_", 2) != 0)
  return 0;
 if (FUNC_1(VAR_1 + 3, "ALL"))
  return 1;
 for (VAR_2 = VAR_0; *VAR_2 ; VAR_2++)
  if (FUNC_1(VAR_1 + 3, *VAR_2 + 3))
   return 1;
 return 0;
}
