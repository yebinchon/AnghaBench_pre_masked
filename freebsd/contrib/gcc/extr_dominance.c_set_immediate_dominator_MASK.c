
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct et_node {TYPE_1__* father; } ;
typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_2__* basic_block ;
struct TYPE_6__ {struct et_node** dom; } ;
struct TYPE_5__ {TYPE_2__* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (struct et_node*,struct et_node*) ;
 int FUNC_1 (struct et_node*) ;
 int FUNC_2 (scalar_t__) ;

inline void
FUNC_3 (enum cdi_direction VAR_3, basic_block VAR_4,
    basic_block VAR_5)
{
  struct et_node *VAR_6 = VAR_4->dom[VAR_3];

  FUNC_2 (VAR_2[VAR_3]);

  if (VAR_6->father)
    {
      if (VAR_6->father->data == VAR_5)
 return;
      FUNC_1 (VAR_6);
    }

  if (VAR_5)
    FUNC_0 (VAR_6, VAR_5->dom[VAR_3]);

  if (VAR_2[VAR_3] == VAR_1)
    VAR_2[VAR_3] = VAR_0;
}
