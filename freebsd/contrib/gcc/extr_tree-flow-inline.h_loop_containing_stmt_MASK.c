
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {struct loop* loop_father; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline struct loop *
FUNC_1 (tree VAR_0)
{
  basic_block VAR_1 = FUNC_0 (VAR_0);
  if (!VAR_1)
    return ((void*)0);

  return VAR_1->loop_father;
}
