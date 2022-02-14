
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct cpuset {int mems_allowed; int cpus_allowed; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpuset* FUNC_0 (struct cgroup*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cgroup_subsys *VAR_3, struct cgroup *VAR_4,
        struct task_struct *VAR_5)
{
 struct cpuset *VAR_6 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_6->cpus_allowed) || FUNC_2(VAR_6->mems_allowed))
  return -VAR_1;
 if (VAR_5->flags & VAR_2)
  return -VAR_0;

 return 0;
}
