
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* child; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (char const*,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,char const*,int *) ;

__attribute__((used)) static svn_repos_node_t *
FUNC_2(svn_repos_node_t *VAR_0,
                  const char *VAR_1,
                  apr_pool_t *VAR_2)
{

  if (! VAR_0)
    return ((void*)0);


  if (! VAR_0->child)
    return (VAR_0->child = FUNC_0(VAR_1, VAR_0, VAR_2));



  return FUNC_1(VAR_0->child, VAR_1, VAR_2);
}
