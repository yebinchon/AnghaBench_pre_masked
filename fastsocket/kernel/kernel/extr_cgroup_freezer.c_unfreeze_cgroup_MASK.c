
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct freezer {int state; } ;
struct cgroup_iter {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgroup*,struct cgroup_iter*) ;
 struct task_struct* FUNC_1 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_2 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct cgroup *VAR_1, struct freezer *VAR_2)
{
 struct cgroup_iter VAR_3;
 struct task_struct *VAR_4;

 FUNC_2(VAR_1, &VAR_3);
 while ((VAR_4 = FUNC_1(VAR_1, &VAR_3))) {
  FUNC_3(VAR_4);
 }
 FUNC_0(VAR_1, &VAR_3);

 VAR_2->state = VAR_0;
}
