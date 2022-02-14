
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct freezer {scalar_t__ state; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct freezer* FUNC_0 (struct cgroup*) ;

__attribute__((used)) static int FUNC_1(struct cgroup_subsys *VAR_2,
         struct cgroup *VAR_3,
         struct task_struct *VAR_4)
{
 struct freezer *VAR_5;





 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5->state != VAR_0)
  return -VAR_1;

 return 0;
}
