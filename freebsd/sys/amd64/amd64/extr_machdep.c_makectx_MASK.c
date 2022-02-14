
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_rsp; int tf_rip; int tf_rbx; int tf_rbp; int tf_r15; int tf_r14; int tf_r13; int tf_r12; } ;
struct pcb {int pcb_rsp; int pcb_rip; int pcb_rbx; int pcb_rbp; int pcb_r15; int pcb_r14; int pcb_r13; int pcb_r12; } ;



void
FUNC_0(struct trapframe *VAR_0, struct pcb *VAR_1)
{

 VAR_1->pcb_r12 = VAR_0->tf_r12;
 VAR_1->pcb_r13 = VAR_0->tf_r13;
 VAR_1->pcb_r14 = VAR_0->tf_r14;
 VAR_1->pcb_r15 = VAR_0->tf_r15;
 VAR_1->pcb_rbp = VAR_0->tf_rbp;
 VAR_1->pcb_rbx = VAR_0->tf_rbx;
 VAR_1->pcb_rip = VAR_0->tf_rip;
 VAR_1->pcb_rsp = VAR_0->tf_rsp;
}
