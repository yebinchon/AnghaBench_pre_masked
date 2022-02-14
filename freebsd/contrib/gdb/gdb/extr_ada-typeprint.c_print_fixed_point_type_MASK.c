
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef double DOUBLEST ;


 double FUNC_0 (struct type*) ;
 double FUNC_1 (struct type*,double) ;
 int FUNC_2 (struct ui_file*,char*,...) ;

__attribute__((used)) static void
FUNC_3 (struct type *VAR_0, struct ui_file *VAR_1)
{
  DOUBLEST VAR_2 = FUNC_0 (VAR_0);
  DOUBLEST VAR_3 = FUNC_1 (VAR_0, 1.0);

  if (VAR_2 < 0.0)
    FUNC_2 (VAR_1, "delta ??");
  else
    {
      FUNC_2 (VAR_1, "delta %g", (double) VAR_2);
      if (VAR_2 != VAR_3)
 FUNC_2 (VAR_1, " <'small = %g>", (double) VAR_3);
    }
}
