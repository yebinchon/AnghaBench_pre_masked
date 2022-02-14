
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mc_fpstate; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct savexmm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int *,int) ;

void
FUNC_1(const ucontext_t *VAR_1, char *VAR_2)
{
 if (VAR_0)
  FUNC_0(VAR_2, &VAR_1->uc_mcontext.mc_fpstate, sizeof(struct savexmm));
}
