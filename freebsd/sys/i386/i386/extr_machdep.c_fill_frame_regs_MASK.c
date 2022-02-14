
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_ss; int tf_esp; int tf_eflags; int tf_cs; int tf_eip; int tf_eax; int tf_ecx; int tf_edx; int tf_ebx; int tf_ebp; int tf_esi; int tf_edi; int tf_ds; int tf_es; int tf_fs; } ;
struct reg {scalar_t__ r_trapno; scalar_t__ r_err; int r_ss; int r_esp; int r_eflags; int r_cs; int r_eip; int r_eax; int r_ecx; int r_edx; int r_ebx; int r_ebp; int r_esi; int r_edi; int r_ds; int r_es; int r_fs; } ;



int
FUNC_0(struct trapframe *VAR_0, struct reg *VAR_1)
{

 VAR_1->r_fs = VAR_0->tf_fs;
 VAR_1->r_es = VAR_0->tf_es;
 VAR_1->r_ds = VAR_0->tf_ds;
 VAR_1->r_edi = VAR_0->tf_edi;
 VAR_1->r_esi = VAR_0->tf_esi;
 VAR_1->r_ebp = VAR_0->tf_ebp;
 VAR_1->r_ebx = VAR_0->tf_ebx;
 VAR_1->r_edx = VAR_0->tf_edx;
 VAR_1->r_ecx = VAR_0->tf_ecx;
 VAR_1->r_eax = VAR_0->tf_eax;
 VAR_1->r_eip = VAR_0->tf_eip;
 VAR_1->r_cs = VAR_0->tf_cs;
 VAR_1->r_eflags = VAR_0->tf_eflags;
 VAR_1->r_esp = VAR_0->tf_esp;
 VAR_1->r_ss = VAR_0->tf_ss;
 VAR_1->r_err = 0;
 VAR_1->r_trapno = 0;
 return (0);
}
