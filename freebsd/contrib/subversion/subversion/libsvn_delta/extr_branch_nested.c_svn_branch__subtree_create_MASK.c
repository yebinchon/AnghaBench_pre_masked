
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subbranches; int tree; } ;
typedef TYPE_1__ svn_branch__subtree_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int *) ;

svn_branch__subtree_t *
FUNC_3(apr_hash_t *VAR_0,
                           int VAR_1,
                           apr_pool_t *VAR_2)
{
  svn_branch__subtree_t *VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3));

  VAR_3->tree = FUNC_2(VAR_0, VAR_1, VAR_2);
  VAR_3->subbranches = FUNC_0(VAR_2);
  return VAR_3;
}
