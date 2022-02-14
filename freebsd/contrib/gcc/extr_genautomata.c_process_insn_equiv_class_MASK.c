
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* arc_t ;
typedef TYPE_3__* ainsn_t ;
struct TYPE_13__ {TYPE_1__* insn_reserv_decl; struct TYPE_13__* next_equiv_class_insn; } ;
struct TYPE_12__ {scalar_t__ to_state; } ;
struct TYPE_11__ {size_t insn_num; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3 (ainsn_t VAR_0, arc_t *VAR_1)
{
  ainsn_t VAR_2;
  ainsn_t VAR_3;
  ainsn_t VAR_4;
  arc_t VAR_5;

  FUNC_1 (VAR_1 [VAR_0->insn_reserv_decl->insn_num]);
  VAR_3 = VAR_0;

  VAR_4 = ((void*)0);
  do
    {
      VAR_2 = VAR_3->next_equiv_class_insn;
      VAR_5 = VAR_1 [VAR_3->insn_reserv_decl->insn_num];
      if (VAR_5 == ((void*)0)
          || (VAR_1 [VAR_0->insn_reserv_decl->insn_num]->to_state
              != VAR_5->to_state))
        {
          FUNC_0 (VAR_3);
          VAR_4 = FUNC_2 (VAR_3,
           VAR_4);
        }
      VAR_3 = VAR_2;
    }
  while (VAR_3 != VAR_0);
}
