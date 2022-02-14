
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mem_cgroup_tree_per_zone {int dummy; } ;
struct TYPE_4__ {TYPE_1__** rb_tree_per_node; } ;
struct TYPE_3__ {struct mem_cgroup_tree_per_zone* rb_tree_per_zone; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static struct mem_cgroup_tree_per_zone *
FUNC_2(struct page *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = FUNC_1(VAR_1);

 return &VAR_0.rb_tree_per_node[VAR_2]->rb_tree_per_zone[VAR_3];
}
