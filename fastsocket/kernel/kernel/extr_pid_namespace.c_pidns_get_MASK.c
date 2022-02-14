
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef void pid_namespace ;


 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void *FUNC_4(struct task_struct *VAR_0)
{
 struct pid_namespace *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(FUNC_3(VAR_0));
 FUNC_2();

 return VAR_1;
}
