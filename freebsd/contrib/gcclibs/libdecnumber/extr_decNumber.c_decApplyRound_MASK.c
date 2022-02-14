
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uInt ;
struct TYPE_8__ {int* lsu; size_t digits; scalar_t__ exponent; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_9__ {int round; scalar_t__ emax; scalar_t__ emin; scalar_t__ digits; } ;
typedef TYPE_2__ decContext ;
typedef int Unit ;
typedef scalar_t__ Int ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;







 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,size_t*) ;
 int FUNC_3 (int*,int ,int ,int,int ,int*,scalar_t__) ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void
FUNC_5 (decNumber * VAR_9, decContext * VAR_10, Int VAR_11, uInt * VAR_12)
{
  Int VAR_13;


  if (VAR_11 == 0)
    return;

  VAR_13 = 0;


  switch (VAR_10->round)
    {
    case 133:
      {

 if (VAR_11 < 0)
   VAR_13 = -1;
 break;
      }

    case 131:
      {
 if (VAR_11 > 5)
   VAR_13 = 1;
 break;
      }

    case 130:
      {
 if (VAR_11 > 5)
   VAR_13 = 1;
 else if (VAR_11 == 5)
   {

     if (*VAR_9->lsu & 0x01)
       VAR_13 = 1;
   }
 break;
      }

    case 129:
      {
 if (VAR_11 >= 5)
   VAR_13 = 1;
 break;
      }

    case 128:
      {
 if (VAR_11 > 0)
   VAR_13 = 1;
 break;
      }

    case 134:
      {


 if (FUNC_1 (VAR_9))
   {
     if (VAR_11 < 0)
       VAR_13 = -1;
   }
 else
   {
     if (VAR_11 > 0)
       VAR_13 = 1;
   }
 break;
      }

    case 132:
      {


 if (!FUNC_1 (VAR_9))
   {
     if (VAR_11 < 0)
       VAR_13 = -1;
   }
 else
   {
     if (VAR_11 > 0)
       VAR_13 = 1;
   }
 break;
      }

    default:
      {
 *VAR_12 |= VAR_3;



 break;
      }
    }


  if (VAR_13 == 0)
    return;





  if (VAR_13 > 0)
    {
      Unit *VAR_14;
      uInt VAR_15 = VAR_9->digits;
      for (VAR_14 = VAR_9->lsu;; VAR_14++)
 {
   if (VAR_15 <= VAR_0)
     {

       if (*VAR_14 != VAR_8[VAR_15] - 1)
  break;

       *VAR_14 = (Unit) VAR_8[VAR_15 - 1];
       for (VAR_14 = VAR_14 - 1; VAR_14 >= VAR_9->lsu; VAR_14--)
  *VAR_14 = 0;
       VAR_9->exponent++;

       if ((VAR_9->exponent + VAR_9->digits) > VAR_10->emax + 1)
  {
    FUNC_2 (VAR_9, VAR_10, VAR_12);
  }
       return;
     }

   if (*VAR_14 != VAR_1)
     break;
   VAR_15 -= VAR_0;
 }
    }
  else
    {


      Unit *VAR_16, *VAR_17;
      uInt VAR_18 = VAR_9->digits;
      for (VAR_16 = VAR_9->lsu;; VAR_16++)
 {
   if (VAR_18 <= VAR_0)
     {

       if (*VAR_16 != VAR_8[VAR_18 - 1])
  break;

       VAR_17 = VAR_16;
       *VAR_16 = (Unit) VAR_8[VAR_18] - 1;

       for (VAR_16 = VAR_16 - 1; VAR_16 >= VAR_9->lsu; VAR_16--)
  *VAR_16 = (Unit) VAR_8[VAR_0] - 1;
       VAR_9->exponent--;






       if (VAR_9->exponent + 1 == VAR_10->emin - VAR_10->digits + 1)
  {
    if (VAR_18 == 1 && VAR_9->digits == 1)
      *VAR_17 = 0;
    else
      {
        *VAR_17 = (Unit) VAR_8[VAR_18 - 1] - 1;
        VAR_9->digits--;
      }
    VAR_9->exponent++;
    *VAR_12 |=
      VAR_6 | VAR_5 | VAR_2 | VAR_4;
  }
       return;
     }


   if (*VAR_16 != 0)
     break;
   VAR_18 -= VAR_0;
 }

    }


  FUNC_3 (VAR_9->lsu, FUNC_0 (VAR_9->digits), VAR_7, 1, 0, VAR_9->lsu, VAR_13);
}
