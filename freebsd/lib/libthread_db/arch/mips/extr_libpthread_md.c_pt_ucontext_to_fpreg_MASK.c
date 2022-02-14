
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mc_fpregs; } ;
struct TYPE_5__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct fpreg {int r_regs; } ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(const ucontext_t *VAR_0, struct fpreg *VAR_1)
{

 FUNC_0(VAR_1->r_regs, VAR_0->uc_mcontext.mc_fpregs,
     sizeof(VAR_0->uc_mcontext.mc_fpregs));
}
