
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct cpuset {int mems_allowed; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 struct cpuset* FUNC_0 (struct cgroup*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mm_struct*,int *,int *) ;
 struct mm_struct* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct cpuset*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_6(struct cgroup_subsys *VAR_2, struct cgroup *VAR_3,
     struct cgroup *VAR_4, struct task_struct *VAR_5)
{
 struct mm_struct *VAR_6;
 struct cpuset *VAR_7 = FUNC_0(VAR_3);
 struct cpuset *VAR_8 = FUNC_0(VAR_4);





 VAR_0 = VAR_8->mems_allowed;
 VAR_1 = VAR_7->mems_allowed;
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_6, &VAR_1);
  if (FUNC_3(VAR_7))
   FUNC_1(VAR_6, &VAR_0,
       &VAR_1);
  FUNC_4(VAR_6);
 }
}
