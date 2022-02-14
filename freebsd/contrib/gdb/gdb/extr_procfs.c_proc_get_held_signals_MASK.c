
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int uc_sigmask; } ;
struct TYPE_9__ {int pr_lwphold; TYPE_1__ pr_context; } ;
struct TYPE_10__ {TYPE_2__ pr_lwp; } ;
struct TYPE_11__ {scalar_t__ tid; int ctl_fd; TYPE_3__ prstatus; int status_valid; int pid; } ;
typedef TYPE_4__ procinfo ;
typedef int gdb_sigset_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;

gdb_sigset_t *
FUNC_4 (procinfo *VAR_1, gdb_sigset_t *VAR_2)
{
  gdb_sigset_t *VAR_3 = ((void*)0);
  if (VAR_1->tid != 0)
    VAR_1 = FUNC_0 (VAR_1->pid, 0);
  {
    static gdb_sigset_t VAR_4;

    if (FUNC_1 (VAR_1->ctl_fd, VAR_0, &VAR_4) >= 0)
      VAR_3 = &VAR_4;
  }

  if (VAR_2 && VAR_3)
    FUNC_2 (VAR_2, VAR_3, sizeof (gdb_sigset_t));

  return VAR_3;
}
