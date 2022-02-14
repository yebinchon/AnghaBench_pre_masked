
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cgroup*,struct task_struct*) ;
 struct task_struct* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct cgroup_subsys *VAR_3, struct cgroup *VAR_4,
    struct task_struct *VAR_5)
{
 if (VAR_2 != VAR_5) {
  if (!FUNC_0(VAR_0))
   return -VAR_1;

  if (!FUNC_1(VAR_4, VAR_2))
   return -VAR_1;
 }

 return 0;
}
