
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_create_args {int tcb; int attr; int tid; } ;
struct thread {int td_tid; } ;


 int FUNC_0 (struct thread*,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_0, void *VAR_1)
{
 struct thread_create_args *VAR_2 = VAR_1;


 VAR_2->tid = VAR_0->td_tid;


 return (FUNC_0(VAR_0, &VAR_2->attr, VAR_2->tcb));
}
