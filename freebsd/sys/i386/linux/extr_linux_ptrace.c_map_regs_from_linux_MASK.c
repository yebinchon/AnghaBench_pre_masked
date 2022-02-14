
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int r_ss; int r_esp; int r_eflags; int r_cs; int r_eip; int r_gs; int r_fs; int r_es; int r_ds; int r_eax; int r_ebp; int r_edi; int r_esi; int r_edx; int r_ecx; int r_ebx; } ;
struct linux_pt_reg {int xss; int esp; int eflags; int xcs; int eip; int xgs; int xfs; int xes; int xds; int eax; int ebp; int edi; int esi; int edx; int ecx; int ebx; } ;



__attribute__((used)) static void
FUNC_0(struct reg *VAR_0, struct linux_pt_reg *VAR_1)
{
 VAR_0->r_ebx = VAR_1->ebx;
 VAR_0->r_ecx = VAR_1->ecx;
 VAR_0->r_edx = VAR_1->edx;
 VAR_0->r_esi = VAR_1->esi;
 VAR_0->r_edi = VAR_1->edi;
 VAR_0->r_ebp = VAR_1->ebp;
 VAR_0->r_eax = VAR_1->eax;
 VAR_0->r_ds = VAR_1->xds;
 VAR_0->r_es = VAR_1->xes;
 VAR_0->r_fs = VAR_1->xfs;
 VAR_0->r_gs = VAR_1->xgs;
 VAR_0->r_eip = VAR_1->eip;
 VAR_0->r_cs = VAR_1->xcs;
 VAR_0->r_eflags = VAR_1->eflags;
 VAR_0->r_esp = VAR_1->esp;
 VAR_0->r_ss = VAR_1->xss;
}
