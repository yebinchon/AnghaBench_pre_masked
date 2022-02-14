
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gp_spsr; int gp_elr; int gp_lr; int gp_sp; int gp_x; } ;
struct TYPE_7__ {TYPE_1__ mc_gpregs; } ;
struct TYPE_6__ {TYPE_3__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct reg {int spsr; int elr; int lr; int sp; int x; } ;
typedef TYPE_3__ mcontext_t ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(const struct reg *VAR_0, ucontext_t *VAR_1)
{
 mcontext_t *VAR_2 = &VAR_1->uc_mcontext;

 FUNC_0(VAR_2->mc_gpregs.gp_x, VAR_0->x, sizeof(VAR_2->mc_gpregs.gp_x));
 VAR_2->mc_gpregs.gp_sp = VAR_0->sp;
 VAR_2->mc_gpregs.gp_lr = VAR_0->lr;
 VAR_2->mc_gpregs.gp_elr = VAR_0->elr;
 VAR_2->mc_gpregs.gp_spsr = VAR_0->spsr;
}
