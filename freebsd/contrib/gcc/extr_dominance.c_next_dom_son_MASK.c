
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct et_node {TYPE_3__* data; TYPE_2__* father; } ;
typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_3__* basic_block ;
struct TYPE_8__ {TYPE_1__** dom; } ;
struct TYPE_7__ {struct et_node* son; } ;
struct TYPE_6__ {struct et_node* right; } ;



basic_block
FUNC_0 (enum cdi_direction VAR_0, basic_block VAR_1)
{
  struct et_node *VAR_2 = VAR_1->dom[VAR_0]->right;

  return VAR_2->father->son == VAR_2 ? ((void*)0) : VAR_2->data;
}
