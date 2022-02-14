
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8 (int VAR_7, rtx VAR_8, int VAR_9, rtx VAR_10, HOST_WIDE_INT VAR_11)
{
  if (FUNC_1 (VAR_8) == VAR_6)
    VAR_8 = FUNC_6 (VAR_8);
  if (FUNC_1 (VAR_10) == VAR_6)
    VAR_10 = FUNC_6 (VAR_10);
  if (FUNC_1 (VAR_8) == VAR_3)
    VAR_8 = FUNC_3 (VAR_8, 0);
  else if (FUNC_1 (VAR_8) == VAR_4)
    VAR_8 = FUNC_3 (VAR_8, 1);
  else
    VAR_8 = FUNC_4 (VAR_8, VAR_7, 0);
  if (FUNC_1 (VAR_10) == VAR_3)
    VAR_10 = FUNC_3 (VAR_10, 0);
  else if (FUNC_1 (VAR_10) == VAR_4)
    VAR_10 = FUNC_3 (VAR_10, 1);
  else
    VAR_10 = FUNC_4 (VAR_10, VAR_9, 0);

  if (FUNC_7 (VAR_8, VAR_10))
    {
      if (VAR_7 <= 0 || VAR_9 <= 0)
 return 1;
      if (VAR_11 >= 0 && VAR_7 > VAR_11)
 return 1;
      if (VAR_11 < 0 && VAR_9+VAR_11 > 0)
 return 1;
      return 0;
    }




  if (FUNC_1 (VAR_8) == VAR_5)
    {


      rtx VAR_12 = FUNC_3 (VAR_8, 0);
      rtx VAR_13 = FUNC_3 (VAR_8, 1);

      if (FUNC_1 (VAR_10) == VAR_5)
 {


   rtx VAR_14 = FUNC_3 (VAR_10, 0);
   rtx VAR_15 = FUNC_3 (VAR_10, 1);

   if (FUNC_7 (VAR_13, VAR_15))
     return FUNC_8 (VAR_7, VAR_12, VAR_9, VAR_14, VAR_11);
   if (FUNC_7 (VAR_12, VAR_14))
     return FUNC_8 (VAR_7, VAR_13, VAR_9, VAR_15, VAR_11);
   if (FUNC_1 (VAR_13) == VAR_2)
     {
       if (FUNC_1 (VAR_15) == VAR_2)
  return FUNC_8 (VAR_7, VAR_12, VAR_9, VAR_14,
        VAR_11 - FUNC_2 (VAR_13) + FUNC_2 (VAR_15));
       else
  return FUNC_8 (VAR_7, VAR_12, VAR_9, VAR_10,
        VAR_11 - FUNC_2 (VAR_13));
     }
   else if (FUNC_1 (VAR_15) == VAR_2)
     return FUNC_8 (VAR_7, VAR_8, VAR_9, VAR_14, VAR_11 + FUNC_2 (VAR_15));

   return 1;
 }
      else if (FUNC_1 (VAR_13) == VAR_2)
 return FUNC_8 (VAR_7, VAR_12, VAR_9, VAR_10, VAR_11 - FUNC_2 (VAR_13));
    }
  else if (FUNC_1 (VAR_10) == VAR_5)
    {


      rtx VAR_16 = FUNC_3 (VAR_10, 0);
      rtx VAR_17 = FUNC_3 (VAR_10, 1);

      if (FUNC_1 (VAR_17) == VAR_2)
 return FUNC_8 (VAR_7, VAR_8, VAR_9, VAR_16, VAR_11 + FUNC_2 (VAR_17));
      else
 return 1;
    }

  if (FUNC_1 (VAR_8) == FUNC_1 (VAR_10))
    switch (FUNC_1 (VAR_8))
      {
      case 128:
 {



   rtx VAR_18, VAR_19;
   rtx VAR_20 = FUNC_5 (FUNC_3 (VAR_8, 1));
   rtx VAR_21 = FUNC_5 (FUNC_3 (VAR_10, 1));
   if (! FUNC_7 (VAR_20, VAR_21))
     return 1;
   VAR_18 = FUNC_5 (FUNC_3 (VAR_8, 0));
   VAR_19 = FUNC_5 (FUNC_3 (VAR_10, 0));
   if (FUNC_7 (VAR_18, VAR_19))
     return (VAR_7 == 0 || VAR_9 == 0
      || (VAR_11 >= 0 && VAR_7 > VAR_11) || (VAR_11 < 0 && VAR_9+VAR_11 > 0));


   if (FUNC_1 (VAR_20) != VAR_2)
     return 1;
   VAR_7 /= FUNC_2 (VAR_20);
   VAR_9 /= FUNC_2 (VAR_20);
   VAR_11 /= FUNC_2 (VAR_20);
   return FUNC_8 (VAR_7, VAR_18, VAR_9, VAR_19, VAR_11);
 }

      default:
 break;
      }





  if (FUNC_1 (VAR_8) == VAR_0 && FUNC_1 (FUNC_3 (VAR_8, 1)) == VAR_2)
    {
      if (FUNC_1 (VAR_10) == VAR_0 || VAR_9 < -FUNC_2 (FUNC_3 (VAR_8, 1)))
 VAR_7 = -1;
      return FUNC_8 (VAR_7, FUNC_5 (FUNC_3 (VAR_8, 0)), VAR_9, VAR_10, VAR_11);
    }
  if (FUNC_1 (VAR_10) == VAR_0 && FUNC_1 (FUNC_3 (VAR_10, 1)) == VAR_2)
    {




      if (FUNC_1 (VAR_8) == VAR_0 || VAR_7 < -FUNC_2 (FUNC_3 (VAR_10, 1)))
 VAR_9 = -1;
      return FUNC_8 (VAR_7, VAR_8, VAR_9, FUNC_5 (FUNC_3 (VAR_10, 0)), VAR_11);
    }

  if (FUNC_0 (VAR_8))
    {
      if (FUNC_1 (VAR_8) == VAR_2 && FUNC_1 (VAR_10) == VAR_2)
 {
   VAR_11 += (FUNC_2 (VAR_10) - FUNC_2 (VAR_8));
   return (VAR_7 <= 0 || VAR_9 <= 0
    || (VAR_11 >= 0 && VAR_7 > VAR_11) || (VAR_11 < 0 && VAR_9+VAR_11 > 0));
 }

      if (FUNC_1 (VAR_8) == VAR_1)
 {
   if (FUNC_1 (VAR_10) == VAR_1)
     return FUNC_8 (VAR_7, FUNC_5 (FUNC_3 (VAR_8, 0)),
           VAR_9, FUNC_5 (FUNC_3 (VAR_10, 0)), VAR_11);
   else
     return FUNC_8 (VAR_7, FUNC_5 (FUNC_3 (VAR_8, 0)),
           VAR_9, VAR_10, VAR_11);
 }
      if (FUNC_1 (VAR_10) == VAR_1)
 return FUNC_8 (VAR_7, VAR_8, VAR_9,
       FUNC_5 (FUNC_3 (VAR_10, 0)), VAR_11);

      if (FUNC_0 (VAR_10))
 return (VAR_7 <= 0 || VAR_9 <= 0
  || (FUNC_7 (VAR_8, VAR_10)
      && ((VAR_11 >= 0 && VAR_7 > VAR_11) || (VAR_11 < 0 && VAR_9+VAR_11 > 0))));

      return 1;
    }
  return 1;
}
