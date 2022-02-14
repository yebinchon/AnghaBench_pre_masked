
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tid; int ctl_fd; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
struct TYPE_7__ {int si_signo; int si_uid; int si_pid; scalar_t__ si_code; } ;
typedef TYPE_2__ gdb_siginfo_t ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,void*,int) ;

int
FUNC_6 (procinfo *VAR_2, int VAR_3)
{
  int VAR_4;
  struct {
    procfs_ctl_t cmd;

    char sinfo[sizeof (gdb_siginfo_t)];
  } VAR_5;
  gdb_siginfo_t *VAR_6;
  if (VAR_2->tid != 0)
    VAR_2 = FUNC_0 (VAR_2->pid, 0);
  VAR_6 = (gdb_siginfo_t *) &VAR_5.sinfo;
  VAR_6->si_signo = VAR_3;
  VAR_6->si_code = 0;
  VAR_6->si_pid = FUNC_1 ();
  VAR_6->si_uid = FUNC_2 ();





  VAR_4 = (FUNC_3 (VAR_2->ctl_fd, VAR_1, (void *) &VAR_5.sinfo) >= 0);


  return VAR_4;
}
