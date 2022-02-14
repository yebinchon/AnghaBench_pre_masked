
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int r_ss; int r_rsp; int r_rflags; int r_cs; int r_rip; scalar_t__ r_ds; scalar_t__ r_es; scalar_t__ r_err; scalar_t__ r_gs; scalar_t__ r_fs; scalar_t__ r_trapno; int r_rax; int r_rcx; int r_rdx; int r_rbx; int r_rbp; int r_rsi; int r_rdi; int r_r8; int r_r9; int r_r10; int r_r11; int r_r12; int r_r13; int r_r14; int r_r15; } ;
struct linux_pt_reg {int ss; int rsp; int eflags; int cs; int rip; int rax; int rcx; int rdx; int rbx; int rbp; int rsi; int rdi; int r8; int r9; int r10; int r11; int r12; int r13; int r14; int r15; } ;



__attribute__((used)) static void
FUNC_0(struct reg *VAR_0, struct linux_pt_reg *VAR_1)
{
 VAR_0->r_r15 = VAR_1->r15;
 VAR_0->r_r14 = VAR_1->r14;
 VAR_0->r_r13 = VAR_1->r13;
 VAR_0->r_r12 = VAR_1->r12;
 VAR_0->r_r11 = VAR_1->r11;
 VAR_0->r_r10 = VAR_1->r10;
 VAR_0->r_r9 = VAR_1->r9;
 VAR_0->r_r8 = VAR_1->r8;
 VAR_0->r_rdi = VAR_1->rdi;
 VAR_0->r_rsi = VAR_1->rsi;
 VAR_0->r_rbp = VAR_1->rbp;
 VAR_0->r_rbx = VAR_1->rbx;
 VAR_0->r_rdx = VAR_1->rdx;
 VAR_0->r_rcx = VAR_1->rcx;
 VAR_0->r_rax = VAR_1->rax;




 VAR_0->r_trapno = 0;
 VAR_0->r_fs = 0;
 VAR_0->r_gs = 0;
 VAR_0->r_err = 0;
 VAR_0->r_es = 0;
 VAR_0->r_ds = 0;

 VAR_0->r_rip = VAR_1->rip;
 VAR_0->r_cs = VAR_1->cs;
 VAR_0->r_rflags = VAR_1->eflags;
 VAR_0->r_rsp = VAR_1->rsp;
 VAR_0->r_ss = VAR_1->ss;
}
