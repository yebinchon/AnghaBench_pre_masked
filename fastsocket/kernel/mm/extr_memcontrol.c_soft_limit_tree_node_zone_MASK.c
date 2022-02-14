
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_cgroup_tree_per_zone {int dummy; } ;
struct TYPE_4__ {TYPE_1__** rb_tree_per_node; } ;
struct TYPE_3__ {struct mem_cgroup_tree_per_zone* rb_tree_per_zone; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static struct mem_cgroup_tree_per_zone *
FUNC_0(int VAR_1, int VAR_2)
{
 return &VAR_0.rb_tree_per_node[VAR_1]->rb_tree_per_zone[VAR_2];
}
