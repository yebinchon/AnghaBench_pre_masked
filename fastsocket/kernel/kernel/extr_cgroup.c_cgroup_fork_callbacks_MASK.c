
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cgroup_subsys {int (* fork ) (struct cgroup_subsys*,struct task_struct*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cgroup_subsys*,struct task_struct*) ;
 struct cgroup_subsys** VAR_2 ;

void FUNC_1(struct task_struct *VAR_3)
{
 if (VAR_1) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   struct cgroup_subsys *VAR_5 = VAR_2[VAR_4];
   if (VAR_5->fork)
    VAR_5->fork(VAR_5, VAR_3);
  }
 }
}
