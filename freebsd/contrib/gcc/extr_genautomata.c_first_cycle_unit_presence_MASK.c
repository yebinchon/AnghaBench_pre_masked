
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* state_t ;
typedef TYPE_3__* alt_state_t ;
struct TYPE_7__ {TYPE_1__* state; struct TYPE_7__* next_sorted_alt_state; } ;
struct TYPE_6__ {TYPE_3__* component_states; int reservs; } ;
struct TYPE_5__ {int reservs; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1 (state_t VAR_0, int VAR_1)
{
  alt_state_t VAR_2;

  if (VAR_0->component_states == ((void*)0))
    return FUNC_0 (VAR_0->reservs, 0, VAR_1);
  else
    {
      for (VAR_2 = VAR_0->component_states;
    VAR_2 != ((void*)0);
    VAR_2 = VAR_2->next_sorted_alt_state)
 if (FUNC_0 (VAR_2->state->reservs, 0, VAR_1))
   return 1;
    }
  return 0;
}
