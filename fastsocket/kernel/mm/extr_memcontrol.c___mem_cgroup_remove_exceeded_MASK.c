
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_tree_per_zone {int rb_root; } ;
struct mem_cgroup_per_zone {int on_tree; int tree_node; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct mem_cgroup *VAR_0,
    struct mem_cgroup_per_zone *VAR_1,
    struct mem_cgroup_tree_per_zone *VAR_2)
{
 if (!VAR_1->on_tree)
  return;
 FUNC_0(&VAR_1->tree_node, &VAR_2->rb_root);
 VAR_1->on_tree = 0;
}
