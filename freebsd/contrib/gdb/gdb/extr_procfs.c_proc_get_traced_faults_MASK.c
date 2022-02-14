
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pr_flttrace; } ;
struct TYPE_7__ {scalar_t__ tid; int ctl_fd; TYPE_1__ prstatus; int status_valid; int pid; } ;
typedef TYPE_2__ procinfo ;
typedef int fltset_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_2__*) ;

fltset_t *
FUNC_4 (procinfo *VAR_1, fltset_t *VAR_2)
{
  fltset_t *VAR_3 = ((void*)0);
  if (VAR_1->tid != 0)
    VAR_1 = FUNC_0 (VAR_1->pid, 0);
  {
    static fltset_t VAR_4;

    if (FUNC_1 (VAR_1->ctl_fd, VAR_0, &VAR_4) >= 0)
      VAR_3 = &VAR_4;
  }

  if (VAR_2 && VAR_3)
    FUNC_2 (VAR_2, VAR_3, sizeof (fltset_t));

  return VAR_3;
}
