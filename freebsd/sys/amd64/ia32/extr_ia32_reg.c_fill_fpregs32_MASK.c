
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
struct envxmm {int en_tw; int en_rdp; int en_opcode; int en_rip; int en_sw; int en_cw; } ;
struct savefpu {TYPE_2__* sv_fp; struct envxmm sv_env; } ;
struct env87 {int en_tw; int en_fos; int en_foo; int en_opcode; int en_fcs; int en_fip; int en_sw; int en_cw; } ;
struct save87 {int * sv_ac; struct env87 sv_env; } ;
struct fpreg32 {int dummy; } ;
struct TYPE_4__ {int fp_acc; } ;
struct TYPE_3__ {int tf_ds; int tf_cs; } ;


 int FUNC_0 (struct fpreg32*,int) ;
 int FUNC_1 (struct thread*) ;
 struct savefpu* FUNC_2 (struct thread*) ;

int
FUNC_3(struct thread *VAR_0, struct fpreg32 *VAR_1)
{
 struct savefpu *VAR_2;
 struct save87 *VAR_3;
 struct env87 *VAR_4;
 struct envxmm *VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, sizeof(*VAR_1));
 VAR_3 = (struct save87 *)VAR_1;
 VAR_4 = &VAR_3->sv_env;
 FUNC_1(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 VAR_5 = &VAR_2->sv_env;


 VAR_4->en_cw = VAR_5->en_cw;
 VAR_4->en_sw = VAR_5->en_sw;







 VAR_4->en_fip = VAR_5->en_rip;
 VAR_4->en_fcs = VAR_0->td_frame->tf_cs;
 VAR_4->en_opcode = VAR_5->en_opcode;
 VAR_4->en_foo = VAR_5->en_rdp;

 VAR_4->en_fos = VAR_0->td_frame->tf_ds;


 VAR_4->en_tw = 0xffff;
 for (VAR_6 = 0; VAR_6 < 8; ++VAR_6) {
  VAR_3->sv_ac[VAR_6] = VAR_2->sv_fp[VAR_6].fp_acc;
  if ((VAR_5->en_tw & (1 << VAR_6)) != 0)
   VAR_4->en_tw &= ~(3 << VAR_6 * 2);
 }

 return (0);
}
