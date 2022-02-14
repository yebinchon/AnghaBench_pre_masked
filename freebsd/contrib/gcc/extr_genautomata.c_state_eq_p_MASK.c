
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef TYPE_2__* alt_state_t ;
struct TYPE_4__ {scalar_t__ state; struct TYPE_4__* next_sorted_alt_state; } ;
struct TYPE_3__ {scalar_t__ automaton; TYPE_2__* component_states; int reservs; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  alt_state_t VAR_2;
  alt_state_t VAR_3;

  if (((state_t) VAR_0)->automaton != ((state_t) VAR_1)->automaton)
    return 0;
  else if (((state_t) VAR_0)->component_states == ((void*)0)
           && ((state_t) VAR_1)->component_states == ((void*)0))
    return FUNC_0 (((state_t) VAR_0)->reservs,
      ((state_t) VAR_1)->reservs);
  else if (((state_t) VAR_0)->component_states != ((void*)0)
           && ((state_t) VAR_1)->component_states != ((void*)0))
    {
      for (VAR_2 = ((state_t) VAR_0)->component_states,
           VAR_3 = ((state_t) VAR_1)->component_states;
           VAR_2 != ((void*)0) && VAR_3 != ((void*)0);
           VAR_2 = VAR_2->next_sorted_alt_state,
    VAR_3 = VAR_3->next_sorted_alt_state)


        if (VAR_2->state != VAR_3->state)
          return 0;
      return VAR_2 == VAR_3;
    }
  else
    return 0;
}
