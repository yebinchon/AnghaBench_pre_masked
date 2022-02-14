
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct alt_state {int dummy; } ;
typedef TYPE_1__* alt_state_t ;
struct TYPE_5__ {int * next_sorted_alt_state; struct TYPE_5__* next_alt_state; int * state; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static alt_state_t
FUNC_1 (void)
{
  alt_state_t VAR_2;

  if (VAR_1 != ((void*)0))
    {
      VAR_2 = VAR_1;
      VAR_1 = VAR_1->next_alt_state;
    }
  else
    {

      VAR_0++;

      VAR_2 = FUNC_0 (sizeof (struct alt_state));
    }
  VAR_2->state = ((void*)0);
  VAR_2->next_alt_state = ((void*)0);
  VAR_2->next_sorted_alt_state = ((void*)0);
  return VAR_2;
}
