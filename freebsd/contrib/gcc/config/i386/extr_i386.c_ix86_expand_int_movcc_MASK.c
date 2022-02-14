
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int optab ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_14 (int,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_15 (int,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (int,scalar_t__) ;
 scalar_t__ FUNC_18 (int,int) ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_24 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_26 (int ,scalar_t__) ;
 scalar_t__ FUNC_27 () ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_28 (int,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_29 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_30 (int) ;
 int FUNC_31 (scalar_t__,int) ;
 scalar_t__ FUNC_32 (scalar_t__,scalar_t__) ;
 int FUNC_33 (scalar_t__,int ) ;
 int FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (scalar_t__,scalar_t__) ;
 int FUNC_37 () ;
 scalar_t__ FUNC_38 (scalar_t__,int ) ;

int
FUNC_39 (rtx VAR_33[])
{
  enum rtx_code VAR_34 = FUNC_2 (VAR_33[1]), VAR_35;
  rtx VAR_36, VAR_37;
  rtx VAR_38, VAR_39;
  enum machine_mode VAR_40 = FUNC_3 (VAR_33[0]);
  bool VAR_41 = 0;;

  FUNC_37 ();
  VAR_37 = FUNC_29 (VAR_34, &VAR_38, &VAR_39);
  VAR_36 = FUNC_27 ();
  FUNC_12 ();

  VAR_35 = FUNC_2 (VAR_37);

  if ((VAR_32 == VAR_28 && (VAR_34 == VAR_6 || VAR_34 == VAR_11))
      || (VAR_32 == VAR_29 && (VAR_34 == VAR_7 || VAR_34 == VAR_10)))
    VAR_41 = 1;




  if ((VAR_40 != VAR_8 || VAR_22)
      && (VAR_40 != (VAR_20 ? VAR_24 : VAR_5))
      && FUNC_2 (VAR_33[2]) == VAR_4
      && FUNC_2 (VAR_33[3]) == VAR_4)
    {
      rtx VAR_42 = VAR_33[0];
      HOST_WIDE_INT VAR_43 = FUNC_5 (VAR_33[2]);
      HOST_WIDE_INT VAR_44 = FUNC_5 (VAR_33[3]);
      HOST_WIDE_INT VAR_45;

      VAR_45 = VAR_43 - VAR_44;


      if (VAR_41
   || FUNC_28 (VAR_34, VAR_31,
          VAR_32, &VAR_37))
 {

   rtx VAR_46 = VAR_42;

          if (!VAR_41)
     {
       bool VAR_47 = 0;

       VAR_35 = FUNC_2 (VAR_37);

       if (FUNC_3 (FUNC_7 (VAR_37, 0)) == VAR_3
    || FUNC_3 (FUNC_7 (VAR_37, 0)) == VAR_2)
  {
    VAR_47 = 1;
    VAR_35 = FUNC_30 (VAR_35);
  }


       if (VAR_35 == VAR_12)
  {
    HOST_WIDE_INT VAR_48 = VAR_43;
    VAR_43 = VAR_44;
    VAR_44 = VAR_48;
    VAR_35 = FUNC_34 (VAR_35);
    VAR_34 = FUNC_34 (VAR_34);
  }
       else
  {
    if (VAR_47)
      FUNC_6 (VAR_37,
         FUNC_35
           (FUNC_2 (VAR_37)));
    else
      FUNC_6 (VAR_37, FUNC_34 (FUNC_2 (VAR_37)));
  }
       VAR_45 = VAR_43 - VAR_44;

       if (FUNC_32 (VAR_42, VAR_31)
    || FUNC_32 (VAR_42, VAR_32))
  VAR_46 = FUNC_20 (VAR_40);

       if (VAR_40 == VAR_5)
  FUNC_9 (FUNC_25 (VAR_46, VAR_37));
       else
  FUNC_9 (FUNC_26 (FUNC_19 (VAR_19, VAR_46), VAR_37));
     }
   else
     {
       if (VAR_34 == VAR_7 || VAR_34 == VAR_6)
  VAR_34 = FUNC_34 (VAR_34);
       else
  {
    HOST_WIDE_INT VAR_49 = VAR_43;
    VAR_43 = VAR_44;
    VAR_44 = VAR_49;
    VAR_45 = VAR_43 - VAR_44;
  }
       VAR_46 = FUNC_11 (VAR_46, VAR_34, VAR_31,
         VAR_32, VAR_26, 0, -1);
     }

   if (VAR_45 == 1)
     {







       if (VAR_43)
  VAR_46 = FUNC_14 (VAR_40, VAR_17,
        VAR_46, FUNC_1 (VAR_43),
        FUNC_8 (VAR_46), 1, VAR_15);
     }
   else if (VAR_44 == -1)
     {







       VAR_46 = FUNC_14 (VAR_40, VAR_9,
      VAR_46, FUNC_1 (VAR_43),
      FUNC_8 (VAR_46), 1, VAR_15);
     }
   else if (VAR_45 == -1 && VAR_43)
     {
       VAR_46 = FUNC_15 (VAR_40, VAR_14, VAR_46, FUNC_8 (VAR_46), 1);
       if (VAR_44)
  VAR_46 = FUNC_14 (VAR_40, VAR_17,
        FUNC_8 (VAR_46), FUNC_1 (VAR_44),
        FUNC_8 (VAR_46), 1, VAR_15);
     }
   else
     {
       if (VAR_44 == 0)
  {
    VAR_44 = VAR_43;
    VAR_43 = 0;
    VAR_46 = FUNC_15 (VAR_40, VAR_14, VAR_46, FUNC_8 (VAR_46), 1);
  }

       VAR_46 = FUNC_14 (VAR_40, VAR_0,
      FUNC_8 (VAR_46),
      FUNC_18 (VAR_44 - VAR_43, VAR_40),
      FUNC_8 (VAR_46), 1, VAR_15);
       if (VAR_43)
  VAR_46 = FUNC_14 (VAR_40, VAR_17,
        FUNC_8 (VAR_46), FUNC_1 (VAR_43),
        FUNC_8 (VAR_46), 1, VAR_15);
     }

   if (!FUNC_36 (VAR_46, VAR_42))
     FUNC_10 (FUNC_8 (VAR_42), FUNC_8 (VAR_46));

   return 1;
 }

      if (VAR_45 < 0)
 {
   HOST_WIDE_INT VAR_50;
   VAR_50 = VAR_43, VAR_43 = VAR_44, VAR_44 = VAR_50;
   VAR_45 = -VAR_45;
   if (FUNC_0 (FUNC_3 (VAR_31)))
     {




       VAR_35 = FUNC_35 (VAR_35);
       VAR_34 = FUNC_35 (VAR_34);
     }
   else
     {
       VAR_35 = FUNC_34 (VAR_35);
       VAR_34 = FUNC_34 (VAR_34);
     }
 }

      VAR_35 = VAR_25;
      if (FUNC_4 (FUNC_3 (VAR_31)) == VAR_13
   && FUNC_2 (VAR_32) == VAR_4)
 {
   if (VAR_32 == VAR_28
       && (VAR_34 == VAR_11 || VAR_34 == VAR_6))
     VAR_35 = VAR_34;
   else if (VAR_32 == VAR_29)
     {
       if (VAR_34 == VAR_10)
  VAR_35 = VAR_11;
       else if (VAR_34 == VAR_7)
  VAR_35 = VAR_6;
     }
 }


      if (VAR_35 != VAR_25
   && FUNC_3 (VAR_31) == FUNC_3 (VAR_42)
   && (VAR_44 == -1 || VAR_43 == -1))
 {



   if (! (VAR_45 == 1 || VAR_45 == 2 || VAR_45 == 4 || VAR_45 == 8
   || VAR_45 == 3 || VAR_45 == 5 || VAR_45 == 9)
       || (VAR_35 == VAR_11 && VAR_43 == -1)
       || (VAR_35 == VAR_6 && VAR_44 == -1))
     {





       if (VAR_43 != -1)
  {
    VAR_44 = VAR_43;
    VAR_43 = -1;
    VAR_34 = FUNC_34 (VAR_34);
  }

       VAR_42 = FUNC_11 (VAR_42, VAR_34, VAR_31,
         VAR_32, VAR_26, 0, -1);

       VAR_42 = FUNC_14 (VAR_40, VAR_9,
      VAR_42, FUNC_1 (VAR_44),
      VAR_42, 1, VAR_15);
       if (VAR_42 != VAR_33[0])
  FUNC_10 (VAR_33[0], VAR_42);

       return 1;
     }
 }


      if ((VAR_45 == 1 || VAR_45 == 2 || VAR_45 == 4 || VAR_45 == 8
    || VAR_45 == 3 || VAR_45 == 5 || VAR_45 == 9)
   && ((VAR_40 != VAR_18 && VAR_40 != VAR_8) || !VAR_23)
   && (VAR_40 != VAR_5
       || FUNC_38 (FUNC_1 (VAR_44), VAR_26)))
 {
   rtx VAR_51;
   int VAR_52;

   VAR_42 = FUNC_11 (VAR_42, VAR_34, VAR_31,
     VAR_32, VAR_26, 0, 1);

   VAR_52 = 0;


   if (VAR_45 == 1)
     VAR_51 = FUNC_8 (VAR_42);
   else
     {
       rtx VAR_53;
       VAR_53 = FUNC_8 (VAR_42);
       VAR_51 = FUNC_22 (VAR_40, VAR_53, FUNC_1 (VAR_45 & ~1));
       VAR_52++;
       if (VAR_45 & 1)
  {
    VAR_51 = FUNC_23 (VAR_40, VAR_51, VAR_53);
    VAR_52++;
  }
     }
   if (VAR_44 != 0)
     {
       VAR_51 = FUNC_23 (VAR_40, VAR_51, FUNC_1 (VAR_44));
       VAR_52++;
     }
   if (!FUNC_36 (VAR_51, VAR_42))
     {
       if (VAR_52 == 1)
  VAR_42 = FUNC_16 (VAR_51, FUNC_8 (VAR_42));
       else
  FUNC_9 (FUNC_24 (VAR_26, FUNC_8 (VAR_42), FUNC_8 (VAR_51)));
     }
   if (!FUNC_36 (VAR_42, VAR_33[0]))
     FUNC_10 (VAR_33[0], FUNC_8 (VAR_42));

   return 1;
 }
      if ((!VAR_21 || (VAR_40 == VAR_18 && VAR_23))
   && VAR_1 >= 2)
 {
   if (VAR_44 == 0)
     {
       VAR_44 = VAR_43;
       VAR_43 = 0;
       if (FUNC_0 (FUNC_3 (VAR_31)))




  VAR_34 = FUNC_35 (VAR_34);
       else
  {
    VAR_34 = FUNC_34 (VAR_34);
    if (VAR_35 != VAR_25)
      VAR_35 = FUNC_34 (VAR_35);
  }
     }

   if (VAR_35 != VAR_25)
     {
       if (VAR_35 == VAR_6 || !VAR_44)
  {
    VAR_34 = FUNC_34 (VAR_34);
    VAR_35 = VAR_11;
  }
       else
  {
    HOST_WIDE_INT VAR_54 = VAR_44;
    VAR_44 = VAR_43;
    VAR_43 = VAR_54;
  }

       VAR_42 = FUNC_11 (VAR_42, VAR_34, VAR_31,
         VAR_32, VAR_26, 0, -1);
     }
   else
     {
       VAR_42 = FUNC_11 (VAR_42, VAR_34, VAR_31,
         VAR_32, VAR_26, 0, 1);

       VAR_42 = FUNC_14 (VAR_40, VAR_17, FUNC_8 (VAR_42), VAR_29,
      FUNC_8 (VAR_42), 1, VAR_15);
     }

   VAR_42 = FUNC_14 (VAR_40, VAR_0, FUNC_8 (VAR_42),
         FUNC_18 (VAR_44 - VAR_43, VAR_40),
         FUNC_8 (VAR_42), 1, VAR_15);
   if (VAR_43)
     VAR_42 = FUNC_14 (VAR_40, VAR_17, FUNC_8 (VAR_42), FUNC_1 (VAR_43),
           FUNC_8 (VAR_42), 1, VAR_15);
   if (!FUNC_36 (VAR_42, VAR_33[0]))
     FUNC_10 (VAR_33[0], FUNC_8 (VAR_42));

   return 1;
 }
    }

  if (!VAR_21 || (VAR_40 == VAR_18 && VAR_23))
    {


      optab VAR_55;
      rtx VAR_56, VAR_57, VAR_58, VAR_59;

      if (VAR_1 <= 2)
 return 0;




      if (FUNC_2 (VAR_33[2]) == VAR_4)
 {
   VAR_56 = VAR_33[3];
   if (FUNC_5 (VAR_33[2]) == 0 && VAR_33[3] != VAR_29)
     VAR_33[3] = VAR_29, VAR_55 = VAR_27;
   else if (FUNC_5 (VAR_33[2]) == -1 && VAR_33[3] != VAR_28)
     VAR_33[3] = VAR_28, VAR_55 = VAR_30;
   else
     return 0;
 }
      else if (FUNC_2 (VAR_33[3]) == VAR_4)
 {
   VAR_56 = VAR_33[2];
   if (FUNC_5 (VAR_33[3]) == 0 && VAR_33[2] != VAR_29)
     VAR_33[2] = VAR_29, VAR_55 = VAR_27;
   else if (FUNC_5 (VAR_33[3]) == -1 && VAR_33[3] != VAR_28)
     VAR_33[2] = VAR_28, VAR_55 = VAR_30;
   else
     return 0;
 }
      else
        return 0;

      VAR_57 = VAR_33[0];
      VAR_59 = FUNC_20 (VAR_40);
      VAR_33[0] = VAR_59;


      if (FUNC_39 (VAR_33) == 0)
        return 0;


      VAR_58 = FUNC_13 (VAR_40, VAR_55, VAR_56, VAR_59, VAR_57, 0,
     VAR_16);
      if (!FUNC_36 (VAR_58, VAR_57))
 FUNC_10 (FUNC_8 (VAR_57), FUNC_8 (VAR_58));

      return 1;
    }
  if (! FUNC_31 (VAR_33[2], VAR_40))
    VAR_33[2] = FUNC_17 (VAR_40, VAR_33[2]);
  if (! FUNC_31 (VAR_33[3], VAR_40))
    VAR_33[3] = FUNC_17 (VAR_40, VAR_33[3]);

  if (VAR_39 && FUNC_32 (VAR_33[0], VAR_33[3]))
    {
      rtx VAR_60 = FUNC_20 (VAR_40);
      FUNC_10 (VAR_60, VAR_33[3]);
      VAR_33[3] = VAR_60;
    }
  if (VAR_38 && FUNC_32 (VAR_33[0], VAR_33[2]))
    {
      rtx VAR_61 = FUNC_20 (VAR_40);
      FUNC_10 (VAR_61, VAR_33[2]);
      VAR_33[2] = VAR_61;
    }

  if (! FUNC_33 (VAR_33[2], VAR_26)
      && (VAR_40 == VAR_18
          || ! FUNC_33 (VAR_33[3], VAR_26)))
    VAR_33[2] = FUNC_17 (VAR_40, VAR_33[2]);

  if (VAR_40 == VAR_18
      && ! FUNC_33 (VAR_33[3], VAR_26))
    VAR_33[3] = FUNC_17 (VAR_40, VAR_33[3]);

  FUNC_9 (VAR_36);
  FUNC_9 (FUNC_24 (VAR_26, VAR_33[0],
     FUNC_21 (VAR_40,
      VAR_37, VAR_33[2],
      VAR_33[3])));
  if (VAR_39)
    FUNC_9 (FUNC_24 (VAR_26, FUNC_8 (VAR_33[0]),
       FUNC_21 (VAR_40,
      VAR_39,
      FUNC_8 (VAR_33[3]),
      FUNC_8 (VAR_33[0]))));
  if (VAR_38)
    FUNC_9 (FUNC_24 (VAR_26, FUNC_8 (VAR_33[0]),
       FUNC_21 (VAR_40,
      VAR_38,
      FUNC_8 (VAR_33[2]),
      FUNC_8 (VAR_33[0]))));

  return 1;
}
