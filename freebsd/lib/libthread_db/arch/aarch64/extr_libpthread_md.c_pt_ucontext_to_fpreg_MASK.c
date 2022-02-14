
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
 int FUNC_0 (struct fpreg*,int *,int) ;
 int FUNC_1 (struct fpreg*,int ,int) ;

void
FUNC_2(const ucontext_t *VAR_1, struct fpreg *VAR_2)
{
 const mcontext_t *VAR_3 = &VAR_1->uc_mcontext;

 if (VAR_3->mc_flags & VAR_0)
  FUNC_0(VAR_2, &VAR_3->mc_fpregs, sizeof(*VAR_2));
 else
  FUNC_1(VAR_2, 0, sizeof(*VAR_2));

}
