
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
 int FUNC_2 (struct fpreg*,int ,int) ;

void
FUNC_3(const ucontext_t *VAR_1, struct fpreg *VAR_2)
{
 const mcontext_t *VAR_3 = &VAR_1->uc_mcontext;

 if ((VAR_3->_mc_fprs & VAR_0) != 0) {
  FUNC_1(VAR_2->fr_regs, VAR_3->mc_fp, FUNC_0(sizeof(VAR_3->mc_fp),
      sizeof(VAR_2->fr_regs)));
  VAR_2->fr_fsr = VAR_3->_mc_fsr;
  VAR_2->fr_gsr = VAR_3->_mc_gsr;
 } else
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
}
