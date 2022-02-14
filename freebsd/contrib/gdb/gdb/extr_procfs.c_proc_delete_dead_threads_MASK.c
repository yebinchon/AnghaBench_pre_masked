
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int thread_list; scalar_t__ status_valid; } ;
typedef TYPE_1__ procinfo ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2 (procinfo *VAR_0, procinfo *VAR_1, void *VAR_2)
{
  if (VAR_1 && VAR_0)
    {
      VAR_1->status_valid = 0;
      if (!FUNC_1 (VAR_1))
 FUNC_0 (&VAR_0->thread_list, VAR_1);
    }
  return 0;
}
