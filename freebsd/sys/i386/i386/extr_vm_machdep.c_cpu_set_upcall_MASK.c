
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
struct TYPE_5__ {int ss_size; scalar_t__ ss_sp; } ;
typedef TYPE_2__ stack_t ;
struct TYPE_4__ {int tf_esp; int tf_eip; scalar_t__ tf_ebp; } ;


 int FUNC_0 (struct thread*) ;
 int FUNC_1 (void*,int) ;

void
FUNC_2(struct thread *VAR_0, void (*VAR_1)(void *), void *VAR_2,
    stack_t *VAR_3)
{
 FUNC_0(VAR_0);





 VAR_0->td_frame->tf_ebp = 0;
 VAR_0->td_frame->tf_esp =
     (((int)VAR_3->ss_sp + VAR_3->ss_size - 4) & ~0x0f) - 4;
 VAR_0->td_frame->tf_eip = (int)VAR_1;


 FUNC_1((void *)VAR_0->td_frame->tf_esp, 0);


 FUNC_1((void *)(VAR_0->td_frame->tf_esp + sizeof(void *)),
     (int)VAR_2);
}
