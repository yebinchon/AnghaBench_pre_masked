
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cpuset {int dummy; } ;
struct cgroup {int dummy; } ;


 int FUNC_0 (int) ;
 struct cpuset* FUNC_1 (struct cgroup*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct task_struct*,int *) ;
 int FUNC_3 (struct cpuset*,struct task_struct*) ;
 int FUNC_4 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_5(struct cgroup *VAR_2, struct task_struct *VAR_3)
{
 int VAR_4;
 struct cpuset *VAR_5 = FUNC_1(VAR_2);





 VAR_4 = FUNC_4(VAR_3, VAR_0);
 FUNC_0(VAR_4);

 FUNC_2(VAR_3, &VAR_1);
 FUNC_3(VAR_5, VAR_3);
}
