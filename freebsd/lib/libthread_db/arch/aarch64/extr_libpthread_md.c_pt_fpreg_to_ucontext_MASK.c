
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mc_flags; int mc_fpregs; } ;
struct TYPE_4__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct fpreg {int dummy; } ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct fpreg const*,int) ;

void
FUNC_1(const struct fpreg *VAR_1, ucontext_t *VAR_2)
{
 mcontext_t *VAR_3 = &VAR_2->uc_mcontext;

 FUNC_0(&VAR_3->mc_fpregs, VAR_1, sizeof(*VAR_1));
 VAR_3->mc_flags |= VAR_0;
}
