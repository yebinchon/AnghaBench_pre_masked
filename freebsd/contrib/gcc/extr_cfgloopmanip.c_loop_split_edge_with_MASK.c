
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct loop {int dummy; } ;
typedef scalar_t__ rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_13__ {TYPE_2__* latch; } ;
struct TYPE_12__ {TYPE_7__* loop_father; int flags; } ;
struct TYPE_11__ {TYPE_2__* dest; TYPE_2__* src; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct loop*) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct loop* FUNC_3 (TYPE_7__*,TYPE_7__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;

basic_block
FUNC_5 (edge VAR_1, rtx VAR_2)
{
  basic_block VAR_3, VAR_4, VAR_5;
  struct loop *VAR_6;

  VAR_3 = VAR_1->src;
  VAR_4 = VAR_1->dest;

  VAR_6 = FUNC_3 (VAR_3->loop_father, VAR_4->loop_father);



  VAR_5 = FUNC_4 (VAR_1);
  FUNC_1 (VAR_5, VAR_6);
  VAR_5->flags |= (VAR_2 ? VAR_0 : 0);

  if (VAR_2)
    FUNC_2 (VAR_2, FUNC_0 (VAR_5));

  if (VAR_4->loop_father->latch == VAR_3)
    VAR_4->loop_father->latch = VAR_5;

  return VAR_5;
}
