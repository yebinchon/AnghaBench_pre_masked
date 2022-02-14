
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct cpuset {int mems_allowed; } ;
struct cgroup_scanner {int cg; int * data; } ;
typedef int nodemask_t ;


 struct cpuset* FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,int *) ;
 int FUNC_2 (struct mm_struct*,int const*,int *) ;
 struct mm_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct cpuset*,int *) ;
 int FUNC_5 (struct cpuset*) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_0,
       struct cgroup_scanner *VAR_1)
{
 struct mm_struct *VAR_2;
 struct cpuset *VAR_3;
 int VAR_4;
 const nodemask_t *VAR_5 = VAR_1->data;
 nodemask_t VAR_6;

 VAR_3 = FUNC_0(VAR_1->cg);
 FUNC_4(VAR_3, &VAR_6);

 FUNC_1(VAR_0, &VAR_6);

 VAR_2 = FUNC_3(VAR_0);
 if (!VAR_2)
  return;

 VAR_4 = FUNC_5(VAR_3);

 FUNC_7(VAR_2, &VAR_3->mems_allowed);
 if (VAR_4)
  FUNC_2(VAR_2, VAR_5, &VAR_3->mems_allowed);
 FUNC_6(VAR_2);
}
