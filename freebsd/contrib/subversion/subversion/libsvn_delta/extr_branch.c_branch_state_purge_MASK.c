
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ svn_branch__state_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int is_flat; TYPE_1__* element_tree; } ;
struct TYPE_5__ {int root_eid; int e_map; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_branch__state_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  FUNC_0(VAR_2->priv->element_tree->e_map,
                                  VAR_2->priv->element_tree->root_eid,
                                  VAR_3);
  VAR_2->priv->is_flat = VAR_1;
  return VAR_0;
}
