
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct trapframe {int * tf_x; } ;
struct thread {int td_tid; struct trapframe* td_frame; } ;
struct TYPE_5__ {int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;
struct TYPE_6__ {int argument; int entry_point; int stack_len; int stack; } ;
typedef TYPE_2__ cloudabi64_threadattr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,int ,int *,TYPE_1__*) ;
 int FUNC_2 (struct thread*,int ) ;

int
FUNC_3(struct thread *VAR_0,
    const cloudabi64_threadattr_t *VAR_1, uint64_t VAR_2)
{
 struct trapframe *VAR_3;
 stack_t VAR_4;


 VAR_4.ss_sp = FUNC_0(VAR_1->stack);
 VAR_4.ss_size = VAR_1->stack_len;
 FUNC_1(VAR_0, FUNC_0(VAR_1->entry_point), ((void*)0), &VAR_4);






 VAR_3 = VAR_0->td_frame;
 VAR_3->tf_x[0] = VAR_0->td_tid;
 VAR_3->tf_x[1] = VAR_1->argument;


 return (FUNC_2(VAR_0, FUNC_0(VAR_2)));
}
