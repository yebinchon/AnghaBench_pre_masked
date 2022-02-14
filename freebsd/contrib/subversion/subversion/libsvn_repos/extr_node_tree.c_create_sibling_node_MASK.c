
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; struct TYPE_5__* sibling; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static svn_repos_node_t *
FUNC_1(svn_repos_node_t *VAR_0,
                    const char *VAR_1,
                    apr_pool_t *VAR_2)
{
  svn_repos_node_t *VAR_3;


  if (! VAR_0)
    return ((void*)0);


  VAR_3 = VAR_0;
  while (VAR_3->sibling)
    VAR_3 = VAR_3->sibling;


  return (VAR_3->sibling = FUNC_0(VAR_1, VAR_0->parent, VAR_2));
}
