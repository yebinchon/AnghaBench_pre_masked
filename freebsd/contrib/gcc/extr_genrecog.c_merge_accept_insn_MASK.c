
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_clobbers_to_add; int code_number; int lineno; } ;
struct TYPE_4__ {TYPE_1__ insn; } ;
struct decision_test {scalar_t__ type; TYPE_2__ u; struct decision_test* next; } ;
struct decision {struct decision_test* tests; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_2 (struct decision *VAR_2, struct decision *VAR_3)
{
  struct decision_test *VAR_4, *VAR_5;

  for (VAR_4 = VAR_2->tests; VAR_4; VAR_4 = VAR_4->next)
    if (VAR_4->type == VAR_0)
      break;
  if (VAR_4 == ((void*)0))
    return;

  for (VAR_5 = VAR_3->tests; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->type == VAR_0)
      break;
  if (VAR_5 == ((void*)0))
    return;




  if (VAR_4->u.insn.num_clobbers_to_add == 0
      && VAR_5->u.insn.num_clobbers_to_add > 0)
    {

    }
  else if (VAR_4->u.insn.num_clobbers_to_add > 0
    && VAR_5->u.insn.num_clobbers_to_add == 0)
    {

      VAR_4->u.insn = VAR_5->u.insn;
    }
  else
    {
      FUNC_1 (VAR_5->u.insn.lineno, "`%s' matches `%s'",
    FUNC_0 (VAR_5->u.insn.code_number),
    FUNC_0 (VAR_4->u.insn.code_number));
      FUNC_1 (VAR_4->u.insn.lineno, "previous definition of `%s'",
    FUNC_0 (VAR_4->u.insn.code_number));
      VAR_1++;
    }
}
