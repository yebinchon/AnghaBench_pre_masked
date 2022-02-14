
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int r_gs; int r_fs; int r_es; int r_ds; int r_ss; int r_rsp; int r_rflags; int r_cs; int r_rip; int r_rax; int r_rdi; int r_rsi; int r_rdx; int r_rcx; int r_r8; int r_r9; int r_r10; int r_r11; int r_rbx; int r_rbp; int r_r12; int r_r13; int r_r14; int r_r15; } ;
struct linux_pt_regset {unsigned long fs_base; unsigned long gs_base; int gs; int fs; int es; int ds; int ss; int rsp; int eflags; int cs; int rip; int orig_rax; int rdi; int rsi; int rdx; int rcx; int rax; int r8; int r9; int r10; int r11; int rbx; int rbp; int r12; int r13; int r14; int r15; } ;



__attribute__((used)) static void
FUNC_0(struct reg *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2, struct linux_pt_regset *VAR_3)
{

 VAR_3->r15 = VAR_0->r_r15;
 VAR_3->r14 = VAR_0->r_r14;
 VAR_3->r13 = VAR_0->r_r13;
 VAR_3->r12 = VAR_0->r_r12;
 VAR_3->rbp = VAR_0->r_rbp;
 VAR_3->rbx = VAR_0->r_rbx;
 VAR_3->r11 = VAR_0->r_r11;
 VAR_3->r10 = VAR_0->r_r10;
 VAR_3->r9 = VAR_0->r_r9;
 VAR_3->r8 = VAR_0->r_r8;
 VAR_3->rax = VAR_0->r_rax;
 VAR_3->rcx = VAR_0->r_rcx;
 VAR_3->rdx = VAR_0->r_rdx;
 VAR_3->rsi = VAR_0->r_rsi;
 VAR_3->rdi = VAR_0->r_rdi;
 VAR_3->orig_rax = VAR_0->r_rax;
 VAR_3->rip = VAR_0->r_rip;
 VAR_3->cs = VAR_0->r_cs;
 VAR_3->eflags = VAR_0->r_rflags;
 VAR_3->rsp = VAR_0->r_rsp;
 VAR_3->ss = VAR_0->r_ss;
 VAR_3->fs_base = VAR_1;
 VAR_3->gs_base = VAR_2;
 VAR_3->ds = VAR_0->r_ds;
 VAR_3->es = VAR_0->r_es;
 VAR_3->fs = VAR_0->r_fs;
 VAR_3->gs = VAR_0->r_gs;
}
