
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct ui_file*) ;
 int FUNC_1 (struct ui_file*,char*,...) ;
 int FUNC_2 (struct ui_file*,char*) ;
 int FUNC_3 (struct ui_file*) ;
 struct ui_file* FUNC_4 () ;
 int FUNC_5 (int ,int,struct ui_file*) ;
 int FUNC_6 (int) ;

void
FUNC_7 (int VAR_1, CORE_ADDR VAR_2)
{
  struct ui_file *VAR_3 = FUNC_4 ();
  FUNC_3 (VAR_3);

  if (VAR_1 == VAR_0)
    {


      FUNC_2 (VAR_3, "Cannot access memory at address ");
      FUNC_5 (VAR_2, 1, VAR_3);
    }
  else
    {
      FUNC_1 (VAR_3, "Error accessing memory address ");
      FUNC_5 (VAR_2, 1, VAR_3);
      FUNC_1 (VAR_3, ": %s.",
         FUNC_6 (VAR_1));
    }

  FUNC_0 (VAR_3);
}
