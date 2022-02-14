
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; int tid; struct TYPE_4__* next; struct TYPE_4__* thread_list; } ;
typedef TYPE_1__ procinfo ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static procinfo *
FUNC_0 (int VAR_1, int VAR_2)
{
  procinfo *VAR_3;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    if (VAR_3->pid == VAR_1)
      break;

  if (VAR_3)
    if (VAR_2)
      {







 for (VAR_3 = VAR_3->thread_list; VAR_3; VAR_3 = VAR_3->next)
   if (VAR_3->tid == VAR_2)
     break;
      }

  return VAR_3;
}
