
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* alt_state_t ;
struct TYPE_6__ {struct TYPE_6__* next_sorted_alt_state; } ;


 scalar_t__ FUNC_0 (TYPE_1__**,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_1 (alt_state_t VAR_0, alt_state_t VAR_1)
{
  while (VAR_0 != ((void*)0) && VAR_1 != ((void*)0)
         && FUNC_0 (&VAR_0, &VAR_1) == 0)
    {
      VAR_0 = VAR_0->next_sorted_alt_state;
      VAR_1 = VAR_1->next_sorted_alt_state;
    }
  return VAR_0 == VAR_1;
}
