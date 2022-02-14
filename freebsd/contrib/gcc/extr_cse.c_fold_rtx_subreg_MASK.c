
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {scalar_t__ exp; struct table_elt* next_same_value; struct table_elt* first_same_value; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 int VAR_16 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (int,scalar_t__) ;
 struct table_elt* FUNC_20 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_24 (int,int,scalar_t__,int) ;
 scalar_t__ FUNC_25 (scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__) ;

__attribute__((used)) static rtx
FUNC_27 (rtx VAR_17, rtx VAR_18)
{
  enum machine_mode VAR_19 = FUNC_4 (VAR_17);
  rtx VAR_20;
  rtx VAR_21;
  rtx VAR_22;


  if ((VAR_22 = FUNC_21 (VAR_17, VAR_3)) != 0
      || (VAR_22 = FUNC_21 (VAR_17, VAR_2)) != 0)
    return VAR_22;
  if (FUNC_7 (VAR_19) > FUNC_7 (FUNC_4 (FUNC_12 (VAR_17))))
    {
      enum machine_mode VAR_23 = FUNC_4 (FUNC_12 (VAR_17));
      struct table_elt *VAR_24;

      if (FUNC_7 (VAR_19) <= VAR_14
   && FUNC_7 (VAR_23) <= VAR_14
   && (VAR_24 = FUNC_20 (FUNC_12 (VAR_17), FUNC_8 (FUNC_12 (VAR_17), VAR_23),
       VAR_23)) != 0)
 for (VAR_24 = VAR_24->first_same_value; VAR_24; VAR_24 = VAR_24->next_same_value)
   {
     if (FUNC_2 (VAR_24->exp)
  && FUNC_4 (VAR_24->exp) == VAR_15)
       return VAR_24->exp;

     if (FUNC_3 (VAR_24->exp) == VAR_11
  && FUNC_4 (FUNC_12 (VAR_24->exp)) == VAR_19
  && FUNC_17 (VAR_24->exp, VAR_24->exp, 1, 0))
       return FUNC_15 (FUNC_12 (VAR_24->exp));
   }

      return VAR_17;
    }





  VAR_20 = FUNC_18 (FUNC_12 (VAR_17), VAR_18);
  VAR_21 = FUNC_16 (VAR_20);
  if (VAR_21)
    VAR_20 = VAR_21;

  if (VAR_20 != FUNC_12 (VAR_17))
    {
      VAR_22 = FUNC_23 (VAR_19, VAR_20,
        FUNC_4 (FUNC_12 (VAR_17)), FUNC_11 (VAR_17));
      if (VAR_22)
 return VAR_22;
    }

  if (FUNC_10 (VAR_20)
      && FUNC_7 (VAR_19) < FUNC_7 (FUNC_4 (VAR_20)))
    {
      struct table_elt *VAR_25;

      VAR_25 = FUNC_20 (VAR_20,
      FUNC_8 (VAR_20, FUNC_4 (VAR_20)),
      FUNC_4 (VAR_20));

      if (VAR_25)
 VAR_25 = VAR_25->first_same_value;

      if (FUNC_25 (VAR_17))
 for (; VAR_25; VAR_25 = VAR_25->next_same_value)
   {
     enum rtx_code VAR_26 = FUNC_3 (VAR_25->exp);


     if (FUNC_13 (VAR_25->exp)
  && VAR_26 != VAR_10
  && VAR_26 != VAR_16
  && FUNC_3 (FUNC_14 (VAR_25->exp, 0)) == VAR_11
  && FUNC_4 (FUNC_12 (FUNC_14 (VAR_25->exp, 0))) == VAR_19
  && (FUNC_6 (VAR_19)
      == FUNC_6 (FUNC_4 (FUNC_14 (VAR_25->exp, 0)))))
       {
  rtx VAR_27 = FUNC_12 (FUNC_14 (VAR_25->exp, 0));

  if (!FUNC_10 (VAR_27) && ! FUNC_2 (VAR_27))
    VAR_27 = FUNC_18 (VAR_27, VAR_7);

  VAR_27 = FUNC_16 (VAR_27);
  if (VAR_27)
    VAR_22 = FUNC_24 (FUNC_3 (VAR_25->exp), VAR_19,
        VAR_27, VAR_19);
       }
     else if (FUNC_0 (VAR_25->exp)
       && VAR_26 != VAR_4 && VAR_26 != VAR_6
       && VAR_26 != VAR_12 && VAR_26 != VAR_13
       && VAR_26 != VAR_1 && VAR_26 != VAR_5
       && VAR_26 != VAR_8 && VAR_26 != VAR_9
       && ((FUNC_3 (FUNC_14 (VAR_25->exp, 0)) == VAR_11
     && (FUNC_4 (FUNC_12 (FUNC_14 (VAR_25->exp, 0)))
         == VAR_19))
    || FUNC_2 (FUNC_14 (VAR_25->exp, 0)))
       && ((FUNC_3 (FUNC_14 (VAR_25->exp, 1)) == VAR_11
     && (FUNC_4 (FUNC_12 (FUNC_14 (VAR_25->exp, 1)))
         == VAR_19))
    || FUNC_2 (FUNC_14 (VAR_25->exp, 1))))
       {
  rtx VAR_28 = FUNC_19 (VAR_19, FUNC_14 (VAR_25->exp, 0));
  rtx VAR_29 = FUNC_19 (VAR_19, FUNC_14 (VAR_25->exp, 1));

  if (VAR_28 && !FUNC_10 (VAR_28) && ! FUNC_2 (VAR_28))
    VAR_28 = FUNC_18 (VAR_28, VAR_7);

  if (VAR_28)
    VAR_28 = FUNC_16 (VAR_28);

  if (VAR_29 && !FUNC_10 (VAR_29) && ! FUNC_2 (VAR_29))
    VAR_29 = FUNC_18 (VAR_29, VAR_7);

  if (VAR_29)
    VAR_29 = FUNC_16 (VAR_29);






  if (VAR_28 && VAR_29
      && FUNC_3 (VAR_25->exp) == VAR_0
      && FUNC_3 (VAR_29) == VAR_3
      && FUNC_9 (VAR_29) >= FUNC_5 (VAR_19))
    {
      if (FUNC_9 (VAR_29)
   < FUNC_5 (FUNC_4 (VAR_25->exp)))



        VAR_22 = FUNC_1 (VAR_19);
      else


        VAR_22 = 0;
    }
  else if (VAR_28 && VAR_29)
    VAR_22 = FUNC_22 (FUNC_3 (VAR_25->exp),
         VAR_19, VAR_28, VAR_29);
       }

     else if (FUNC_3 (VAR_25->exp) == VAR_11
       && FUNC_4 (FUNC_12 (VAR_25->exp)) == VAR_19
       && (FUNC_7 (FUNC_4 (VAR_20))
    <= VAR_14)
       && FUNC_17 (VAR_25->exp, VAR_25->exp, 1, 0))
       VAR_22 = FUNC_15 (FUNC_12 (VAR_25->exp));

     if (VAR_22)
       return VAR_22;
   }
      else





 for (; VAR_25; VAR_25 = VAR_25->next_same_value)
   {
     if (FUNC_3 (VAR_25->exp) == VAR_16
  && FUNC_26 (VAR_17)
  >= FUNC_5 (FUNC_4 (FUNC_14 (VAR_25->exp, 0))))
       return FUNC_1 (VAR_19);
   }
    }

  return VAR_17;
}
