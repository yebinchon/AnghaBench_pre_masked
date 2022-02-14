
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cgroup; } ;
struct freezer {scalar_t__ state; int lock; TYPE_2__ css; } ;
struct cgroup_subsys {int dummy; } ;
struct TYPE_3__ {int parent; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct freezer* FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct cgroup_subsys *VAR_2, struct task_struct *VAR_3)
{
 struct freezer *VAR_4;







 VAR_4 = FUNC_4(VAR_3);





 if (!VAR_4->css.cgroup->parent)
  return;

 FUNC_2(&VAR_4->lock);
 FUNC_0(VAR_4->state == VAR_1);


 if (VAR_4->state == VAR_0)
  FUNC_1(VAR_3, 1);
 FUNC_3(&VAR_4->lock);
}
