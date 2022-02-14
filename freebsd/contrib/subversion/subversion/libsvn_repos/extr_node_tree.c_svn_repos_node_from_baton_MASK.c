
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_node_t ;
struct edit_baton {int * node; } ;



svn_repos_node_t *
FUNC_0(void *VAR_0)
{
  struct edit_baton *VAR_1 = VAR_0;
  return VAR_1->node;
}
