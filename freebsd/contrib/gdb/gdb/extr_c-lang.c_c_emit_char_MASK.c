
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (struct ui_file*,char*,...) ;
 int FUNC_2 (char*,struct ui_file*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int,int*) ;

__attribute__((used)) static void
FUNC_6 (int VAR_0, struct ui_file *VAR_1, int VAR_2)
{
  const char *VAR_3;
  int VAR_4;

  VAR_0 &= 0xFF;

  VAR_3 = FUNC_0 (VAR_0);
  if (VAR_3)
    {
      if (VAR_2 == '"' && FUNC_4 (VAR_3, "0") == 0)


 FUNC_1 (VAR_1, "\\000");
      else
 FUNC_1 (VAR_1, "\\%s", VAR_3);
    }
  else if (FUNC_5 (VAR_0, &VAR_4)
           && FUNC_3 (VAR_4))
    {
      if (VAR_4 == '\\' || VAR_4 == VAR_2)
        FUNC_2 ("\\", VAR_1);
      FUNC_1 (VAR_1, "%c", VAR_4);
    }
  else
    FUNC_1 (VAR_1, "\\%.3o", (unsigned int) VAR_0);
}
