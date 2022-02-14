
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct remote_function_call {int info; int (* func ) (int ) ;int ret; struct task_struct* p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct remote_function_call *VAR_2 = VAR_1;
 struct task_struct *VAR_3 = VAR_2->p;

 if (VAR_3) {
  VAR_2->ret = -VAR_0;
  if (FUNC_2(VAR_3) != FUNC_0() || !FUNC_3(VAR_3))
   return;
 }

 VAR_2->ret = VAR_2->func(VAR_2->info);
}
