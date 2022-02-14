
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_ss; int tf_esp; int tf_eflags; int tf_cs; int tf_eip; int tf_eax; int tf_ecx; int tf_edx; int tf_ebx; int tf_ebp; int tf_esi; int tf_edi; int tf_ds; int tf_es; int tf_fs; } ;
struct thread {struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct reg {int r_gs; int r_ss; int r_esp; int r_eflags; int r_cs; int r_eip; int r_eax; int r_ecx; int r_edx; int r_ebx; int r_ebp; int r_esi; int r_edi; int r_ds; int r_es; int r_fs; } ;
struct pcb {int pcb_gs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

int
FUNC_2(struct thread *VAR_1, struct reg *VAR_2)
{
 struct pcb *VAR_3;
 struct trapframe *VAR_4;

 VAR_4 = VAR_1->td_frame;
 if (!FUNC_1(VAR_2->r_eflags, VAR_4->tf_eflags) ||
     !FUNC_0(VAR_2->r_cs))
  return (VAR_0);
 VAR_3 = VAR_1->td_pcb;
 VAR_4->tf_fs = VAR_2->r_fs;
 VAR_4->tf_es = VAR_2->r_es;
 VAR_4->tf_ds = VAR_2->r_ds;
 VAR_4->tf_edi = VAR_2->r_edi;
 VAR_4->tf_esi = VAR_2->r_esi;
 VAR_4->tf_ebp = VAR_2->r_ebp;
 VAR_4->tf_ebx = VAR_2->r_ebx;
 VAR_4->tf_edx = VAR_2->r_edx;
 VAR_4->tf_ecx = VAR_2->r_ecx;
 VAR_4->tf_eax = VAR_2->r_eax;
 VAR_4->tf_eip = VAR_2->r_eip;
 VAR_4->tf_cs = VAR_2->r_cs;
 VAR_4->tf_eflags = VAR_2->r_eflags;
 VAR_4->tf_esp = VAR_2->r_esp;
 VAR_4->tf_ss = VAR_2->r_ss;
 VAR_3->pcb_gs = VAR_2->r_gs;
 return (0);
}
