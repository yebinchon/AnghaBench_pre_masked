
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tid; int ctl_fd; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
struct TYPE_6__ {int si_uid; int si_pid; scalar_t__ si_errno; scalar_t__ si_code; scalar_t__ si_signo; } ;
typedef TYPE_2__ gdb_siginfo_t ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,void*,int) ;

int
FUNC_5 (procinfo *VAR_2)
{
  int VAR_3;
  if (VAR_2->tid != 0)
    VAR_2 = FUNC_0 (VAR_2->pid, 0);
  VAR_3 = (FUNC_3 (VAR_2->ctl_fd, VAR_1, 0) >= 0);


  return VAR_3;
}
