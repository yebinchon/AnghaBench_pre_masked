
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tid; struct TYPE_7__* thread_list; int pid; } ;
typedef TYPE_1__ procinfo ;


 int FUNC_0 (TYPE_1__**,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_2 (procinfo *VAR_1)
{
  procinfo *VAR_2;

  if (VAR_1->tid != 0)
    {
      VAR_2 = FUNC_1 (VAR_1->pid, 0);
      FUNC_0 (&VAR_2->thread_list, VAR_1);
    }
  else
    {

      while (VAR_1->thread_list != ((void*)0))
 FUNC_0 (&VAR_1->thread_list, VAR_1->thread_list);

      FUNC_0 (&VAR_0, VAR_1);
    }
}
