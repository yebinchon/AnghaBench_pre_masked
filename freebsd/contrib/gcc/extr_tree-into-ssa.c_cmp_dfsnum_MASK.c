
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_dfsnum {scalar_t__ dfs_num; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct dom_dfsnum *VAR_2 = VAR_0;
  const struct dom_dfsnum *VAR_3 = VAR_1;

  return (int) VAR_2->dfs_num - (int) VAR_3->dfs_num;
}
