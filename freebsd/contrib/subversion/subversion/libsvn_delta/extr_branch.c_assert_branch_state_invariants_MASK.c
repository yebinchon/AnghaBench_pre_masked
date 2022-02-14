
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; TYPE_5__* txn; TYPE_5__* bid; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_9__ {struct TYPE_9__* e_map; } ;
struct TYPE_7__ {TYPE_5__* element_tree; } ;


 int * FUNC_0 (int *,TYPE_5__*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_2__ const*,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const svn_branch__state_t *VAR_0,
                               apr_pool_t *VAR_1)
{
  apr_hash_index_t *VAR_2;

  FUNC_3(VAR_0->bid);
  FUNC_3(VAR_0->txn);
  FUNC_3(VAR_0->priv->element_tree);
  FUNC_3(VAR_0->priv->element_tree->e_map);


  for (VAR_2 = FUNC_0(VAR_1, VAR_0->priv->element_tree->e_map);
       VAR_2; VAR_2 = FUNC_1(VAR_2))
    {
      FUNC_4(VAR_0, FUNC_5(VAR_2),
                              FUNC_2(VAR_2));
    }
}
