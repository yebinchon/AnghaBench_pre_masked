
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_flags; scalar_t__ tf_gs; scalar_t__ tf_fs; scalar_t__ tf_es; scalar_t__ tf_ds; int tf_ss; int tf_rsp; int tf_rflags; int tf_cs; int tf_rip; int tf_rax; int tf_rcx; int tf_rdx; int tf_rbx; int tf_rbp; int tf_rsi; int tf_rdi; int tf_r8; int tf_r9; int tf_r10; int tf_r11; int tf_r12; int tf_r13; int tf_r14; int tf_r15; } ;
struct reg {scalar_t__ r_trapno; scalar_t__ r_err; scalar_t__ r_gs; scalar_t__ r_fs; scalar_t__ r_es; scalar_t__ r_ds; int r_ss; int r_rsp; int r_rflags; int r_cs; int r_rip; int r_rax; int r_rcx; int r_rdx; int r_rbx; int r_rbp; int r_rsi; int r_rdi; int r_r8; int r_r9; int r_r10; int r_r11; int r_r12; int r_r13; int r_r14; int r_r15; } ;


 int VAR_0 ;

int
FUNC_0(struct trapframe *VAR_1, struct reg *VAR_2)
{

 VAR_2->r_r15 = VAR_1->tf_r15;
 VAR_2->r_r14 = VAR_1->tf_r14;
 VAR_2->r_r13 = VAR_1->tf_r13;
 VAR_2->r_r12 = VAR_1->tf_r12;
 VAR_2->r_r11 = VAR_1->tf_r11;
 VAR_2->r_r10 = VAR_1->tf_r10;
 VAR_2->r_r9 = VAR_1->tf_r9;
 VAR_2->r_r8 = VAR_1->tf_r8;
 VAR_2->r_rdi = VAR_1->tf_rdi;
 VAR_2->r_rsi = VAR_1->tf_rsi;
 VAR_2->r_rbp = VAR_1->tf_rbp;
 VAR_2->r_rbx = VAR_1->tf_rbx;
 VAR_2->r_rdx = VAR_1->tf_rdx;
 VAR_2->r_rcx = VAR_1->tf_rcx;
 VAR_2->r_rax = VAR_1->tf_rax;
 VAR_2->r_rip = VAR_1->tf_rip;
 VAR_2->r_cs = VAR_1->tf_cs;
 VAR_2->r_rflags = VAR_1->tf_rflags;
 VAR_2->r_rsp = VAR_1->tf_rsp;
 VAR_2->r_ss = VAR_1->tf_ss;
 if (VAR_1->tf_flags & VAR_0) {
  VAR_2->r_ds = VAR_1->tf_ds;
  VAR_2->r_es = VAR_1->tf_es;
  VAR_2->r_fs = VAR_1->tf_fs;
  VAR_2->r_gs = VAR_1->tf_gs;
 } else {
  VAR_2->r_ds = 0;
  VAR_2->r_es = 0;
  VAR_2->r_fs = 0;
  VAR_2->r_gs = 0;
 }
 VAR_2->r_err = 0;
 VAR_2->r_trapno = 0;
 return (0);
}
