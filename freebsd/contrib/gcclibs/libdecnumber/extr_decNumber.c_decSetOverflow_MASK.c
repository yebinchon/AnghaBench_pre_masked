
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uInt ;
typedef int uByte ;
struct TYPE_7__ {int bits; int exponent; int digits; scalar_t__* lsu; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_8__ {int emax; int digits; int round; scalar_t__ clamp; } ;
typedef TYPE_2__ decContext ;
typedef scalar_t__ Unit ;
typedef int Int ;
typedef int Flag ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int* VAR_8 ;

__attribute__((used)) static void
FUNC_2 (decNumber * VAR_9, decContext * VAR_10, uInt * VAR_11)
{
  Flag VAR_12 = 0;
  uByte VAR_13 = VAR_9->bits & VAR_3;

  if (FUNC_0 (VAR_9))
    {
      Int VAR_14 = VAR_10->emax;
      if (VAR_10->clamp)
 VAR_14 -= VAR_10->digits - 1;
      if (VAR_9->exponent > VAR_14)
 {
   VAR_9->exponent = VAR_14;
   *VAR_11 |= VAR_4;
 }
      return;
    }

  FUNC_1 (VAR_9);
  switch (VAR_10->round)
    {
    case 129:
      {
 VAR_12 = 1;
 break;
      }
    case 130:
      {
 if (VAR_13)
   VAR_12 = 1;
 break;
      }
    case 128:
      {
 if (!VAR_13)
   VAR_12 = 1;
 break;
      }
    default:
      break;
    }
  if (VAR_12)
    {
      Unit *VAR_15;
      Int VAR_16 = VAR_10->digits;
      VAR_9->digits = VAR_16;

      for (VAR_15 = VAR_9->lsu;; VAR_15++)
 {
   if (VAR_16 > VAR_0)
     *VAR_15 = VAR_1;
   else
     {
       *VAR_15 = (Unit) (VAR_8[VAR_16] - 1);
       break;
     }
   VAR_16 -= VAR_0;
 }
      VAR_9->bits = VAR_13;
      VAR_9->exponent = VAR_10->emax - VAR_10->digits + 1;
    }
  else
    VAR_9->bits = VAR_13 | VAR_2;
  *VAR_11 |= VAR_6 | VAR_5 | VAR_7;
}
