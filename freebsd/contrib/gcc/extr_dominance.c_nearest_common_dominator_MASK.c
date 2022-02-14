
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_1__* basic_block ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int * dom; } ;


 int * VAR_0 ;
 TYPE_5__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

basic_block
FUNC_2 (enum cdi_direction VAR_1, basic_block VAR_2, basic_block VAR_3)
{
  FUNC_1 (VAR_0[VAR_1]);

  if (!VAR_2)
    return VAR_3;
  if (!VAR_3)
    return VAR_2;

  return FUNC_0 (VAR_2->dom[VAR_1], VAR_3->dom[VAR_1])->data;
}
