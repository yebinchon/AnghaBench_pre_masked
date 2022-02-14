
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int loop_depth; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

int
FUNC_3 (tree VAR_1)
{
  tree VAR_2;
  basic_block VAR_3;


  if (FUNC_1 (VAR_1) != VAR_0)
    return 0;




  VAR_2 = FUNC_0 (VAR_1);
  VAR_3 = FUNC_2 (VAR_2);
  if (!VAR_3)
    return 0;

  return VAR_3->loop_depth;
}
