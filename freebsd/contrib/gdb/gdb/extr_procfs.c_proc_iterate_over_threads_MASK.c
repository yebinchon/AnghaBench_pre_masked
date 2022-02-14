
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tid; struct TYPE_10__* next; struct TYPE_10__* thread_list; int pid; } ;
typedef TYPE_1__ procinfo ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,void*) ;

int
FUNC_2 (procinfo *VAR_0,
      int (*VAR_1) (procinfo *, procinfo *, void *),
      void *VAR_2)
{
  procinfo *VAR_3, *VAR_4;
  int VAR_5 = 0;
  if (VAR_0->tid != 0)
    VAR_0 = FUNC_0 (VAR_0->pid, 0);

  for (VAR_3 = VAR_0->thread_list; VAR_3 != ((void*)0); VAR_3 = VAR_4)
    {
      VAR_4 = VAR_3->next;
      if ((VAR_5 = (*VAR_1) (VAR_0, VAR_3, VAR_2)) != 0)
 break;
    }

  return VAR_5;
}
