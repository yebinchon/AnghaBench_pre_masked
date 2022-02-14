
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int rtx ;
typedef int edge_iterator ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_11__ {int prev_bb; int preds; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_8__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static basic_block
FUNC_10 (rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4;
  basic_block VAR_5;
  edge VAR_6;
  edge_iterator VAR_7;




  for (VAR_7 = FUNC_6 (FUNC_1 (VAR_3)->preds); (VAR_6 = FUNC_5 (VAR_7)); )
    if (VAR_6->flags & VAR_1)
      FUNC_8 (VAR_6);
    else
      FUNC_4 (&VAR_7);
  VAR_4 = FUNC_7 (VAR_2, VAR_3);
  if (FUNC_0 (VAR_4))
    VAR_4 = FUNC_2 (VAR_4);
  VAR_5 = FUNC_3 (VAR_2, VAR_4, FUNC_1 (VAR_3)->prev_bb);
  FUNC_9 (VAR_5);
  VAR_5->flags |= VAR_0;
  return VAR_5;
}
