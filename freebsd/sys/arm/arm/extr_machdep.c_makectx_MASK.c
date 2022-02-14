
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_usr_sp; int tf_usr_lr; int tf_pc; int tf_r12; int tf_r11; int tf_r10; int tf_r9; int tf_r8; int tf_r7; int tf_r6; int tf_r5; int tf_r4; } ;
struct TYPE_2__ {int sf_sp; int sf_lr; int sf_pc; int sf_r12; int sf_r11; int sf_r10; int sf_r9; int sf_r8; int sf_r7; int sf_r6; int sf_r5; int sf_r4; } ;
struct pcb {TYPE_1__ pcb_regs; } ;



void
FUNC_0(struct trapframe *VAR_0, struct pcb *VAR_1)
{
 VAR_1->pcb_regs.sf_r4 = VAR_0->tf_r4;
 VAR_1->pcb_regs.sf_r5 = VAR_0->tf_r5;
 VAR_1->pcb_regs.sf_r6 = VAR_0->tf_r6;
 VAR_1->pcb_regs.sf_r7 = VAR_0->tf_r7;
 VAR_1->pcb_regs.sf_r8 = VAR_0->tf_r8;
 VAR_1->pcb_regs.sf_r9 = VAR_0->tf_r9;
 VAR_1->pcb_regs.sf_r10 = VAR_0->tf_r10;
 VAR_1->pcb_regs.sf_r11 = VAR_0->tf_r11;
 VAR_1->pcb_regs.sf_r12 = VAR_0->tf_r12;
 VAR_1->pcb_regs.sf_pc = VAR_0->tf_pc;
 VAR_1->pcb_regs.sf_lr = VAR_0->tf_usr_lr;
 VAR_1->pcb_regs.sf_sp = VAR_0->tf_usr_sp;
}
