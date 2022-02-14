
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gp_sstatus; int gp_sepc; int gp_tp; int gp_gp; int gp_sp; int gp_ra; int gp_a; int gp_s; int gp_t; } ;
struct TYPE_7__ {TYPE_1__ mc_gpregs; } ;
struct TYPE_6__ {TYPE_3__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct reg {int sstatus; int sepc; int tp; int gp; int sp; int ra; int a; int s; int t; } ;
typedef TYPE_3__ mcontext_t ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(const struct reg *VAR_0, ucontext_t *VAR_1)
{
 mcontext_t *VAR_2;

 VAR_2 = &VAR_1->uc_mcontext;

 FUNC_0(VAR_2->mc_gpregs.gp_t, VAR_0->t, sizeof(VAR_2->mc_gpregs.gp_t));
 FUNC_0(VAR_2->mc_gpregs.gp_s, VAR_0->s, sizeof(VAR_2->mc_gpregs.gp_s));
 FUNC_0(VAR_2->mc_gpregs.gp_a, VAR_0->a, sizeof(VAR_2->mc_gpregs.gp_a));
 VAR_2->mc_gpregs.gp_ra = VAR_0->ra;
 VAR_2->mc_gpregs.gp_sp = VAR_0->sp;
 VAR_2->mc_gpregs.gp_gp = VAR_0->gp;
 VAR_2->mc_gpregs.gp_tp = VAR_0->tp;
 VAR_2->mc_gpregs.gp_sepc = VAR_0->sepc;
 VAR_2->mc_gpregs.gp_sstatus = VAR_0->sstatus;
}
