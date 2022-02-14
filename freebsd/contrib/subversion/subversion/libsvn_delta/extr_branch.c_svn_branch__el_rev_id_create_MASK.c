
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_branch__state_t ;
struct TYPE_4__ {int eid; int rev; int * branch; } ;
typedef TYPE_1__ svn_branch__el_rev_id_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_branch__el_rev_id_t *
FUNC_1(svn_branch__state_t *VAR_0,
                             int VAR_1,
                             svn_revnum_t VAR_2,
                             apr_pool_t *VAR_3)
{
  svn_branch__el_rev_id_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->branch = VAR_0;
  VAR_4->eid = VAR_1;
  VAR_4->rev = VAR_2;
  return VAR_4;
}
