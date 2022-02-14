
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_element__content_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int e_map; } ;
struct TYPE_8__ {int is_flat; TYPE_3__* element_tree; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int,int const*) ;
 int FUNC_5 (TYPE_3__*,int,int const*) ;

__attribute__((used)) static void
FUNC_6(svn_branch__state_t *VAR_1,
               int VAR_2,
               const svn_element__content_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_2(VAR_1->priv->element_tree->e_map);

  FUNC_1(FUNC_0(VAR_1, VAR_2));
  if (VAR_3)
    FUNC_4(VAR_1, VAR_2, VAR_3);

  FUNC_5(VAR_1->priv->element_tree, VAR_2, VAR_3);
  VAR_1->priv->is_flat = VAR_0;
  FUNC_3(VAR_1, VAR_4);
}
