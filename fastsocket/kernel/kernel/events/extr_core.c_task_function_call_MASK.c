
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct remote_function_call {int (* func ) (void*) ;void* info; int ret; struct task_struct* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct remote_function_call*,int) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int
FUNC_3(struct task_struct *VAR_2, int (*VAR_3) (void *VAR_4), void *VAR_5)
{
 struct remote_function_call VAR_6 = {
  .p = VAR_2,
  .func = VAR_3,
  .info = VAR_5,
  .ret = -VAR_0,
 };

 if (FUNC_2(VAR_2))
  FUNC_0(FUNC_1(VAR_2), VAR_1, &VAR_6, 1);

 return VAR_6.ret;
}
