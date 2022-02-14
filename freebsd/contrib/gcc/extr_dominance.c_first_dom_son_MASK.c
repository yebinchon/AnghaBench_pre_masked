
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct et_node {TYPE_2__* data; } ;
typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_2__* basic_block ;
struct TYPE_6__ {TYPE_1__** dom; } ;
struct TYPE_5__ {struct et_node* son; } ;



basic_block
FUNC_0 (enum cdi_direction VAR_0, basic_block VAR_1)
{
  struct et_node *VAR_2 = VAR_1->dom[VAR_0]->son;

  return VAR_2 ? VAR_2->data : ((void*)0);
}
