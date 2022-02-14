
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ui_file*,char*,int,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3 (int VAR_1, struct ui_file *VAR_2, int VAR_3, int VAR_4)
{
  if (VAR_4 != 2)
    VAR_4 = 1;

  VAR_1 &= (1 << (VAR_4 * VAR_0)) - 1;

  if (FUNC_1 (VAR_1) && FUNC_2 (VAR_1))
    {
      if (VAR_1 == VAR_3 && VAR_1 == '"')
 FUNC_0 (VAR_2, "[\"%c\"]", VAR_3);
      else
 FUNC_0 (VAR_2, "%c", VAR_1);
    }
  else
    FUNC_0 (VAR_2, "[\"%0*x\"]", VAR_4 * 2, VAR_1);
}
