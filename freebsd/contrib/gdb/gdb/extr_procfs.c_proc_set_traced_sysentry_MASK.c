
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct gdb_proc_ctl_pcsentry TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sysset_t ;
struct TYPE_7__ {scalar_t__ tid; scalar_t__ status_valid; int ctl_fd; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
struct gdb_proc_ctl_pcsentry {int cmd; char* sysset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char**,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;

int
FUNC_7 (procinfo *VAR_2, sysset_t *VAR_3)
{
  int VAR_4;
  if (VAR_2->tid != 0)
    VAR_2 = FUNC_0 (VAR_2->pid, 0);
  VAR_4 = (FUNC_1 (VAR_2->ctl_fd, VAR_1, VAR_3) >= 0);


  VAR_2->status_valid = 0;

  return VAR_4;
}
