
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int uInt ;
typedef int uByte ;
struct TYPE_27__ {scalar_t__ digits; int bits; int* lsu; scalar_t__ exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_28__ {scalar_t__ digits; int extended; } ;
typedef TYPE_2__ decContext ;
typedef int Int ;
typedef scalar_t__ Flag ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,TYPE_2__*,int*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int*,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__ const*,TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

decNumber *
FUNC_8 (decNumber * VAR_9, const decNumber * VAR_10, const decNumber * VAR_11,
       decContext * VAR_12, Flag VAR_13, uInt * VAR_14)
{
  decNumber *VAR_15 = ((void*)0);
  decNumber *VAR_16 = ((void*)0);
  Int VAR_17 = 0;
  uByte VAR_18;
  uByte VAR_19 = 0;






  do
    {
      VAR_18 = (VAR_10->bits | VAR_11->bits) & (VAR_7 | VAR_5);
      if (VAR_18)
 {
   if (VAR_13 == VAR_1);
   else if (VAR_18 & VAR_7);
   else
     {

       if (VAR_10->bits & VAR_11->bits & VAR_5);
       else
  {

    VAR_13 = VAR_2;
    if (VAR_10->bits & VAR_5)
      VAR_17 = -1;
    else
      VAR_17 = +1;
    break;
  }
     }
   VAR_13 = VAR_4;
   FUNC_4 (VAR_9, VAR_10, VAR_11, VAR_14);
   break;
 }

      VAR_17 = FUNC_1 (VAR_10, VAR_11);
    }
  while (0);

  if (VAR_17 == VAR_0)
    *VAR_14 |= VAR_8;
  else
    {
      if (VAR_13 == VAR_1)
 {
   FUNC_5 (VAR_9);
   if (VAR_17 == 0)
     VAR_9->bits = VAR_19;
   else
     {
       *VAR_9->lsu = 1;
       if (VAR_17 < 0)
  VAR_9->bits = VAR_6;
     }
 }
      else if (VAR_13 == VAR_4);
      else
 {
   Int VAR_20 = 0;

   const decNumber *VAR_21;
   if (VAR_17 == 0)
     {

       uByte VAR_22 = (VAR_10->bits & VAR_6);
       uByte VAR_23 = (VAR_11->bits & VAR_6);
       if (VAR_22 != VAR_23)
  {
    if (VAR_22)
      VAR_17 = -1;
    else
      VAR_17 = +1;
  }
       else if (VAR_22 && VAR_23)
  {
    if (VAR_10->exponent < VAR_11->exponent)
      VAR_17 = +1;
    else
      VAR_17 = -1;

  }
       else
  {
    if (VAR_10->exponent > VAR_11->exponent)
      VAR_17 = +1;
    else
      VAR_17 = -1;

  }
     }

   if (VAR_13 == VAR_3)
     VAR_17 = -VAR_17;
   VAR_21 = (VAR_17 > 0 ? VAR_10 : VAR_11);

   FUNC_2 (VAR_9, VAR_21, VAR_12, &VAR_20, VAR_14);
   FUNC_3 (VAR_9, VAR_12, &VAR_20, VAR_14);
 }
    }
  if (VAR_16 != ((void*)0))
    FUNC_7 (VAR_16);
  if (VAR_15 != ((void*)0))
    FUNC_7 (VAR_15);
  return VAR_9;
}
