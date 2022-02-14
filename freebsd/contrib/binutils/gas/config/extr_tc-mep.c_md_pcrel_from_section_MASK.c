
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
typedef scalar_t__ segT ;
struct TYPE_5__ {long fx_where; TYPE_1__* fx_frag; int * fx_addsy; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {long fr_address; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

long
FUNC_2 (fixS *VAR_0, segT VAR_1)
{
  if (VAR_0->fx_addsy != (symbolS *) ((void*)0)
      && (! FUNC_1 (VAR_0->fx_addsy)
   || FUNC_0 (VAR_0->fx_addsy) != VAR_1))


    return 0;




  return VAR_0->fx_where + VAR_0->fx_frag->fr_address;
}
