
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_10__ {int parent_eid; } ;
typedef TYPE_2__ svn_element__content_t ;
struct TYPE_11__ {TYPE_1__* priv; int bid; } ;
typedef TYPE_3__ svn_branch__state_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_12__ {int root_eid; int e_map; } ;
struct TYPE_9__ {TYPE_4__* element_tree; } ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int,TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_branch__state_t *VAR_1,
                     int VAR_2,
                     apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;

  VAR_1->bid = FUNC_3(VAR_1->bid, VAR_2,
                                    FUNC_4(VAR_1));
  if (VAR_1->priv->element_tree->root_eid < -1)
    {
      VAR_1->priv->element_tree->root_eid
        = VAR_2 - VAR_1->priv->element_tree->root_eid;
    }

  for (VAR_4 = FUNC_0(VAR_3, VAR_1->priv->element_tree->e_map);
       VAR_4; VAR_4 = FUNC_1(VAR_4))
    {
      int VAR_5 = FUNC_5(VAR_4);
      svn_element__content_t *VAR_6 = FUNC_2(VAR_4);

      if (VAR_5 < -1)
        {
          int VAR_7 = VAR_2 - VAR_5;

          FUNC_6(VAR_1->priv->element_tree, VAR_5, ((void*)0));
          FUNC_6(VAR_1->priv->element_tree, VAR_7, VAR_6);
        }
      if (VAR_6->parent_eid < -1)
        {
          VAR_6->parent_eid = VAR_2 - VAR_6->parent_eid;
        }
    }
  return VAR_0;
}
