
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_element__content_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__state_t ;
struct TYPE_5__ {int element_tree; } ;


 int FUNC_0 (TYPE_2__ const*,int,int *) ;
 int * FUNC_1 (int ,int) ;

__attribute__((used)) static svn_element__content_t *
FUNC_2(const svn_branch__state_t *VAR_0,
                   int VAR_1)
{
  svn_element__content_t *VAR_2;

  VAR_2 = FUNC_1(VAR_0->priv->element_tree, VAR_1);

  if (VAR_2)
    FUNC_0(VAR_0, VAR_1, VAR_2);
  return VAR_2;
}
