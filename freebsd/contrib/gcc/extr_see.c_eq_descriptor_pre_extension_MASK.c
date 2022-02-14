
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_pre_extension_expr {int se_insn; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (const void *VAR_0, const void *VAR_1)
{
  const struct see_pre_extension_expr *VAR_2 = VAR_0;
  const struct see_pre_extension_expr *VAR_3 = VAR_1;
  rtx VAR_4 = FUNC_3 (VAR_2->se_insn);
  rtx VAR_5 = FUNC_3 (VAR_3->se_insn);
  rtx VAR_6, VAR_7;

  FUNC_1 (VAR_4 && VAR_5);
  VAR_6 = FUNC_0 (VAR_4);
  VAR_7 = FUNC_0 (VAR_5);

  return FUNC_2 (VAR_6, VAR_7);
}
