
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {struct TYPE_8__* prev_bb; } ;
struct TYPE_7__ {TYPE_2__* src; TYPE_2__* dest; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static basic_block
FUNC_1 (edge VAR_0)
{
  basic_block VAR_1 = VAR_0->dest;

  if (VAR_1->prev_bb && FUNC_0 (VAR_1->prev_bb, VAR_1))
    return VAR_0->src;
  else
    return VAR_1->prev_bb;
}
