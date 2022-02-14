
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct et_node {int dfs_num_out; } ;
typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {struct et_node** dom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int) ;

unsigned
FUNC_1 (enum cdi_direction VAR_2, basic_block VAR_3)
{
  struct et_node *VAR_4 = VAR_3->dom[VAR_2];

  FUNC_0 (VAR_1[VAR_2] == VAR_0);
  return VAR_4->dfs_num_out;
}
