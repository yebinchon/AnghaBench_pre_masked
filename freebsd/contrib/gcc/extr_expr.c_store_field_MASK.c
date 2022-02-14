
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_14 ;
 scalar_t__ FUNC_13 (int,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_20 (scalar_t__,int,int) ;
 scalar_t__ FUNC_21 (int ,int ,int,int) ;
 scalar_t__ FUNC_22 (int ,int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_23 (int,int,scalar_t__,int) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 int * VAR_18 ;
 int FUNC_25 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_26 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ,int,scalar_t__,int ,int ,int) ;
 int FUNC_30 (int) ;
 int FUNC_31 (scalar_t__,int) ;
 int FUNC_32 (int) ;
 int FUNC_33 (scalar_t__,int,int,int,scalar_t__) ;
 scalar_t__ FUNC_34 (int ,scalar_t__,int ) ;

__attribute__((used)) static rtx
FUNC_35 (rtx VAR_19, HOST_WIDE_INT VAR_20, HOST_WIDE_INT VAR_21,
      enum machine_mode VAR_22, tree VAR_23, tree VAR_24, int VAR_25)
{
  HOST_WIDE_INT VAR_26 = 0;

  if (FUNC_14 (VAR_23) == VAR_5)
    return VAR_17;



  if (VAR_20 == 0)
    return FUNC_27 (VAR_23, VAR_17, VAR_16, 0);
  else if (VAR_20 >= 0 && VAR_20 < VAR_6)
    VAR_26 = ((HOST_WIDE_INT) 1 << VAR_20) - 1;
  if (VAR_22 == VAR_1
      && (FUNC_12 (VAR_19) || FUNC_1 (VAR_19) == VAR_15))
    {
      rtx VAR_27 = FUNC_21 (VAR_24, 0, 1, 1);
      rtx VAR_28 = FUNC_20 (VAR_27, VAR_1, 0);

      if (VAR_20 != (HOST_WIDE_INT) FUNC_4 (FUNC_2 (VAR_19)))
 FUNC_26 (VAR_27, VAR_19);

      FUNC_35 (VAR_28, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);

      FUNC_26 (VAR_19, VAR_27);


      return VAR_28;
    }

  if (FUNC_1 (VAR_19) == VAR_4)
    {


      FUNC_30 (!VAR_21);
      return FUNC_34 (VAR_23, VAR_19, 0);
    }





  if (VAR_22 == VAR_16
      || (VAR_22 != VAR_1 && ! VAR_18[(int) VAR_22]
   && FUNC_5 (VAR_22) != VAR_9
   && FUNC_5 (VAR_22) != VAR_8)
      || FUNC_12 (VAR_19)
      || FUNC_1 (VAR_19) == VAR_15


      || (VAR_22 != VAR_1
   && ((((FUNC_8 (VAR_19) < FUNC_3 (VAR_22))
  || VAR_21 % FUNC_3 (VAR_22))
        && FUNC_13 (VAR_22, FUNC_8 (VAR_19)))
       || (VAR_21 % VAR_0 != 0)))



      || (VAR_20 >= 0
   && FUNC_14 (FUNC_19 (FUNC_16 (VAR_23))) == VAR_7
   && FUNC_22 (FUNC_19 (FUNC_16 (VAR_23)), VAR_20) != 0))
    {
      rtx VAR_29;






      if (FUNC_14 (VAR_23) == VAR_11)
 {
   tree VAR_30 = FUNC_16 (VAR_23);
   if (FUNC_6 (VAR_30)
       && FUNC_18 (VAR_30) < FUNC_4 (FUNC_17 (VAR_30))
       && VAR_20 == FUNC_18 (VAR_30))
     {
       VAR_30 = FUNC_16 (FUNC_15 (VAR_23, 0));
       if (FUNC_6 (VAR_30) && FUNC_18 (VAR_30) >= VAR_20)
  VAR_23 = FUNC_15 (VAR_23, 0);
     }
 }

      VAR_29 = FUNC_28 (VAR_23);





      if (VAR_3 && FUNC_5 (FUNC_2 (VAR_29)) == VAR_10
   && VAR_20 < (HOST_WIDE_INT) FUNC_4 (FUNC_2 (VAR_29))
   && FUNC_14 (FUNC_16 (VAR_23)) == VAR_13)
 VAR_29 = FUNC_29 (VAR_14, FUNC_2 (VAR_29), VAR_29,
        FUNC_32 (FUNC_4 (FUNC_2 (VAR_29))
           - VAR_20),
        VAR_12, 1);



      if (VAR_22 != VAR_16 && VAR_22 != VAR_1
   && VAR_22 != FUNC_17 (FUNC_16 (VAR_23)))
 VAR_29 = FUNC_23 (VAR_22, FUNC_17 (FUNC_16 (VAR_23)), VAR_29, 1);




      if (FUNC_2 (VAR_19) == VAR_1 && FUNC_2 (VAR_29) == VAR_1)
 {
   FUNC_30 (FUNC_10 (VAR_19) && FUNC_10 (VAR_29)
        && !(VAR_21 % VAR_0));

   VAR_19 = FUNC_20 (VAR_19, VAR_16, VAR_21 / VAR_0);
   FUNC_25 (VAR_19, VAR_29,
      FUNC_0 ((VAR_20 + VAR_0 - 1)
        / VAR_0),
      VAR_2);

   return VAR_17;
 }


      FUNC_33 (VAR_19, VAR_20, VAR_21, VAR_22, VAR_29);

      return VAR_17;
    }
  else
    {

      rtx VAR_31 = FUNC_20 (VAR_19, VAR_22, VAR_21 / VAR_0);

      if (VAR_31 == VAR_19)
 VAR_31 = FUNC_24 (VAR_31);

      FUNC_11 (VAR_31, 1);
      if (!FUNC_9 (VAR_31) && FUNC_7 (VAR_31) != 0)
 FUNC_31 (VAR_31, VAR_25);

      return FUNC_34 (VAR_23, VAR_31, 0);
    }
}
