
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct et_node {struct et_node* son; } ;
typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {struct et_node** dom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (struct et_node*,struct et_node*) ;
 int FUNC_1 (struct et_node*) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3 (enum cdi_direction VAR_3, basic_block VAR_4,
          basic_block VAR_5)
{
  struct et_node *VAR_6 = VAR_4->dom[VAR_3], *VAR_7 = VAR_5->dom[VAR_3], *VAR_8;

  FUNC_2 (VAR_2[VAR_3]);

  if (!VAR_6->son)
    return;

  while (VAR_6->son)
    {
      VAR_8 = VAR_6->son;

      FUNC_1 (VAR_8);
      FUNC_0 (VAR_8, VAR_7);
    }

  if (VAR_2[VAR_3] == VAR_1)
    VAR_2[VAR_3] = VAR_0;
}
