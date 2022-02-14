
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct mem_cgroup {int dummy; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int const*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,struct mem_cgroup const*) ;

__attribute__((used)) static bool FUNC_3(struct task_struct *VAR_1,
  const struct mem_cgroup *VAR_2, const nodemask_t *VAR_3)
{
 if (FUNC_1(VAR_1))
  return 1;
 if (VAR_1->flags & VAR_0)
  return 1;


 if (VAR_2 && !FUNC_2(VAR_1, VAR_2))
  return 1;


 if (!FUNC_0(VAR_1, VAR_3))
  return 1;

 return 0;
}
