
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sysset_t ;
struct TYPE_9__ {scalar_t__ pr_sysexit_offset; int pr_sysexit; } ;
struct TYPE_10__ {scalar_t__ tid; scalar_t__ status_fd; int ctl_fd; TYPE_1__ prstatus; int status_valid; int pid; } ;
typedef TYPE_2__ procinfo ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *,int *,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__,int *,size_t) ;
 int * FUNC_8 (TYPE_2__*) ;
 size_t FUNC_9 (TYPE_2__*) ;

sysset_t *
FUNC_10 (procinfo *VAR_3, sysset_t *VAR_4)
{
  sysset_t * VAR_5 = ((void*)0);
  if (VAR_3->tid != 0)
    VAR_3 = FUNC_0 (VAR_3->pid, 0);
  {
    static sysset_t VAR_6;

    if (FUNC_2 (VAR_3->ctl_fd, VAR_1, &VAR_6) >= 0)
      VAR_5 = &VAR_6;
  }

  if (VAR_4 && VAR_5)
    FUNC_4 (VAR_4, VAR_5, FUNC_9 (VAR_3));

  return VAR_5;
}
