
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct invariant_expr_entry {scalar_t__ mode; int expr; TYPE_1__* inv; } ;
struct TYPE_2__ {int insn; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct invariant_expr_entry *VAR_2 = VAR_0;
  const struct invariant_expr_entry *VAR_3 = VAR_1;

  if (VAR_2->mode != VAR_3->mode)
    return 0;

  return FUNC_0 (VAR_2->inv->insn, VAR_2->expr,
     VAR_3->inv->insn, VAR_3->expr);
}
