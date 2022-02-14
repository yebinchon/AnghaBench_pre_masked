
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ui_file*,char*,unsigned int) ;
 int FUNC_2 (char*,struct ui_file*) ;

__attribute__((used)) static void
FUNC_3 (int VAR_0, struct ui_file *VAR_1, int *VAR_2)
{

  VAR_0 &= 0xFF;

  if ((VAR_0 == '\'') || (FUNC_0 (VAR_0)))
    {
      if (!(*VAR_2))
 FUNC_2 ("'", VAR_1);
      *VAR_2 = 1;
      if (VAR_0 == '\'')
 {
   FUNC_2 ("''", VAR_1);
 }
      else
 FUNC_1 (VAR_1, "%c", VAR_0);
    }
  else
    {
      if (*VAR_2)
 FUNC_2 ("'", VAR_1);
      *VAR_2 = 0;
      FUNC_1 (VAR_1, "#%d", (unsigned int) VAR_0);
    }
}
