
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tid; int ctl_fd; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,void*,int) ;

int
FUNC_3 (procinfo *VAR_2)
{
  int VAR_3;
  if (VAR_2->tid != 0)
    VAR_2 = FUNC_0 (VAR_2->pid, 0);







  VAR_3 = (FUNC_1 (VAR_2->ctl_fd, VAR_1, 0) >= 0);


  return VAR_3;
}
