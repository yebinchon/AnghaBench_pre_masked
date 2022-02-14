
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int tf_pc; int tf_r0; int tf_spsr; int tf_usr_sp; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_3__ {scalar_t__ ss_size; scalar_t__ ss_sp; } ;
typedef TYPE_1__ stack_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct thread *VAR_1, void (*VAR_2)(void *), void *VAR_3,
 stack_t *VAR_4)
{
 struct trapframe *VAR_5 = VAR_1->td_frame;

 VAR_5->tf_usr_sp = FUNC_0((int)VAR_4->ss_sp + VAR_4->ss_size);
 VAR_5->tf_pc = (int)VAR_2;
 VAR_5->tf_r0 = (int)VAR_3;
 VAR_5->tf_spsr = VAR_0;
}
