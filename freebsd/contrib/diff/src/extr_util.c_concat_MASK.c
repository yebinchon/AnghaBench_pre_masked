
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (scalar_t__) ;

char *
FUNC_3 (char const *VAR_0, char const *VAR_1, char const *VAR_2)
{
  char *VAR_3 = FUNC_2 (FUNC_1 (VAR_0) + FUNC_1 (VAR_1) + FUNC_1 (VAR_2) + 1);
  FUNC_0 (VAR_3, "%s%s%s", VAR_0, VAR_1, VAR_2);
  return VAR_3;
}
