
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct envxmm {int en_mxcsr_mask; int en_mxcsr; int en_rdp; int en_rip; int en_opcode; int en_tw; int en_sw; int en_cw; } ;
struct savefpu {TYPE_3__* sv_xmm; TYPE_2__* sv_fp; struct envxmm sv_env; } ;
struct fpreg {int * fpr_xacc; int * fpr_acc; int fpr_env; } ;
struct TYPE_6__ {int xmm_bytes; } ;
struct TYPE_4__ {int fp_bytes; } ;
struct TYPE_5__ {TYPE_1__ fp_acc; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct fpreg*,int) ;

__attribute__((used)) static void
FUNC_2(struct savefpu *VAR_0, struct fpreg *VAR_1)
{
 struct envxmm *VAR_2 = (struct envxmm *)&VAR_1->fpr_env;
 struct envxmm *VAR_3 = &VAR_0->sv_env;
 int VAR_4;


 FUNC_1(VAR_1, sizeof(*VAR_1));


 VAR_2->en_cw = VAR_3->en_cw;
 VAR_2->en_sw = VAR_3->en_sw;
 VAR_2->en_tw = VAR_3->en_tw;
 VAR_2->en_opcode = VAR_3->en_opcode;
 VAR_2->en_rip = VAR_3->en_rip;
 VAR_2->en_rdp = VAR_3->en_rdp;
 VAR_2->en_mxcsr = VAR_3->en_mxcsr;
 VAR_2->en_mxcsr_mask = VAR_3->en_mxcsr_mask;


 for (VAR_4 = 0; VAR_4 < 8; ++VAR_4)
  FUNC_0(VAR_0->sv_fp[VAR_4].fp_acc.fp_bytes, VAR_1->fpr_acc[VAR_4], 10);


 for (VAR_4 = 0; VAR_4 < 16; ++VAR_4)
  FUNC_0(VAR_0->sv_xmm[VAR_4].xmm_bytes, VAR_1->fpr_xacc[VAR_4], 16);
}
