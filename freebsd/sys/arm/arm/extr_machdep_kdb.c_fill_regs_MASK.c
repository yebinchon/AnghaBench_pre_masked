
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_spsr; int tf_pc; int tf_usr_lr; int tf_usr_sp; int tf_r0; } ;
struct thread {struct trapframe* td_frame; } ;
struct reg {int r_cpsr; int r_pc; int r_lr; int r_sp; int r; } ;


 int FUNC_0 (int *,int ,int) ;

int
FUNC_1(struct thread *VAR_0, struct reg *VAR_1)
{
 struct trapframe *VAR_2 = VAR_0->td_frame;
 FUNC_0(&VAR_2->tf_r0, VAR_1->r, sizeof(VAR_1->r));
 VAR_1->r_sp = VAR_2->tf_usr_sp;
 VAR_1->r_lr = VAR_2->tf_usr_lr;
 VAR_1->r_pc = VAR_2->tf_pc;
 VAR_1->r_cpsr = VAR_2->tf_spsr;
 return (0);
}
