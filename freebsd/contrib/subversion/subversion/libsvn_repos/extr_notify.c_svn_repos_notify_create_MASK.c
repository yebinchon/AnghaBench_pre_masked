
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int action; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int svn_repos_notify_action_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_repos_notify_t *
FUNC_1(svn_repos_notify_action_t VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_repos_notify_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->action = VAR_0;

  return VAR_2;
}
