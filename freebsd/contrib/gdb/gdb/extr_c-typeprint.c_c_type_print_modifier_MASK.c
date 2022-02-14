
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct ui_file*,char*,...) ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_1, struct ui_file *VAR_2,
         int VAR_3, int VAR_4)
{
  int VAR_5 = 0;
  const char *VAR_6;




  if (FUNC_1 (VAR_1)
      && FUNC_0 (VAR_1) != VAR_0)
    {
      if (VAR_3)
 FUNC_5 (VAR_2, " ");
      FUNC_5 (VAR_2, "const");
      VAR_5 = 1;
    }

  if (FUNC_3 (VAR_1))
    {
      if (VAR_5 || VAR_3)
 FUNC_5 (VAR_2, " ");
      FUNC_5 (VAR_2, "volatile");
      VAR_5 = 1;
    }

  VAR_6 = FUNC_4 (FUNC_2 (VAR_1));
  if (VAR_6)
    {
      if (VAR_5 || VAR_3)
 FUNC_5 (VAR_2, " ");
      FUNC_5 (VAR_2, "@%s", VAR_6);
      VAR_5 = 1;
    }

  if (VAR_5 && VAR_4)
    FUNC_5 (VAR_2, " ");
}
