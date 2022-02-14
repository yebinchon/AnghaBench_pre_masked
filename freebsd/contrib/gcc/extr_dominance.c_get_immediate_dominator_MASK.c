
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


 int * VAR_0 ;
 int FUNC_0 (int ) ;

basic_block
FUNC_1 (enum cdi_direction VAR_1, basic_block VAR_2)
{
  struct et_node *VAR_3 = VAR_2->dom[VAR_1];

  FUNC_0 (VAR_0[VAR_1]);

  if (!VAR_3->father)
    return ((void*)0);

  return VAR_3->father->data;
}
