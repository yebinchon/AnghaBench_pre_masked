
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_flags; int tf_ss; int tf_rsp; int tf_rflags; int tf_cs; int tf_rip; int tf_rax; int tf_rcx; int tf_rdx; int tf_rbx; int tf_rbp; int tf_rsi; int tf_rdi; void* tf_ds; void* tf_es; int tf_fs; int tf_gs; } ;
struct thread {struct trapframe* td_frame; } ;
struct reg32 {scalar_t__ r_trapno; scalar_t__ r_err; int r_ss; int r_esp; int r_eflags; int r_cs; int r_eip; int r_eax; int r_ecx; int r_edx; int r_ebx; int r_ebp; int r_esi; int r_edi; void* r_ds; void* r_es; int r_fs; int r_gs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct thread *VAR_4, struct reg32 *VAR_5)
{
 struct trapframe *VAR_6;

 VAR_6 = VAR_4->td_frame;
 if (VAR_6->tf_flags & VAR_0) {
  VAR_5->r_gs = VAR_6->tf_gs;
  VAR_5->r_fs = VAR_6->tf_fs;
  VAR_5->r_es = VAR_6->tf_es;
  VAR_5->r_ds = VAR_6->tf_ds;
 } else {
  VAR_5->r_gs = VAR_3;
  VAR_5->r_fs = VAR_2;
  VAR_5->r_es = VAR_1;
  VAR_5->r_ds = VAR_1;
 }
 VAR_5->r_edi = VAR_6->tf_rdi;
 VAR_5->r_esi = VAR_6->tf_rsi;
 VAR_5->r_ebp = VAR_6->tf_rbp;
 VAR_5->r_ebx = VAR_6->tf_rbx;
 VAR_5->r_edx = VAR_6->tf_rdx;
 VAR_5->r_ecx = VAR_6->tf_rcx;
 VAR_5->r_eax = VAR_6->tf_rax;
 VAR_5->r_eip = VAR_6->tf_rip;
 VAR_5->r_cs = VAR_6->tf_cs;
 VAR_5->r_eflags = VAR_6->tf_rflags;
 VAR_5->r_esp = VAR_6->tf_rsp;
 VAR_5->r_ss = VAR_6->tf_ss;
 VAR_5->r_err = 0;
 VAR_5->r_trapno = 0;
 return (0);
}
