
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_info {int fake_exit_edge; int dfs_to_bb; int dfs_order; int set_child; int set_size; int set_chain; int next_bucket; int bucket; int dom; int key; int path_min; int dfs_parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct dom_info *VAR_0)
{
  FUNC_1 (VAR_0->dfs_parent);
  FUNC_1 (VAR_0->path_min);
  FUNC_1 (VAR_0->key);
  FUNC_1 (VAR_0->dom);
  FUNC_1 (VAR_0->bucket);
  FUNC_1 (VAR_0->next_bucket);
  FUNC_1 (VAR_0->set_chain);
  FUNC_1 (VAR_0->set_size);
  FUNC_1 (VAR_0->set_child);
  FUNC_1 (VAR_0->dfs_order);
  FUNC_1 (VAR_0->dfs_to_bb);
  FUNC_0 (VAR_0->fake_exit_edge);
}
