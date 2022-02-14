
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct trapframe {int tf_elr; int * tf_x; } ;
struct thread {int td_tid; struct trapframe* td_frame; } ;
struct TYPE_3__ {int entry_point; scalar_t__ stack_len; scalar_t__ stack; int argument; } ;
typedef TYPE_1__ cloudabi32_threadattr_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct trapframe*,int ,int) ;

int
FUNC_4(struct thread *VAR_0,
    const cloudabi32_threadattr_t *VAR_1, uint32_t VAR_2)
{
 struct trapframe *VAR_3;






 VAR_3 = VAR_0->td_frame;
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->tf_x[0] = VAR_0->td_tid;
 VAR_3->tf_x[1] = VAR_1->argument;
 VAR_3->tf_x[13] = FUNC_0(VAR_1->stack + VAR_1->stack_len);
 VAR_3->tf_elr = VAR_1->entry_point;


 return (FUNC_2(VAR_0, FUNC_1(VAR_2)));
}
