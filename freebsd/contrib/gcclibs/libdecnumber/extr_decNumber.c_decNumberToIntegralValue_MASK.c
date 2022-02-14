
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_24__ {int bits; scalar_t__ exponent; int digits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_25__ {scalar_t__ traps; int digits; } ;
typedef TYPE_2__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int *,scalar_t__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,TYPE_2__*) ;

decNumber *
FUNC_7 (decNumber * VAR_2, const decNumber * VAR_3, decContext * VAR_4)
{
  decNumber VAR_5;
  decContext VAR_6;







  if (VAR_3->bits & VAR_0)
    {
      uInt VAR_7 = 0;
      if (FUNC_3 (VAR_3))
 FUNC_2 (VAR_2, VAR_3);
      else
 FUNC_1 (VAR_2, VAR_3, ((void*)0), &VAR_7);
      if (VAR_7 != 0)
 FUNC_6 (VAR_2, VAR_7, VAR_4);
      return VAR_2;
    }


  if (VAR_3->exponent >= 0)
    return FUNC_2 (VAR_2, VAR_3);

  VAR_6 = *VAR_4;
  VAR_6.digits = VAR_3->digits;
  VAR_6.traps = 0;
  FUNC_5 (&VAR_5);
  return FUNC_4 (VAR_2, VAR_3, &VAR_5, &VAR_6);
}
