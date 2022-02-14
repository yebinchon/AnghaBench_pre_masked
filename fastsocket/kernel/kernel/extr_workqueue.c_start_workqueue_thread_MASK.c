
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cpu_workqueue_struct {struct task_struct* thread; } ;


 int FUNC_0 (struct task_struct*,int) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct cpu_workqueue_struct *VAR_0, int VAR_1)
{
 struct task_struct *VAR_2 = VAR_0->thread;

 if (VAR_2 != ((void*)0)) {
  if (VAR_1 >= 0)
   FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2);
 }
}
