
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,char const**) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char,int ) ;
 int VAR_1 ;

void
FUNC_4 (const char *VAR_2)
{
  const char **VAR_3 = (const char **) FUNC_0 (VAR_0, &VAR_2);
  if (VAR_3 != 0)
    {
      FUNC_2 ("(");
      FUNC_4 (VAR_3[1]);
      FUNC_2 (" && ");
      FUNC_4 (VAR_3[2]);
      FUNC_2 (")");
    }
  else
    {
      FUNC_3 ('\n', VAR_1);
      FUNC_1 (VAR_2);
      FUNC_2 ("(%s)", VAR_2);
    }
}
