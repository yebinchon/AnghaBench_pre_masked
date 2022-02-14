
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ svn_branch__state_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {TYPE_1__* element_tree; } ;
struct TYPE_5__ {int e_map; } ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static apr_pool_t *
FUNC_1(svn_branch__state_t *VAR_0)
{
  return FUNC_0(VAR_0->priv->element_tree->e_map);
}
