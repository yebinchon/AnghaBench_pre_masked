
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct freezer {int state; } ;
struct cgroup_iter {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*,struct cgroup_iter*) ;
 struct task_struct* FUNC_1 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_2 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int FUNC_7(struct cgroup *VAR_2, struct freezer *VAR_3)
{
 struct cgroup_iter VAR_4;
 struct task_struct *VAR_5;
 unsigned int VAR_6 = 0;

 VAR_3->state = VAR_0;
 FUNC_2(VAR_2, &VAR_4);
 while ((VAR_5 = FUNC_1(VAR_2, &VAR_4))) {
  if (!FUNC_3(VAR_5, 1))
   continue;
  if (FUNC_6(VAR_5))
   continue;
  if (!FUNC_5(VAR_5) && !FUNC_4(VAR_5))
   VAR_6++;
 }
 FUNC_0(VAR_2, &VAR_4);

 return VAR_6 ? -VAR_1 : 0;
}
