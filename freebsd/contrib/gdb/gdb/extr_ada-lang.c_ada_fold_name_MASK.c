
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;
 char FUNC_3 (char const) ;

char *
FUNC_4 (const char *VAR_0)
{
  static char *VAR_1 = ((void*)0);
  static size_t VAR_2 = 0;

  int VAR_3 = FUNC_1 (VAR_0);
  FUNC_0 (VAR_1, VAR_2, VAR_3 + 1);

  if (VAR_0[0] == '\'')
    {
      FUNC_2 (VAR_1, VAR_0 + 1, VAR_3 - 2);
      VAR_1[VAR_3 - 2] = '\000';
    }
  else
    {
      int VAR_4;
      for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4 += 1)
 VAR_1[VAR_4] = FUNC_3 (VAR_0[VAR_4]);
    }

  return VAR_1;
}
