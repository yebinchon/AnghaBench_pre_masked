
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* state_t ;
typedef unsigned int hashval_t ;
typedef TYPE_4__* alt_state_t ;
struct TYPE_8__ {TYPE_1__* state; struct TYPE_8__* next_sorted_alt_state; } ;
struct TYPE_7__ {TYPE_2__* automaton; TYPE_4__* component_states; int reservs; } ;
struct TYPE_6__ {unsigned int automaton_order_num; } ;
struct TYPE_5__ {unsigned int unique_num; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_1)
{
  unsigned int VAR_2;
  alt_state_t VAR_3;

  if (((state_t) VAR_1)->component_states == ((void*)0))
    VAR_2 = FUNC_0 (((state_t) VAR_1)->reservs);
  else
    {
      VAR_2 = 0;
      for (VAR_3 = ((state_t) VAR_1)->component_states;
           VAR_3 != ((void*)0);
           VAR_3 = VAR_3->next_sorted_alt_state)
        VAR_2 = (((VAR_2 >> (sizeof (unsigned) - 1) * VAR_0)
                       | (VAR_2 << VAR_0))
                      + VAR_3->state->unique_num);
    }
  VAR_2 = (((VAR_2 >> (sizeof (unsigned) - 1) * VAR_0)
                 | (VAR_2 << VAR_0))
                + ((state_t) VAR_1)->automaton->automaton_order_num);
  return VAR_2;
}
