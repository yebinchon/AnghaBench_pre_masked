
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cgroup* cgroup; } ;
struct mem_cgroup {unsigned int swappiness; int reclaim_param_lock; TYPE_1__ css; } ;
struct cgroup {int * parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct mem_cgroup *VAR_1)
{
 struct cgroup *VAR_2 = VAR_1->css.cgroup;
 unsigned int VAR_3;


 if (VAR_2->parent == ((void*)0))
  return VAR_0;

 FUNC_0(&VAR_1->reclaim_param_lock);
 VAR_3 = VAR_1->swappiness;
 FUNC_1(&VAR_1->reclaim_param_lock);

 return VAR_3;
}
