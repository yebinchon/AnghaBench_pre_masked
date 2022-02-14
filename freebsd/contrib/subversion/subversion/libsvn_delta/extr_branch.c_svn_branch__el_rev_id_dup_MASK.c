
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rev; int eid; int branch; } ;
typedef TYPE_1__ svn_branch__el_rev_id_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int ,int ,int ,int *) ;

svn_branch__el_rev_id_t *
FUNC_1(const svn_branch__el_rev_id_t *VAR_0,
                          apr_pool_t *VAR_1)
{
  if (! VAR_0)
    return ((void*)0);

  return FUNC_0(VAR_0->branch,
                                      VAR_0->eid,
                                      VAR_0->rev,
                                      VAR_1);
}
