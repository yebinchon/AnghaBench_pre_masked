
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int gregs; } ;
struct TYPE_9__ {TYPE_1__ uc_mcontext; } ;
struct TYPE_10__ {int pr_reg; TYPE_2__ pr_context; } ;
struct TYPE_11__ {int pr_reg; TYPE_3__ pr_lwp; } ;
struct TYPE_12__ {TYPE_4__ prstatus; int gregs_valid; int status_valid; } ;
typedef TYPE_5__ procinfo ;
typedef int gdb_gregset_t ;


 int FUNC_0 (TYPE_5__*) ;

gdb_gregset_t *
FUNC_1 (procinfo *VAR_0)
{
  if (!VAR_0->status_valid || !VAR_0->gregs_valid)
    if (!FUNC_0 (VAR_0))
      return ((void*)0);
  return &VAR_0->prstatus.pr_reg;

}
