
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_elr; int tf_spsr; int tf_x; int tf_lr; int tf_sp; } ;
struct thread {int td_proc; struct trapframe* td_frame; } ;
struct reg {int elr; int spsr; int* x; int lr; int sp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int*,int) ;

int
FUNC_2(struct thread *VAR_2, struct reg *VAR_3)
{
 struct trapframe *VAR_4;

 VAR_4 = VAR_2->td_frame;
 VAR_4->tf_sp = VAR_3->sp;
 VAR_4->tf_lr = VAR_3->lr;
 VAR_4->tf_elr = VAR_3->elr;
 VAR_4->tf_spsr &= ~VAR_0;
 VAR_4->tf_spsr |= VAR_3->spsr & VAR_0;

 FUNC_1(VAR_4->tf_x, VAR_3->x, sizeof(VAR_4->tf_x));
 return (0);
}
