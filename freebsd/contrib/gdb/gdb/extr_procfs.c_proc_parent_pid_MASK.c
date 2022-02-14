
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pr_ppid; } ;
struct TYPE_7__ {scalar_t__ tid; TYPE_1__ prstatus; int status_valid; int pid; } ;
typedef TYPE_2__ procinfo ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

int
FUNC_2 (procinfo *VAR_0)
{







  if (VAR_0->tid != 0)
    VAR_0 = FUNC_0 (VAR_0->pid, 0);

  if (!VAR_0->status_valid)
    if (!FUNC_1 (VAR_0))
      return 0;

  return VAR_0->prstatus.pr_ppid;
}
