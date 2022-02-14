
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tid; scalar_t__ status_valid; int ctl_fd; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
typedef int gdb_sigset_t ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char**,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5 (procinfo *VAR_2, gdb_sigset_t *VAR_3)
{
  int VAR_4;
  if (VAR_2->tid != 0)
    VAR_2 = FUNC_0 (VAR_2->pid, 0);
  VAR_4 = (FUNC_1 (VAR_2->ctl_fd, VAR_1, VAR_3) >= 0);


  VAR_2->status_valid = 0;

  if (!VAR_4)
    FUNC_3 ("procfs: set_traced_signals failed");
  return VAR_4;
}
