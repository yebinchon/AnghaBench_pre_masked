
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_esp; int tf_cs; int tf_eip; int tf_ebx; int tf_ebp; int tf_esi; int tf_edi; } ;
struct pcb {int pcb_esp; int pcb_gs; int pcb_eip; int pcb_ebx; int pcb_ebp; int pcb_esi; int pcb_edi; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

void
FUNC_2(struct trapframe *VAR_0, struct pcb *VAR_1)
{

 VAR_1->pcb_edi = VAR_0->tf_edi;
 VAR_1->pcb_esi = VAR_0->tf_esi;
 VAR_1->pcb_ebp = VAR_0->tf_ebp;
 VAR_1->pcb_ebx = VAR_0->tf_ebx;
 VAR_1->pcb_eip = VAR_0->tf_eip;
 VAR_1->pcb_esp = (FUNC_0(VAR_0->tf_cs)) ? VAR_0->tf_esp : (int)(VAR_0 + 1) - 8;
 VAR_1->pcb_gs = FUNC_1();
}
