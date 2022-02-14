
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {int succs; } ;
struct TYPE_7__ {int flags; TYPE_2__* dest; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;

basic_block
FUNC_2 (basic_block VAR_1)
{
  edge VAR_2, VAR_3;
  if (FUNC_0 (VAR_1->succs) != 2)
    return VAR_1;

  VAR_2 = FUNC_1 (VAR_1, 0);
  VAR_3 = FUNC_1 (VAR_1, 1);
  if (VAR_2->flags & VAR_0)
    return VAR_3->dest;
  if (VAR_3->flags & VAR_0)
    return VAR_2->dest;

  return VAR_1;
}
