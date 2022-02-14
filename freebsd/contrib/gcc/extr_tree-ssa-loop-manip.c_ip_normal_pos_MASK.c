
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct loop {scalar_t__ latch; } ;
typedef TYPE_1__* edge ;
typedef int * basic_block ;
struct TYPE_3__ {scalar_t__ dest; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct loop*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

basic_block
FUNC_6 (struct loop *VAR_1)
{
  tree VAR_2;
  basic_block VAR_3;
  edge VAR_4;

  if (!FUNC_5 (VAR_1->latch))
    return ((void*)0);

  VAR_3 = FUNC_4 (VAR_1->latch);
  VAR_2 = FUNC_3 (VAR_3);
  if (FUNC_1 (VAR_2) != VAR_0)
    return ((void*)0);

  VAR_4 = FUNC_0 (VAR_3, 0);
  if (VAR_4->dest == VAR_1->latch)
    VAR_4 = FUNC_0 (VAR_3, 1);

  if (FUNC_2 (VAR_1, VAR_4->dest))
    return ((void*)0);

  return VAR_3;
}
