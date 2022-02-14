
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_tree_per_zone {int lock; } ;
struct mem_cgroup_per_zone {int dummy; } ;


 struct mem_cgroup_per_zone* FUNC_0 (struct mem_cgroup_tree_per_zone*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mem_cgroup_per_zone *
FUNC_3(struct mem_cgroup_tree_per_zone *VAR_0)
{
 struct mem_cgroup_per_zone *VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
