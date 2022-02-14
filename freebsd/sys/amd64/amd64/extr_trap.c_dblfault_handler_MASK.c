
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_gs; int tf_fs; int tf_es; int tf_ds; int tf_ss; int tf_cs; int tf_rflags; int tf_r15; int tf_r14; int tf_r13; int tf_r12; int tf_r11; int tf_r10; int tf_r9; int tf_r8; int tf_rsi; int tf_rdi; int tf_rcx; int tf_rbx; int tf_rdx; int tf_rax; int tf_rbp; int tf_rsp; int tf_rip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

void
FUNC_6(struct trapframe *VAR_5)
{




 FUNC_3("\nFatal double fault\n"
     "rip %#lx rsp %#lx rbp %#lx\n"
     "rax %#lx rdx %#lx rbx %#lx\n"
     "rcx %#lx rsi %#lx rdi %#lx\n"
     "r8 %#lx r9 %#lx r10 %#lx\n"
     "r11 %#lx r12 %#lx r13 %#lx\n"
     "r14 %#lx r15 %#lx rflags %#lx\n"
     "cs %#lx ss %#lx ds %#hx es %#hx fs %#hx gs %#hx\n"
     "fsbase %#lx gsbase %#lx kgsbase %#lx\n",
     VAR_5->tf_rip, VAR_5->tf_rsp, VAR_5->tf_rbp,
     VAR_5->tf_rax, VAR_5->tf_rdx, VAR_5->tf_rbx,
     VAR_5->tf_rcx, VAR_5->tf_rdi, VAR_5->tf_rsi,
     VAR_5->tf_r8, VAR_5->tf_r9, VAR_5->tf_r10,
     VAR_5->tf_r11, VAR_5->tf_r12, VAR_5->tf_r13,
     VAR_5->tf_r14, VAR_5->tf_r15, VAR_5->tf_rflags,
     VAR_5->tf_cs, VAR_5->tf_ss, VAR_5->tf_ds, VAR_5->tf_es,
     VAR_5->tf_fs, VAR_5->tf_gs,
     FUNC_4(VAR_0), FUNC_4(VAR_1), FUNC_4(VAR_2));





 FUNC_2("double fault");
}
