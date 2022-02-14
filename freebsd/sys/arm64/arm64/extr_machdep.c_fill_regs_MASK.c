
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_spsr; int tf_elr; int tf_x; int tf_lr; int tf_sp; } ;
struct thread {int td_proc; struct trapframe* td_frame; } ;
struct reg {int * x; int spsr; int elr; int lr; int sp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

int
FUNC_2(struct thread *VAR_1, struct reg *VAR_2)
{
 struct trapframe *VAR_3;

 VAR_3 = VAR_1->td_frame;
 VAR_2->sp = VAR_3->tf_sp;
 VAR_2->lr = VAR_3->tf_lr;
 VAR_2->elr = VAR_3->tf_elr;
 VAR_2->spsr = VAR_3->tf_spsr;

 FUNC_1(VAR_2->x, VAR_3->tf_x, sizeof(VAR_2->x));
 return (0);
}
