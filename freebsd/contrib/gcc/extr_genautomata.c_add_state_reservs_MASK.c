
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef TYPE_2__* alt_state_t ;
struct TYPE_5__ {TYPE_1__* state; struct TYPE_5__* next_sorted_alt_state; } ;
struct TYPE_4__ {int reservs; TYPE_2__* component_states; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1 (state_t VAR_3)
{
  alt_state_t VAR_4;

  if (VAR_3->component_states != ((void*)0))
    for (VAR_4 = VAR_3->component_states;
         VAR_4 != ((void*)0);
         VAR_4 = VAR_4->next_sorted_alt_state)
      FUNC_1 (VAR_4->state);
  else
    FUNC_0 (VAR_1,VAR_0, VAR_2, VAR_3->reservs);
}
