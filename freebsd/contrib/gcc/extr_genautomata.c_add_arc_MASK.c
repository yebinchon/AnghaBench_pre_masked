
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct arc {int dummy; } ;
typedef TYPE_1__* state_t ;
typedef TYPE_2__* arc_t ;
typedef TYPE_3__* ainsn_t ;
struct TYPE_16__ {int arc_exists_p; } ;
struct TYPE_15__ {int * next_arc_marked_by_insn; struct TYPE_15__* next_out_arc; TYPE_3__* insn; TYPE_1__* to_state; } ;
struct TYPE_14__ {int num_out_arcs; TYPE_2__* first_out_arc; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_3__*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static arc_t
FUNC_2 (state_t VAR_2, state_t VAR_3, ainsn_t VAR_4)
{
  arc_t VAR_5;

  VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_4);
  if (VAR_5 != ((void*)0))
    return VAR_5;
  if (VAR_1 == ((void*)0))
    {

      VAR_0++;

      VAR_5 = FUNC_0 (sizeof (struct arc));
      VAR_5->to_state = ((void*)0);
      VAR_5->insn = ((void*)0);
      VAR_5->next_out_arc = ((void*)0);
    }
  else
    {
      VAR_5 = VAR_1;
      VAR_1 = VAR_1->next_out_arc;
    }
  VAR_5->to_state = VAR_3;
  VAR_5->insn = VAR_4;
  VAR_4->arc_exists_p = 1;
  VAR_5->next_out_arc = VAR_2->first_out_arc;
  VAR_2->first_out_arc = VAR_5;
  VAR_2->num_out_arcs++;
  VAR_5->next_arc_marked_by_insn = ((void*)0);
  return VAR_5;
}
