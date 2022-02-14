
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int plist; } ;
struct futex_q {int * lock_ptr; TYPE_1__ list; struct task_struct* task; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_5(struct futex_q *VAR_1)
{
 struct task_struct *VAR_2 = VAR_1->task;
 FUNC_0(VAR_2);

 FUNC_1(&VAR_1->list, &VAR_1->list.plist);






 FUNC_3();
 VAR_1->lock_ptr = ((void*)0);

 FUNC_4(VAR_2, VAR_0);
 FUNC_2(VAR_2);
}
