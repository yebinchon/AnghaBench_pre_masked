
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int td_tid; } ;
struct thr_param {int tls_base; int arg; int start_func; int stack_size; int stack_base; int * parent_tid; int * child_tid; } ;
struct TYPE_3__ {int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,TYPE_1__*) ;
 int FUNC_1 (struct thread*,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_1, void *VAR_2)
{
 stack_t VAR_3;
 struct thr_param *VAR_4;
 VAR_4 = VAR_2;
 if ((VAR_4->child_tid != ((void*)0) &&
     FUNC_2(VAR_4->child_tid, VAR_1->td_tid)) ||
     (VAR_4->parent_tid != ((void*)0) &&
     FUNC_2(VAR_4->parent_tid, VAR_1->td_tid)))
  return (VAR_0);


 VAR_3.ss_sp = VAR_4->stack_base;
 VAR_3.ss_size = VAR_4->stack_size;

 FUNC_0(VAR_1, VAR_4->start_func, VAR_4->arg, &VAR_3);

 return (FUNC_1(VAR_1, VAR_4->tls_base));
}
