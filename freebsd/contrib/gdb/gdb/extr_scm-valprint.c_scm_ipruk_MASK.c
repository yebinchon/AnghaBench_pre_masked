
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef int LONGEST ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ui_file*,char*,...) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_0, LONGEST VAR_1, struct ui_file *VAR_2)
{
  FUNC_3 (VAR_2, "#<unknown-%s", VAR_0);

  if (FUNC_2 (VAR_1))
    FUNC_3 (VAR_2, " (0x%lx . 0x%lx) @",
        (long) FUNC_0 (VAR_1), (long) FUNC_1 (VAR_1));
  FUNC_3 (VAR_2, " 0x%s>", FUNC_4 (VAR_1));
}
