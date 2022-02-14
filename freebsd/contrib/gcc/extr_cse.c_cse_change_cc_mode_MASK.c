
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change_cc_mode_args {scalar_t__ newreg; int insn; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4 (rtx *VAR_0, void *VAR_1)
{
  struct change_cc_mode_args* VAR_2 = (struct change_cc_mode_args*)VAR_1;

  if (*VAR_0
      && FUNC_2 (*VAR_0)
      && FUNC_1 (*VAR_0) == FUNC_1 (VAR_2->newreg)
      && FUNC_0 (*VAR_0) != FUNC_0 (VAR_2->newreg))
    {
      FUNC_3 (VAR_2->insn, VAR_0, VAR_2->newreg, 1);

      return -1;
    }
  return 0;
}
