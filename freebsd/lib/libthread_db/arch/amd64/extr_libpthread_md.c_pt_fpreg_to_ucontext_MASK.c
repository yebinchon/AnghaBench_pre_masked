
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mc_fpstate; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct fpreg {int dummy; } ;


 int FUNC_0 (int *,struct fpreg const*,int) ;

void
FUNC_1(const struct fpreg* VAR_0, ucontext_t *VAR_1)
{

 FUNC_0(&VAR_1->uc_mcontext.mc_fpstate, VAR_0, sizeof(*VAR_0));
}
