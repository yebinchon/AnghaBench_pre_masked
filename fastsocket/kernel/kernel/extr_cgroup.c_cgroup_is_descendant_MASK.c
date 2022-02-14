
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef struct cgroup {struct cgroup const* parent; struct cgroup const* top_cgroup; int root; } const cgroup ;


 struct cgroup const* VAR_0 ;
 struct cgroup const* FUNC_0 (struct task_struct*,int ) ;

int FUNC_1(const struct cgroup *VAR_1, struct task_struct *VAR_2)
{
 int VAR_3;
 struct cgroup *VAR_4;

 if (VAR_1 == VAR_0)
  return 1;

 VAR_4 = FUNC_0(VAR_2, VAR_1->root);
 while (VAR_1 != VAR_4 && VAR_1!= VAR_1->top_cgroup)
  VAR_1 = VAR_1->parent;
 VAR_3 = (VAR_1 == VAR_4);
 return VAR_3;
}
