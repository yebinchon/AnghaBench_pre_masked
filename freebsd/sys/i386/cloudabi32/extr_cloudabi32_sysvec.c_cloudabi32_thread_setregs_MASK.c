
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {TYPE_1__* td_frame; int td_tid; } ;
struct TYPE_7__ {scalar_t__ ss_size; int ss_sp; } ;
typedef TYPE_2__ stack_t ;
struct TYPE_8__ {int argument; int entry_point; scalar_t__ stack_len; int stack; } ;
typedef TYPE_3__ cloudabi32_threadattr_t ;
typedef int args ;
struct TYPE_6__ {scalar_t__ tf_esp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct thread*,int ,int *,TYPE_2__*) ;
 int FUNC_3 (struct thread*,void*) ;

int
FUNC_4(struct thread *VAR_0,
    const cloudabi32_threadattr_t *VAR_1, uint32_t VAR_2)
{
 stack_t VAR_3;
 uint32_t VAR_4[3];
 void *VAR_5;
 int VAR_6;


 VAR_3.ss_sp = FUNC_0(VAR_1->stack);
 VAR_3.ss_size = VAR_1->stack_len - sizeof(VAR_4);
 FUNC_2(VAR_0, FUNC_0(VAR_1->entry_point), ((void*)0), &VAR_3);






 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_0->td_tid;
 VAR_4[2] = VAR_1->argument;
 VAR_5 = (void *)VAR_0->td_frame->tf_esp;
 VAR_6 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_4));
 if (VAR_6 != 0)
  return (VAR_6);

 return (FUNC_3(VAR_0, VAR_5));
}
