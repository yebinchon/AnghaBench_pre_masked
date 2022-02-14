
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,int) ;
 scalar_t__ FUNC_18 (scalar_t__,int,int) ;
 int FUNC_19 (scalar_t__,int) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,int *,scalar_t__*) ;

rtx
FUNC_22 (rtx VAR_7)
{
  int VAR_8 = (FUNC_8 (VAR_7));
  rtx VAR_9;
  rtx VAR_10 = FUNC_9 (VAR_7), VAR_11 = FUNC_14 (VAR_7);

  while (VAR_10 && FUNC_3 (VAR_10))
    VAR_10 = FUNC_9 (VAR_10);


  if (FUNC_3 (VAR_7))
    return VAR_10;

  FUNC_20 (VAR_7);




  if (VAR_10 != 0 && FUNC_0 (VAR_10))
    FUNC_20 (VAR_10);




  if (FUNC_6 (VAR_7) && FUNC_5 (VAR_7))
    {
      rtx VAR_12 = FUNC_5 (VAR_7), VAR_13;

      if (FUNC_7 (VAR_12) == 0)
 {



   FUNC_22 (VAR_12);





   while (VAR_10 && FUNC_3 (VAR_10))
     VAR_10 = FUNC_9 (VAR_10);
   return VAR_10;
 }
      else if (FUNC_21 (VAR_7, ((void*)0), &VAR_13))
 {




   FUNC_22 (VAR_13);
 }
    }



  if (FUNC_6 (VAR_7)
      && (FUNC_2 (FUNC_13 (VAR_7)) == VAR_1
   || FUNC_2 (FUNC_13 (VAR_7)) == VAR_0))
    {
      rtx VAR_14 = FUNC_13 (VAR_7);
      int VAR_15, VAR_16 = FUNC_2 (VAR_14) == VAR_0;
      int VAR_17 = FUNC_19 (VAR_14, VAR_16);

      for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++)
 if (FUNC_7 (FUNC_17 (FUNC_18 (VAR_14, VAR_16, VAR_15), 0)) == 0)
   FUNC_22 (FUNC_17 (FUNC_18 (VAR_14, VAR_16, VAR_15), 0));
      while (VAR_10 && FUNC_3 (VAR_10))
 VAR_10 = FUNC_9 (VAR_10);
      return VAR_10;
    }


  if (FUNC_10 (VAR_7) || FUNC_1 (VAR_7))
    for (VAR_9 = FUNC_15 (VAR_7); VAR_9; VAR_9 = FUNC_17 (VAR_9, 1))
      if (FUNC_16 (VAR_9) == VAR_6

   && FUNC_8 (FUNC_17 (VAR_9, 0)))
 if (FUNC_7 (FUNC_17 (VAR_9, 0)) == 0)
   FUNC_22 (FUNC_17 (VAR_9, 0));

  while (VAR_11 && (FUNC_3 (VAR_11) || FUNC_12 (VAR_11)))
    VAR_11 = FUNC_14 (VAR_11);





  if (VAR_8
      && FUNC_9 (VAR_7) != 0
      && FUNC_6 (FUNC_9 (VAR_7))
      && (FUNC_2 (FUNC_13 (FUNC_9 (VAR_7))) == VAR_1
   || FUNC_2 (FUNC_13 (FUNC_9 (VAR_7))) == VAR_0))
    VAR_10 = FUNC_22 (FUNC_9 (VAR_7));



  if (VAR_8 && VAR_11 && FUNC_0 (VAR_11))
    {
      enum rtx_code VAR_18;
      while (VAR_10)
 {
   VAR_18 = FUNC_2 (VAR_10);
   if (VAR_18 == VAR_4
       && FUNC_11 (VAR_10) != VAR_5)
     VAR_10 = FUNC_9 (VAR_10);

   else if (VAR_18 == VAR_3 && FUNC_3 (VAR_10))
     VAR_10 = FUNC_9 (VAR_10);
   else if (VAR_18 == VAR_2 || FUNC_4 (VAR_10))




     VAR_10 = FUNC_22 (VAR_10);
   else
     break;
 }
    }

  return VAR_10;
}
