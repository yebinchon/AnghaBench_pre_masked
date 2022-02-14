
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5 (const char *VAR_0, const char *VAR_1)
{
  if (VAR_0 == ((void*)0) || VAR_0[0] == '\0')
    return FUNC_4 (VAR_1);
  else
    {
      char *VAR_2 = FUNC_3 (FUNC_2 (VAR_0) + 2 + FUNC_2 (VAR_1) + 1);

      FUNC_1 (VAR_2, VAR_0);
      FUNC_0 (VAR_2, "::");
      FUNC_0 (VAR_2, VAR_1);

      return VAR_2;
    }
}
