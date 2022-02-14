
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct z_candidate {TYPE_1__* second_conv; } ;
struct TYPE_2__ {scalar_t__ kind; } ;


 int VAR_0 ;
 struct z_candidate* FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;

tree
FUNC_3 (tree VAR_3, tree VAR_4, int VAR_5)
{
  struct z_candidate *VAR_6
    = FUNC_0 (VAR_3, VAR_4, VAR_5);

  if (VAR_6)
    {
      if (VAR_6->second_conv->kind == VAR_1)
 return VAR_2;
      VAR_4 = FUNC_2 (VAR_6->second_conv, VAR_4);
      return FUNC_1 (VAR_4);
    }
  return VAR_0;
}
