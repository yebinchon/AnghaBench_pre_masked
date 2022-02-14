
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_3__* arc_t ;
struct TYPE_9__ {TYPE_2__* to_state; TYPE_1__* insn; } ;
struct TYPE_8__ {int new_cycle_p; } ;
struct TYPE_7__ {scalar_t__ insn_reserv_decl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3 (state_t VAR_1)
{
  arc_t VAR_2;

  for (VAR_2 = FUNC_1 (VAR_1); VAR_2 != ((void*)0); VAR_2 = FUNC_2 (VAR_2))
    if (VAR_2->insn->insn_reserv_decl
 == FUNC_0 (VAR_0))
      VAR_2->to_state->new_cycle_p = 1;
}
