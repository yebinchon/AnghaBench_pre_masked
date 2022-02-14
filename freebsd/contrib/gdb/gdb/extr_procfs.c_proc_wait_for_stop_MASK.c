
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tid; int status_valid; int prstatus; int ctl_fd; int pid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,int) ;

int
FUNC_8 (procinfo *VAR_2)
{
  int VAR_3;
  if (VAR_2->tid != 0)
    VAR_2 = FUNC_1 (VAR_2->pid, 0);
  VAR_3 = (FUNC_2 (VAR_2->ctl_fd, VAR_1, &VAR_2->prstatus) >= 0);

  if (VAR_3)
    {
      VAR_2->status_valid = 1;
      FUNC_0 (FUNC_3 (VAR_2),
    FUNC_6 (VAR_2),
    FUNC_5 (VAR_2),
    FUNC_4 (VAR_2));
    }


  return VAR_3;
}
