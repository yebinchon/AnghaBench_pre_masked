
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uByte ;
struct TYPE_12__ {int bits; scalar_t__ exponent; int* lsu; } ;
typedef TYPE_1__ decNumber ;
typedef int Unit ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*) ;

decNumber *
FUNC_4 (decNumber * VAR_2, const decNumber * VAR_3, const decNumber * VAR_4)
{
  uByte VAR_5;
  Unit VAR_6 = 0;






  VAR_5 = (VAR_3->bits | VAR_4->bits) & VAR_0;
  if (VAR_5)
    {
      if (FUNC_2 (VAR_3) && FUNC_2 (VAR_4))
 VAR_6 = 1;
      else if (FUNC_1 (VAR_3) && FUNC_1 (VAR_4))
 VAR_6 = 1;

    }
  else if (VAR_3->exponent == VAR_4->exponent)
    VAR_6 = 1;

  FUNC_3 (VAR_2);
  *VAR_2->lsu = VAR_6;
  return VAR_2;
}
