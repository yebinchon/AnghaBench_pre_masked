
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ revprops; } ;
typedef TYPE_1__ svn_repos_log_entry_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;

svn_repos_log_entry_t *
FUNC_2(const svn_repos_log_entry_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_repos_log_entry_t *VAR_2 = FUNC_0(VAR_1, VAR_0,
                                                sizeof(*VAR_2));

  if (VAR_0->revprops)
    VAR_2->revprops = FUNC_1(VAR_0->revprops, VAR_1);

  return VAR_2;
}
