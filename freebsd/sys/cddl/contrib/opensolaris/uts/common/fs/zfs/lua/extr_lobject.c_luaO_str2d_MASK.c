
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,char**) ;
 int FUNC_3 (char const*,char**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5 (const char *VAR_0, size_t VAR_1, lua_Number *VAR_2) {
  char *VAR_3;
  if (FUNC_4(VAR_0, "nN"))
    return 0;
  else if (FUNC_4(VAR_0, "xX"))
    *VAR_2 = FUNC_3(VAR_0, &VAR_3);
  else
    *VAR_2 = FUNC_2(VAR_0, &VAR_3);
  if (VAR_3 == VAR_0) return 0;
  while (FUNC_1(FUNC_0(*VAR_3))) VAR_3++;
  return (VAR_3 == VAR_0 + VAR_1);
}
