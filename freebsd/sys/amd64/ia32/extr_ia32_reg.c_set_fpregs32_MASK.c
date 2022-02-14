
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct envxmm {int en_tw; int en_rdp; int en_opcode; int en_rip; int en_sw; int en_cw; } ;
struct savefpu {TYPE_1__* sv_fp; struct envxmm sv_env; } ;
struct env87 {int en_tw; int en_foo; int en_opcode; int en_fip; int en_sw; int en_cw; } ;
struct save87 {int * sv_ac; struct env87 sv_env; } ;
struct fpreg32 {int dummy; } ;
struct TYPE_2__ {int fp_acc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct thread*) ;
 struct savefpu* FUNC_2 (struct thread*) ;

int
FUNC_3(struct thread *VAR_0, struct fpreg32 *VAR_1)
{
 struct save87 *VAR_2 = (struct save87 *)VAR_1;
 struct env87 *VAR_3 = &VAR_2->sv_env;
 struct savefpu *VAR_4 = FUNC_2(VAR_0);
 struct envxmm *VAR_5 = &VAR_4->sv_env;
 int VAR_6;


 VAR_5->en_cw = VAR_3->en_cw;
 VAR_5->en_sw = VAR_3->en_sw;
 VAR_5->en_rip = VAR_3->en_fip;

 VAR_5->en_opcode = VAR_3->en_opcode;
 VAR_5->en_rdp = VAR_3->en_foo;


 VAR_5->en_tw = 0;
 for (VAR_6 = 0; VAR_6 < 8; ++VAR_6) {
  VAR_4->sv_fp[VAR_6].fp_acc = VAR_2->sv_ac[VAR_6];
  if ((VAR_3->en_tw & (3 << VAR_6 * 2)) != (3 << VAR_6 * 2))
   VAR_5->en_tw |= 1 << VAR_6;
 }

 for (VAR_6 = 8; VAR_6 < 16; ++VAR_6)
  FUNC_0(&VAR_4->sv_fp[VAR_6].fp_acc, sizeof(VAR_4->sv_fp[VAR_6].fp_acc));
 FUNC_1(VAR_0);

 return (0);
}
