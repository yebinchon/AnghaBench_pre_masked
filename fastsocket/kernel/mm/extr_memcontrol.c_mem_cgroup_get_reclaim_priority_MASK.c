
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int prev_priority; int reclaim_param_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mem_cgroup *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->reclaim_param_lock);
 VAR_1 = VAR_0->prev_priority;
 FUNC_1(&VAR_0->reclaim_param_lock);

 return VAR_1;
}
