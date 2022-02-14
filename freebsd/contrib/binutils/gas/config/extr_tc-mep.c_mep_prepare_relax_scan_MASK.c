
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
typedef size_t relax_substateT ;
typedef scalar_t__ offsetT ;
struct TYPE_4__ {int * fr_symbol; } ;
typedef TYPE_1__ fragS ;
struct TYPE_5__ {scalar_t__ rlx_length; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* VAR_0 ;

void
FUNC_1 (fragS *VAR_1, offsetT *VAR_2, relax_substateT VAR_3)
{
  symbolS *VAR_4 = VAR_1->fr_symbol;
  if (VAR_4 && !FUNC_0 (VAR_4))
    *VAR_2 = 0;

  *VAR_2 += 2 + VAR_0[VAR_3].rlx_length;
}
