
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_node {int dfs_num_out; struct et_node* right; struct et_node* son; int dfs_num_in; } ;



__attribute__((used)) static void
FUNC_0 (struct et_node *VAR_0, int *VAR_1)
{
  struct et_node *VAR_2;

  VAR_0->dfs_num_in = (*VAR_1)++;

  if (VAR_0->son)
    {
      FUNC_0 (VAR_0->son, VAR_1);
      for (VAR_2 = VAR_0->son->right; VAR_2 != VAR_0->son; VAR_2 = VAR_2->right)
 FUNC_0 (VAR_2, VAR_1);
    }

  VAR_0->dfs_num_out = (*VAR_1)++;
}
