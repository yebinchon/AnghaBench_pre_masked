
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int succs; } ;
struct TYPE_12__ {int flags; TYPE_2__* dest; TYPE_2__* src; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_7 (edge VAR_2, int VAR_3)
{
  basic_block VAR_4 = VAR_2->src;
  basic_block VAR_5;
  int VAR_6;
  edge VAR_7;

  FUNC_4 (FUNC_1 (VAR_4->succs) > 1);


  if (FUNC_1 (VAR_4->succs) > 2)
    return 0;

  if (!FUNC_3 (FUNC_0 (VAR_4)))
    return 0;

  VAR_7 = VAR_2 == FUNC_2 (VAR_4, 0) ? FUNC_2 (VAR_4, 1) : FUNC_2 (VAR_4, 0);
  VAR_5 = VAR_7->dest;
  if (VAR_5 == VAR_1)
    return 0;


  if (!VAR_3)
    return 1;


  VAR_6 = VAR_7->flags & VAR_0;

  if (!FUNC_5 (VAR_2, VAR_5))
    return 0;
  FUNC_6 (VAR_4)->flags &= ~VAR_0;
  FUNC_6 (VAR_4)->flags |= VAR_6;

  return 1;
}
