
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pr_action; } ;
struct TYPE_8__ {int pr_action; TYPE_1__ pr_lwp; } ;
struct TYPE_9__ {scalar_t__ tid; TYPE_2__ prstatus; int status_valid; int pid; } ;
typedef TYPE_3__ procinfo ;
typedef int gdb_sigaction_t ;


 TYPE_3__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;

gdb_sigaction_t *
FUNC_3 (procinfo *VAR_0, gdb_sigaction_t *VAR_1)
{
  gdb_sigaction_t *VAR_2 = ((void*)0);
  if (VAR_0->tid != 0)
    VAR_0 = FUNC_0 (VAR_0->pid, 0);

  if (!VAR_0->status_valid)
    if (!FUNC_2 (VAR_0))
      return ((void*)0);




  VAR_2 = &VAR_0->prstatus.pr_action;

  if (VAR_1 && VAR_2)
    FUNC_1 (VAR_1, VAR_2, sizeof (gdb_sigaction_t));

  return VAR_2;
}
