
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct state {int dummy; } ;
typedef TYPE_1__* state_t ;
typedef int set_el_t ;
typedef void* automaton_t ;
struct TYPE_5__ {int * reservs; void* longest_path_length; int unique_num; int * first_out_arc; void* automaton; int * component_states; scalar_t__ it_was_placed_in_stack_for_DFA_forming; scalar_t__ it_was_placed_in_stack_for_NDFA_forming; struct TYPE_5__* next_equiv_class_state; } ;


 void* VAR_0 ;
 int * FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static state_t
FUNC_4 (int VAR_6, automaton_t VAR_7)
{
  state_t VAR_8;

  FUNC_2 (VAR_5 > 0 && VAR_7);
  if (VAR_4)
    {
      VAR_8 = VAR_4;
      VAR_4 = VAR_8->next_equiv_class_state;

      VAR_8->next_equiv_class_state = ((void*)0);
      VAR_8->automaton = VAR_7;
      VAR_8->first_out_arc = ((void*)0);
      VAR_8->it_was_placed_in_stack_for_NDFA_forming = 0;
      VAR_8->it_was_placed_in_stack_for_DFA_forming = 0;
      VAR_8->component_states = ((void*)0);
      VAR_8->longest_path_length = VAR_0;
    }
  else
    {

      VAR_1++;

      VAR_8 = FUNC_1 (sizeof (struct state));
      VAR_8->automaton = VAR_7;
      VAR_8->first_out_arc = ((void*)0);
      VAR_8->unique_num = VAR_2;
      VAR_8->longest_path_length = VAR_0;
      VAR_2++;
    }
  if (VAR_6)
    {
      if (VAR_8->reservs == ((void*)0))
        VAR_8->reservs = FUNC_0 ();
      else
        FUNC_3 (VAR_8->reservs, 0, VAR_3 * sizeof (set_el_t));
    }
  return VAR_8;
}
