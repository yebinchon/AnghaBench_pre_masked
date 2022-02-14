
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {scalar_t__ euid; scalar_t__ uid; } ;


 struct cred* FUNC_0 (struct task_struct*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct task_struct *VAR_0)
{
 const struct cred *VAR_1 = FUNC_1(), *VAR_2;
 bool VAR_3;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (VAR_1->euid == VAR_2->euid ||
   VAR_1->euid == VAR_2->uid);
 FUNC_3();
 return VAR_3;
}
