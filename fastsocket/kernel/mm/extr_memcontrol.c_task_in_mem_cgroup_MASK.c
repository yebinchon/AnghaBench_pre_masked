
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mm; } ;
typedef struct mem_cgroup {int css; scalar_t__ use_hierarchy; } const mem_cgroup ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 struct task_struct* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 struct mem_cgroup const* FUNC_4 (int ) ;

int FUNC_5(struct task_struct *VAR_0, const struct mem_cgroup *VAR_1)
{
 int VAR_2;
 struct mem_cgroup *VAR_3 = ((void*)0);
 struct task_struct *VAR_4;

 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4)
  return 0;
 VAR_3 = FUNC_4(VAR_4->mm);
 FUNC_3(VAR_4);
 if (!VAR_3)
  return 0;






 if (VAR_1->use_hierarchy)
  VAR_2 = FUNC_0(&VAR_3->css, &VAR_1->css);
 else
  VAR_2 = (VAR_3 == VAR_1);
 FUNC_1(&VAR_3->css);
 return VAR_2;
}
