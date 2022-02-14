
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct envxmm {int en_tw; int en_fos; int en_foo; int en_opcode; int en_fcs; int en_fip; int en_sw; int en_cw; } ;
struct savexmm {TYPE_1__* sv_fp; struct envxmm sv_env; } ;
struct env87 {int en_tw; int en_fos; int en_foo; int en_opcode; int en_fcs; int en_fip; int en_sw; int en_cw; } ;
struct save87 {int * sv_ac; struct env87 sv_env; } ;
struct TYPE_2__ {int fp_acc; } ;



__attribute__((used)) static void
FUNC_0(struct savexmm *VAR_0, struct save87 *VAR_1)
{
 struct env87 *VAR_2;
 struct envxmm *VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->sv_env;
 VAR_3 = &VAR_0->sv_env;


 VAR_2->en_cw = VAR_3->en_cw;
 VAR_2->en_sw = VAR_3->en_sw;
 VAR_2->en_fip = VAR_3->en_fip;
 VAR_2->en_fcs = VAR_3->en_fcs;
 VAR_2->en_opcode = VAR_3->en_opcode;
 VAR_2->en_foo = VAR_3->en_foo;
 VAR_2->en_fos = VAR_3->en_fos;


 VAR_2->en_tw = 0xffff;
 for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
  VAR_1->sv_ac[VAR_4] = VAR_0->sv_fp[VAR_4].fp_acc;
  if ((VAR_3->en_tw & (1 << VAR_4)) != 0)

   VAR_2->en_tw &= ~(3 << VAR_4 * 2);
 }
}
