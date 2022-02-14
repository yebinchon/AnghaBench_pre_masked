
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static char *
FUNC_5 (const char *VAR_0, const char *VAR_1)
{
  int VAR_2;
  char *VAR_3;

  if (VAR_1[0] == '@')
    {
      VAR_2 = FUNC_3 (VAR_0) + FUNC_3 (VAR_1);
      VAR_3 = FUNC_4 (VAR_2 + 1);
      FUNC_2 (VAR_3, VAR_0);
      FUNC_1 (VAR_3, VAR_1);
    }
  else
    {
      VAR_2 = FUNC_3 (FUNC_0 (VAR_1)) + FUNC_3 (VAR_0) + FUNC_3 (VAR_1);
      VAR_3 = FUNC_4 (VAR_2 + 1);
      FUNC_2 (VAR_3, VAR_0);
      FUNC_1 (VAR_3, FUNC_0 (VAR_1));
      FUNC_1 (VAR_3, VAR_1);
    }
  return VAR_3;
}
