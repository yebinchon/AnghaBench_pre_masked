
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ segT ;
typedef int offsetT ;
struct TYPE_6__ {int fx_where; int fx_r_type; int * fx_addsy; scalar_t__ fx_pcrel; TYPE_1__* fx_frag; } ;
typedef TYPE_2__ fixS ;
struct TYPE_5__ {int fr_address; } ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

long
FUNC_3 (fixS * VAR_0, segT VAR_1)
{
  offsetT VAR_2 = VAR_0->fx_where + VAR_0->fx_frag->fr_address;






  if (VAR_0->fx_pcrel
      && ((VAR_0->fx_addsy && FUNC_0 (VAR_0->fx_addsy) != VAR_1)
   || (FUNC_2 (VAR_0)



       )))
    VAR_2 = 0;

  switch (VAR_0->fx_r_type)
    {





    case 136:
      return VAR_2 & ~3;

    case 135:
    case 137:
    case 139:
    case 138:
      return (VAR_2 + 4) & ~3;


    case 129:
    case 128:
    case 133:
    case 132:
    case 131:
    case 130:
    case 134:
      return VAR_2 + 4;



    case 143:
    case 142:
    case 141:
    case 144:
    case 140:
      return VAR_2 + 8;





    case 146:
    case 145:
    case 148:
    case 147:
    case 149:
      return VAR_2 + 8;



    default:
      return VAR_2;
    }
}
