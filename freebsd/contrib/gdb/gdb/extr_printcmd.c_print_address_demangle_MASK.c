
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ui_file*,char*) ;
 int FUNC_1 (scalar_t__,int,struct ui_file*) ;
 int FUNC_2 (scalar_t__,struct ui_file*,int,char*) ;

void
FUNC_3 (CORE_ADDR VAR_1, struct ui_file *VAR_2, int VAR_3)
{
  if (VAR_1 == 0)
    {
      FUNC_0 (VAR_2, "0");
    }
  else if (VAR_0)
    {
      FUNC_1 (VAR_1, 1, VAR_2);
      FUNC_2 (VAR_1, VAR_2, VAR_3, " ");
    }
  else
    {
      FUNC_2 (VAR_1, VAR_2, VAR_3, "");
    }
}
