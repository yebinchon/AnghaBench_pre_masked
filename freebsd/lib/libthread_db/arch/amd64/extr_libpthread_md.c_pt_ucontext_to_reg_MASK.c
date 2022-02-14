
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mc_ss; int mc_rsp; int mc_rflags; int mc_cs; int mc_rip; int mc_r15; int mc_r14; int mc_r13; int mc_r12; int mc_r11; int mc_r10; int mc_rbp; int mc_rbx; int mc_rax; int mc_r9; int mc_r8; int mc_rcx; int mc_rdx; int mc_rsi; int mc_rdi; } ;
struct TYPE_4__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct reg {int r_ss; int r_rsp; int r_rflags; int r_cs; int r_rip; int r_r15; int r_r14; int r_r13; int r_r12; int r_r11; int r_r10; int r_rbp; int r_rbx; int r_rax; int r_r9; int r_r8; int r_rcx; int r_rdx; int r_rsi; int r_rdi; } ;
typedef TYPE_2__ mcontext_t ;



void
FUNC_0(const ucontext_t *VAR_0, struct reg *VAR_1)
{
 const mcontext_t *VAR_2 = &VAR_0->uc_mcontext;

 VAR_1->r_rdi = VAR_2->mc_rdi;
 VAR_1->r_rsi = VAR_2->mc_rsi;
 VAR_1->r_rdx = VAR_2->mc_rdx;
 VAR_1->r_rcx = VAR_2->mc_rcx;
 VAR_1->r_r8 = VAR_2->mc_r8;
 VAR_1->r_r9 = VAR_2->mc_r9;
 VAR_1->r_rax = VAR_2->mc_rax;
 VAR_1->r_rbx = VAR_2->mc_rbx;
 VAR_1->r_rbp = VAR_2->mc_rbp;
 VAR_1->r_r10 = VAR_2->mc_r10;
 VAR_1->r_r11 = VAR_2->mc_r11;
 VAR_1->r_r12 = VAR_2->mc_r12;
 VAR_1->r_r13 = VAR_2->mc_r13;
 VAR_1->r_r14 = VAR_2->mc_r14;
 VAR_1->r_r15 = VAR_2->mc_r15;
 VAR_1->r_rip = VAR_2->mc_rip;
 VAR_1->r_cs = VAR_2->mc_cs;
 VAR_1->r_rflags = VAR_2->mc_rflags;
 VAR_1->r_rsp = VAR_2->mc_rsp;
 VAR_1->r_ss = VAR_2->mc_ss;
}
