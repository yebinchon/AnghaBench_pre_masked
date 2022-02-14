
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* stmt_ann_t ;
typedef int * basic_block ;
struct TYPE_3__ {int * bb; } ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static inline basic_block
FUNC_3 (tree VAR_1)
{
  stmt_ann_t VAR_2;

  if (FUNC_1 (VAR_1) == VAR_0)
    return FUNC_0 (VAR_1);

  VAR_2 = FUNC_2 (VAR_1);
  return VAR_2 ? VAR_2->bb : ((void*)0);
}
