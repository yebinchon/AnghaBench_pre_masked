
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_candidate {TYPE_1__* warnings; } ;
struct TYPE_2__ {struct TYPE_2__* next; struct z_candidate* loser; } ;
typedef TYPE_1__ candidate_warning ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct z_candidate *VAR_0, struct z_candidate *VAR_1)
{
  candidate_warning *VAR_2 = (candidate_warning *)
    FUNC_0 (sizeof (candidate_warning));
  VAR_2->loser = VAR_1;
  VAR_2->next = VAR_0->warnings;
  VAR_0->warnings = VAR_2;
}
