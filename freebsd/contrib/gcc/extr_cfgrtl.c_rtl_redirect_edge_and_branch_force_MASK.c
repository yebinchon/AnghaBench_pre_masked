
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_7__ {scalar_t__ dest; TYPE_1__* src; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static basic_block
FUNC_2 (edge VAR_1, basic_block VAR_2)
{
  if (FUNC_1 (VAR_1, VAR_2)
      || VAR_1->dest == VAR_2)
    return ((void*)0);



  VAR_1->src->flags |= VAR_0;
  return FUNC_0 (VAR_1, VAR_2);
}
