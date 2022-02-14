
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_4__* arc_t ;
struct TYPE_11__ {TYPE_3__* insn; TYPE_1__* to_state; } ;
struct TYPE_10__ {TYPE_2__* insn_reserv_decl; } ;
struct TYPE_9__ {int equiv_class_num; } ;
struct TYPE_8__ {int equiv_class_num_1; int equiv_class_num_2; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3 (state_t VAR_0, int VAR_1)
{
  arc_t VAR_2;

  for (VAR_2 = FUNC_0 (VAR_0); VAR_2 != ((void*)0); VAR_2 = FUNC_2 (VAR_2))
    {
      FUNC_1 (!VAR_2->insn->insn_reserv_decl->equiv_class_num);
      VAR_2->insn->insn_reserv_decl->equiv_class_num
 = (VAR_1
           ? VAR_2->to_state->equiv_class_num_1
    : VAR_2->to_state->equiv_class_num_2);
      FUNC_1 (VAR_2->insn->insn_reserv_decl->equiv_class_num);
    }
}
