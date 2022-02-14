
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int root_eid; int e_map; } ;
typedef TYPE_1__ svn_element__tree_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;

svn_element__tree_t *
FUNC_3(apr_hash_t *VAR_0,
                         int VAR_1,
                         apr_pool_t *VAR_2)
{
  svn_element__tree_t *VAR_3
    = FUNC_2(VAR_2, sizeof(*VAR_3));

  VAR_3->e_map = VAR_0 ? FUNC_0(VAR_2, VAR_0)
                              : FUNC_1(VAR_2);
  VAR_3->root_eid = VAR_1;
  return VAR_3;
}
