
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct task_struct* group_leader; } ;
struct pid_namespace {int dummy; } ;


 struct task_struct* FUNC_0 (int,struct pid_namespace*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static struct task_struct *FUNC_6(struct task_struct *VAR_0,
  int VAR_1, int VAR_2, struct pid_namespace *VAR_3)
{
 struct task_struct *VAR_4;

 FUNC_4();

 if (VAR_1 && (VAR_2 > 0)) {
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 && (VAR_4->group_leader == VAR_0))
   goto found;
 }


 VAR_4 = ((void*)0);
 if (VAR_2 && VAR_2 >= FUNC_1(VAR_0))
  goto out;




 for (VAR_4 = VAR_0; VAR_2 > 0; --VAR_2) {
  VAR_4 = FUNC_3(VAR_4);
  if (VAR_4 == VAR_0) {
   VAR_4 = ((void*)0);
   goto out;
  }
 }
found:
 FUNC_2(VAR_4);
out:
 FUNC_5();
 return VAR_4;
}
