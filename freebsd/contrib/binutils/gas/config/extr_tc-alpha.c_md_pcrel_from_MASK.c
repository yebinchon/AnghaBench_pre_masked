
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long valueT ;
struct TYPE_5__ {long fx_where; int fx_r_type; TYPE_1__* fx_frag; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {long fr_address; } ;






long
FUNC_0 (fixS *VAR_0)
{
  valueT VAR_1 = VAR_0->fx_where + VAR_0->fx_frag->fr_address;

  switch (VAR_0->fx_r_type)
    {
    case 130:
    case 128:
    case 129:
      return VAR_1 + 4;
    default:
      return VAR_1;
    }
}
