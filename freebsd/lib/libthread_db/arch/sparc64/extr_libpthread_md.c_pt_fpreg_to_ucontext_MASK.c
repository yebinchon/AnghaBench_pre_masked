
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int _mc_fprs; int _mc_gsr; int _mc_fsr; int mc_fp; } ;
struct TYPE_4__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct fpreg {int fr_gsr; int fr_fsr; int fr_regs; } ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(const struct fpreg* VAR_1, ucontext_t *VAR_2)
{
 mcontext_t *VAR_3 = &VAR_2->uc_mcontext;

 FUNC_1(VAR_3->mc_fp, VAR_1->fr_regs, FUNC_0(sizeof(VAR_3->mc_fp),
     sizeof(VAR_1->fr_regs)));
 VAR_3->_mc_fsr = VAR_1->fr_fsr;
 VAR_3->_mc_gsr = VAR_1->fr_gsr;
 VAR_3->_mc_fprs |= VAR_0;
}
