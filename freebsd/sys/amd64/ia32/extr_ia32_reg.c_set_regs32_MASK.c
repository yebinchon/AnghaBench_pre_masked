
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_ss; int tf_rsp; int tf_rflags; int tf_cs; int tf_rip; int tf_rax; int tf_rcx; int tf_rdx; int tf_rbx; int tf_rbp; int tf_rsi; int tf_rdi; int tf_flags; int tf_ds; int tf_es; int tf_fs; int tf_gs; } ;
struct thread {int td_pcb; struct trapframe* td_frame; } ;
struct reg32 {int r_ss; int r_esp; int r_eflags; int r_cs; int r_eip; int r_eax; int r_ecx; int r_edx; int r_ebx; int r_ebp; int r_esi; int r_edi; int r_ds; int r_es; int r_fs; int r_gs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct thread *VAR_3, struct reg32 *VAR_4)
{
 struct trapframe *VAR_5;

 VAR_5 = VAR_3->td_frame;
 if (!FUNC_1(VAR_4->r_eflags, VAR_5->tf_rflags) || !FUNC_0(VAR_4->r_cs))
  return (VAR_0);
 VAR_5->tf_gs = VAR_4->r_gs;
 VAR_5->tf_fs = VAR_4->r_fs;
 VAR_5->tf_es = VAR_4->r_es;
 VAR_5->tf_ds = VAR_4->r_ds;
 FUNC_2(VAR_3->td_pcb, VAR_1);
 VAR_5->tf_flags = VAR_2;
 VAR_5->tf_rdi = VAR_4->r_edi;
 VAR_5->tf_rsi = VAR_4->r_esi;
 VAR_5->tf_rbp = VAR_4->r_ebp;
 VAR_5->tf_rbx = VAR_4->r_ebx;
 VAR_5->tf_rdx = VAR_4->r_edx;
 VAR_5->tf_rcx = VAR_4->r_ecx;
 VAR_5->tf_rax = VAR_4->r_eax;
 VAR_5->tf_rip = VAR_4->r_eip;
 VAR_5->tf_cs = VAR_4->r_cs;
 VAR_5->tf_rflags = VAR_4->r_eflags;
 VAR_5->tf_rsp = VAR_4->r_esp;
 VAR_5->tf_ss = VAR_4->r_ss;
 return (0);
}
