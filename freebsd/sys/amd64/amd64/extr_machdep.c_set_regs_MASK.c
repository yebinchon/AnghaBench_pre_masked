
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_rflags; int tf_flags; int tf_gs; int tf_fs; int tf_es; int tf_ds; int tf_ss; int tf_rsp; int tf_cs; int tf_rip; int tf_rax; int tf_rcx; int tf_rdx; int tf_rbx; int tf_rbp; int tf_rsi; int tf_rdi; int tf_r8; int tf_r9; int tf_r10; int tf_r11; int tf_r12; int tf_r13; int tf_r14; int tf_r15; } ;
struct thread {int td_pcb; struct trapframe* td_frame; } ;
struct reg {int r_rflags; int r_gs; int r_fs; int r_es; int r_ds; int r_ss; int r_rsp; int r_cs; int r_rip; int r_rax; int r_rcx; int r_rdx; int r_rbx; int r_rbp; int r_rsi; int r_rdi; int r_r8; int r_r9; int r_r10; int r_r11; int r_r12; int r_r13; int r_r14; int r_r15; } ;
typedef int register_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct thread *VAR_3, struct reg *VAR_4)
{
 struct trapframe *VAR_5;
 register_t VAR_6;

 VAR_5 = VAR_3->td_frame;
 VAR_6 = VAR_4->r_rflags & 0xffffffff;
 if (!FUNC_1(VAR_6, VAR_5->tf_rflags) || !FUNC_0(VAR_4->r_cs))
  return (VAR_0);
 VAR_5->tf_r15 = VAR_4->r_r15;
 VAR_5->tf_r14 = VAR_4->r_r14;
 VAR_5->tf_r13 = VAR_4->r_r13;
 VAR_5->tf_r12 = VAR_4->r_r12;
 VAR_5->tf_r11 = VAR_4->r_r11;
 VAR_5->tf_r10 = VAR_4->r_r10;
 VAR_5->tf_r9 = VAR_4->r_r9;
 VAR_5->tf_r8 = VAR_4->r_r8;
 VAR_5->tf_rdi = VAR_4->r_rdi;
 VAR_5->tf_rsi = VAR_4->r_rsi;
 VAR_5->tf_rbp = VAR_4->r_rbp;
 VAR_5->tf_rbx = VAR_4->r_rbx;
 VAR_5->tf_rdx = VAR_4->r_rdx;
 VAR_5->tf_rcx = VAR_4->r_rcx;
 VAR_5->tf_rax = VAR_4->r_rax;
 VAR_5->tf_rip = VAR_4->r_rip;
 VAR_5->tf_cs = VAR_4->r_cs;
 VAR_5->tf_rflags = VAR_6;
 VAR_5->tf_rsp = VAR_4->r_rsp;
 VAR_5->tf_ss = VAR_4->r_ss;
 if (0) {
  VAR_5->tf_ds = VAR_4->r_ds;
  VAR_5->tf_es = VAR_4->r_es;
  VAR_5->tf_fs = VAR_4->r_fs;
  VAR_5->tf_gs = VAR_4->r_gs;
  VAR_5->tf_flags = VAR_2;
 }
 FUNC_2(VAR_3->td_pcb, VAR_1);
 return (0);
}
