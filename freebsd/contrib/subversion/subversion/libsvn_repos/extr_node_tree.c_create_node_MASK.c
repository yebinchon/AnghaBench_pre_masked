
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char action; struct TYPE_5__* parent; int name; int kind; } ;
typedef TYPE_1__ svn_repos_node_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_0 ;

__attribute__((used)) static svn_repos_node_t *
FUNC_2(const char *VAR_1,
            svn_repos_node_t *VAR_2,
            apr_pool_t *VAR_3)
{
  svn_repos_node_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->action = 'R';
  VAR_4->kind = VAR_0;
  VAR_4->name = FUNC_1(VAR_3, VAR_1);
  VAR_4->parent = VAR_2;
  return VAR_4;
}
