
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pr_sysarg; } ;
struct TYPE_7__ {int pr_sysarg; TYPE_1__ pr_lwp; } ;
struct TYPE_8__ {TYPE_2__ prstatus; int status_valid; } ;
typedef TYPE_3__ procinfo ;


 int FUNC_0 (TYPE_3__*) ;

long *
FUNC_1 (procinfo *VAR_0)
{
  if (!VAR_0->status_valid)
    if (!FUNC_0 (VAR_0))
      return ((void*)0);




  return (long *) &VAR_0->prstatus.pr_sysarg;

}
