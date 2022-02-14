
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ prop_hash; scalar_t__ node_name; } ;
typedef TYPE_1__ svn_client_proplist_item_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;

svn_client_proplist_item_t *
FUNC_3(const svn_client_proplist_item_t *VAR_0,
                             apr_pool_t * VAR_1)
{
  svn_client_proplist_item_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  if (VAR_0->node_name)
    VAR_2->node_name = FUNC_2(VAR_0->node_name, VAR_1);

  if (VAR_0->prop_hash)
    VAR_2->prop_hash = FUNC_1(VAR_0->prop_hash, VAR_1);

  return VAR_2;
}
