
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {scalar_t__ euid; scalar_t__ uid; } ;
typedef int pid_t ;


 struct task_struct* FUNC_0 (int ) ;
 int VAR_0 ;
 struct cred* FUNC_1 (struct task_struct*) ;
 struct cred* FUNC_2 () ;
 struct task_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static struct task_struct * FUNC_7(pid_t VAR_1)
{
 struct task_struct *VAR_2;
 const struct cred *VAR_3 = FUNC_2(), *VAR_4;

 FUNC_5();
 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2) {
  VAR_2 = FUNC_0(-VAR_0);
 } else {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_3->euid != VAR_4->euid &&
      VAR_3->euid != VAR_4->uid)
   VAR_2 = FUNC_0(-VAR_0);
  else
   FUNC_4(VAR_2);
 }

 FUNC_6();

 return VAR_2;
}
