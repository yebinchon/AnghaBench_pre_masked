
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 char FUNC_2 (char) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6 (struct ui_file *VAR_1, char *VAR_2)
{
  static char *VAR_3 = 0;
  static int VAR_4;
  char *VAR_5;

  if (!VAR_3)
    {
      VAR_4 = 80;
      VAR_3 = (char *) FUNC_5 (VAR_4);
    }

  VAR_5 = VAR_2;
  while (*VAR_5 && *VAR_5 != '\n' && *VAR_5 != '.' && *VAR_5 != ',')
    VAR_5++;
  if (VAR_5 - VAR_2 > VAR_4 - 1)
    {
      VAR_4 = VAR_5 - VAR_2 + 1;
      FUNC_4 (VAR_3);
      VAR_3 = (char *) FUNC_5 (VAR_4);
    }
  FUNC_1 (VAR_3, VAR_2, VAR_5 - VAR_2);
  VAR_3[VAR_5 - VAR_2] = '\0';
  if (FUNC_0 (VAR_3[0]))
    VAR_3[0] = FUNC_2 (VAR_3[0]);
  FUNC_3 (VAR_0, VAR_3);
}
