
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long fx_where; TYPE_1__* fx_frag; int * fx_subsy; scalar_t__ fx_addsy; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {long fr_address; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

long
FUNC_1 (fixS * VAR_1)
{
  long VAR_2 = 0;

  if (VAR_1->fx_addsy
      && (FUNC_0 (VAR_1->fx_addsy) == VAR_0)
      && (VAR_1->fx_subsy == ((void*)0)))
    {
      VAR_2 = 0;
    }
  else
    {
      VAR_2 = VAR_1->fx_where + VAR_1->fx_frag->fr_address;
    }

  return VAR_2;
}
