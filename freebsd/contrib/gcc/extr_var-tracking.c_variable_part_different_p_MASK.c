
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* loc_chain; } ;
typedef TYPE_1__ variable_part ;
typedef TYPE_2__* location_chain ;
struct TYPE_6__ {int loc; struct TYPE_6__* next; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3 (variable_part *VAR_0, variable_part *VAR_1)
{
  location_chain VAR_2, VAR_3;

  for (VAR_2 = VAR_0->loc_chain; VAR_2; VAR_2 = VAR_2->next)
    {
      for (VAR_3 = VAR_1->loc_chain; VAR_3; VAR_3 = VAR_3->next)
 {
   if (FUNC_1 (VAR_2->loc) && FUNC_1 (VAR_3->loc))
     {
       if (FUNC_0 (VAR_2->loc) == FUNC_0 (VAR_3->loc))
  break;
     }
   if (FUNC_2 (VAR_2->loc, VAR_3->loc))
     break;
 }
      if (!VAR_3)
 return 1;
    }
  return 0;
}
