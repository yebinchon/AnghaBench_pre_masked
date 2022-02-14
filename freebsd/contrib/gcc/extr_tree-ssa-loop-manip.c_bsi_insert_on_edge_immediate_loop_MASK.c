
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_12__ {TYPE_2__* latch; } ;
struct TYPE_11__ {TYPE_3__* loop_father; } ;
struct TYPE_10__ {TYPE_2__* dest; TYPE_2__* src; } ;


 int FUNC_0 (TYPE_2__*,struct loop*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 struct loop* FUNC_2 (TYPE_3__*,TYPE_3__*) ;

basic_block
FUNC_3 (edge VAR_0, tree VAR_1)
{
  basic_block VAR_2, VAR_3, VAR_4;
  struct loop *VAR_5;

  VAR_2 = VAR_0->src;
  VAR_3 = VAR_0->dest;

  VAR_5 = FUNC_2 (VAR_2->loop_father, VAR_3->loop_father);

  VAR_4 = FUNC_1 (VAR_0, VAR_1);

  if (!VAR_4)
    return ((void*)0);

  FUNC_0 (VAR_4, VAR_5);
  if (VAR_3->loop_father->latch == VAR_2)
    VAR_3->loop_father->latch = VAR_4;

  return VAR_4;
}
