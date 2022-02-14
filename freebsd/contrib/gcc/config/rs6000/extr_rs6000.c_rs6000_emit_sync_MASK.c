
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int rtvec ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;

 int FUNC_4 (scalar_t__) ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

 int VAR_11 ;
 scalar_t__ FUNC_6 (scalar_t__,int,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_11 (int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (int,scalar_t__,...) ;
 scalar_t__ FUNC_22 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_26 (int,scalar_t__) ;
 int FUNC_27 (int ,int ) ;
 scalar_t__ FUNC_28 (int,scalar_t__,scalar_t__) ;
 int FUNC_29 (int) ;
 scalar_t__ FUNC_30 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_31 (int,int ,int ) ;
 scalar_t__ FUNC_32 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_33 (int,int,scalar_t__,scalar_t__) ;
 int FUNC_34 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 scalar_t__ FUNC_35 (int,scalar_t__,int) ;
 int FUNC_36 (scalar_t__,int) ;
 scalar_t__ FUNC_37 (int,int,scalar_t__,scalar_t__) ;

void
FUNC_38 (enum rtx_code VAR_13, enum machine_mode VAR_14,
    rtx VAR_15, rtx VAR_16, rtx VAR_17, rtx VAR_18,
    bool VAR_19)
{
  enum machine_mode VAR_20;
  rtx VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
  rtx VAR_28;
  rtvec VAR_29;
  HOST_WIDE_INT VAR_30 = FUNC_3 (VAR_14);
  rtx VAR_31 = VAR_4;

  if (VAR_19)
    FUNC_8 (FUNC_17 ());

  if (FUNC_1 (VAR_15) == VAR_3)
    VAR_28 = FUNC_5 (VAR_15, 0);
  else
    VAR_28 = VAR_15;



  if (VAR_14 == VAR_7 || VAR_14 == VAR_2)
    {
      rtx VAR_32, VAR_33;

      if (FUNC_4 (VAR_28) >= 32)
 {
   int VAR_34 = 0;
   if (VAR_0)
     VAR_34 = FUNC_2 (VAR_8) - FUNC_2 (VAR_14);

   VAR_31 = FUNC_0 (VAR_34);
 }
      else
 {
   rtx VAR_35, VAR_36;
   int VAR_37 = VAR_14 == VAR_7 ? 0x18 : 0x10;

   VAR_35 = FUNC_11 (VAR_8, FUNC_15 (VAR_8,
         FUNC_5 (VAR_28, 0)));
   VAR_31 = FUNC_18 (VAR_8);

   FUNC_8 (FUNC_19 (VAR_31, VAR_35, FUNC_0 (3),
     FUNC_0 (VAR_37)));
   FUNC_8 (FUNC_34 (VAR_31, VAR_31, FUNC_0 (VAR_37)));

   VAR_36 = FUNC_10 (VAR_6, VAR_11,
           FUNC_5 (VAR_28, 0),
           FUNC_0 (-4), VAR_4,
           1, VAR_5);
   VAR_28 = FUNC_6 (VAR_28, VAR_8, VAR_36);
   FUNC_36 (VAR_28, 32);



   if (FUNC_1 (VAR_15) == VAR_3)
     VAR_15 = FUNC_26 (VAR_8, VAR_28);
   else
     VAR_15 = VAR_28;
 }

      if (FUNC_1 (VAR_16) == VAR_3)
 {
   VAR_33 = FUNC_35 (VAR_8, FUNC_5 (VAR_16, 0), VAR_14);
   VAR_33 = FUNC_26 (VAR_8, VAR_33);
 }
      else
 VAR_33 = FUNC_35 (VAR_8, VAR_16, VAR_14);

      switch (VAR_13)
 {
 case 131:
 case 128:
   VAR_32 = FUNC_10 (VAR_8, VAR_11,
    VAR_33, FUNC_0 (VAR_30), VAR_4,
    1, VAR_5);
   FUNC_8 (FUNC_13 (VAR_32, VAR_32, VAR_31));
   break;

 case 132:
   VAR_32 = FUNC_10 (VAR_8, VAR_12,
    VAR_33, FUNC_0 (~VAR_30), VAR_4,
    1, VAR_5);
   FUNC_8 (FUNC_20 (VAR_32, VAR_32, VAR_31));
   break;

 case 129:
 case 130:
   {
     rtx VAR_38;

     VAR_32 = FUNC_10 (VAR_8, VAR_11,
      VAR_33, FUNC_0 (VAR_30), VAR_4,
      1, VAR_5);
     FUNC_8 (FUNC_13 (VAR_32, VAR_32, VAR_31));

     VAR_38 = FUNC_18 (VAR_8);
     FUNC_9 (VAR_38, FUNC_0 (VAR_30));
     FUNC_8 (FUNC_13 (VAR_38, VAR_38, VAR_31));

     if (VAR_13 == 129)
       VAR_32 = FUNC_28 (VAR_8, VAR_15, VAR_32);
     else
       VAR_32 = FUNC_25 (VAR_8, VAR_15, VAR_32);
     VAR_32 = FUNC_22 (VAR_8, VAR_32, VAR_38);
     VAR_32 = FUNC_24 (VAR_8, VAR_32,
     FUNC_22 (VAR_8,
           FUNC_26 (VAR_8, VAR_38),
           VAR_15));
     break;
   }

 default:
   FUNC_12 ();
 }

      if (FUNC_1 (VAR_15) == VAR_3)
 {
   rtx VAR_39, VAR_40;

   VAR_39 = FUNC_18 (VAR_8);
   FUNC_9 (VAR_39, FUNC_0 (VAR_30));
   FUNC_8 (FUNC_13 (VAR_39, VAR_39, VAR_31));

   VAR_40 = FUNC_32 (VAR_8, VAR_28, VAR_39);


   VAR_32 = FUNC_37 (VAR_13, VAR_8, VAR_40, VAR_32);
 }
      VAR_16 = VAR_32;
      VAR_20 = VAR_8;
      VAR_26 = FUNC_18 (VAR_20);
      VAR_27 = FUNC_18 (VAR_20);
    }
  else
    {
      VAR_20 = VAR_14;
      VAR_26 = VAR_17;
      VAR_27 = VAR_18;

      if (VAR_26 == VAR_4)
 VAR_26 = FUNC_18 (VAR_20);
      if (VAR_27 == VAR_4)
 VAR_27 = FUNC_18 (VAR_20);
    }

  if ((VAR_13 == 129 || VAR_13 == 130 || FUNC_1 (VAR_15) == VAR_3)
      && VAR_20 != VAR_14)
    VAR_21 = VAR_16;
  else if (FUNC_1 (VAR_16) == VAR_3 && FUNC_1 (VAR_15) != VAR_3)
    VAR_21 = FUNC_33 (VAR_13, VAR_20, VAR_16, VAR_15);
  else
    VAR_21 = FUNC_33 (VAR_13, VAR_20, VAR_15, VAR_16);

  VAR_23 = FUNC_30 (VAR_10, VAR_27, VAR_21);
  VAR_22 = FUNC_30 (VAR_10, VAR_26, VAR_28);
  VAR_24 = FUNC_30 (VAR_10, VAR_28,
       FUNC_31 (VAR_20,
         FUNC_21 (1, VAR_21),
         VAR_9));
  VAR_25 = FUNC_23 (VAR_10, FUNC_29 (VAR_1));

  if ((VAR_13 == 129 || VAR_13 == 130) && VAR_20 != VAR_14)
    VAR_29 = FUNC_21 (5, VAR_23, VAR_22, VAR_24, VAR_25,
       FUNC_23 (VAR_10, FUNC_29 (VAR_8)));
  else
    VAR_29 = FUNC_21 (4, VAR_23, VAR_22, VAR_24, VAR_25);
  FUNC_8 (FUNC_27 (VAR_10, VAR_29));


  if (VAR_20 != VAR_14 && VAR_17)
    {
      FUNC_8 (FUNC_16 (VAR_26, VAR_26, VAR_31));
      FUNC_7 (VAR_17, VAR_26, 1);
    }

  if (VAR_20 != VAR_14 && VAR_18)
    {
      FUNC_8 (FUNC_16 (VAR_27, VAR_27, VAR_31));
      FUNC_7 (VAR_18, VAR_27, 1);
    }





  if (VAR_19)
    FUNC_8 (FUNC_14 ());
}
