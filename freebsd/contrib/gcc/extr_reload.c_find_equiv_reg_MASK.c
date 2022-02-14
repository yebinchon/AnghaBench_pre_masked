
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ reg_rtx; scalar_t__ in; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_8 ;



 scalar_t__ FUNC_16 (scalar_t__) ;



 unsigned int FUNC_17 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_21 (size_t) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_24 (int ,int) ;
 int VAR_16 ;
 scalar_t__ FUNC_25 (scalar_t__,int) ;
 scalar_t__ FUNC_26 (scalar_t__,int ,int) ;
 int FUNC_27 (scalar_t__,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__* VAR_18 ;
 scalar_t__ FUNC_28 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int** VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_29 (scalar_t__,int,int ,int ) ;
 scalar_t__ FUNC_30 (scalar_t__,size_t) ;
 scalar_t__ FUNC_31 (int,int,scalar_t__,scalar_t__*) ;
 int * VAR_23 ;
 scalar_t__* VAR_24 ;
 scalar_t__ FUNC_32 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_25 ;
 TYPE_1__* VAR_26 ;
 scalar_t__ FUNC_33 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_34 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_35 (scalar_t__) ;
 scalar_t__ VAR_27 ;
 int FUNC_36 (scalar_t__) ;
 scalar_t__ FUNC_37 (scalar_t__) ;

rtx
FUNC_38 (rtx VAR_28, rtx VAR_29, enum reg_class VAR_30, int VAR_31,
  short *VAR_32, int VAR_33, enum machine_mode VAR_34)
{
  rtx VAR_35 = VAR_29;
  rtx VAR_36, VAR_37, VAR_38, VAR_39;
  rtx VAR_40;
  int VAR_41 = -1;
  int VAR_42;
  int VAR_43 = 0;
  int VAR_44 = 0;
  int VAR_45 = 0;
  int VAR_46 = 0;
  int VAR_47;
  int VAR_48;
  int VAR_49 = 0;

  if (VAR_28 == 0)
    VAR_41 = VAR_33;
  else if (FUNC_20 (VAR_28))
    VAR_41 = FUNC_17 (VAR_28);
  else if (FUNC_11 (VAR_28))
    {
      enum rtx_code VAR_50 = FUNC_5 (FUNC_25 (VAR_28, 0));
      if (FUNC_12 (VAR_28))
 return 0;
      if (VAR_19 && FUNC_21 (FUNC_6 (VAR_28)))
 return 0;

      switch (VAR_50)
 {
 case 132:
 case 129:
 case 133:
 case 130:
 case 131:
 case 128:
   return 0;
 default:
   break;
 }
      VAR_43 = 1;
    }
  else if (FUNC_4 (VAR_28))
    VAR_44 = 1;
  else if (FUNC_5 (VAR_28) == VAR_8
    && FUNC_25 (VAR_28, 0) == VAR_27
    && FUNC_4 (FUNC_25 (VAR_28, 1)))
    VAR_44 = VAR_46 = 1;
  else if (FUNC_5 (VAR_28) == VAR_8
    && FUNC_25 (VAR_28, 0) == VAR_20
    && FUNC_4 (FUNC_25 (VAR_28, 1)))
    VAR_44 = 1;
  else
    return 0;

  VAR_49 = 0;




  while (1)
    {
      VAR_35 = FUNC_16 (VAR_35);
      VAR_49++;
      if (VAR_35 == 0 || FUNC_10 (VAR_35)
   || VAR_49 > FUNC_14 (VAR_7))
 return 0;

      if (FUNC_13 (VAR_35)

   && (! (VAR_32 != 0
   && VAR_32 != (short *) (HOST_WIDE_INT) 1)
       || FUNC_9 (VAR_35) < VAR_25))
 {
   rtx VAR_51;
   VAR_40 = FUNC_35 (VAR_35);


   if (VAR_40 != 0
       && ((VAR_41 >= 0
     && FUNC_36 (FUNC_23 (VAR_40)) == VAR_41
     && (VAR_42 = FUNC_36 (VAR_37 = FUNC_22 (VAR_40))) >= 0)
    ||
    (VAR_41 >= 0
     && FUNC_36 (FUNC_22 (VAR_40)) == VAR_41
     && (VAR_42 = FUNC_36 (VAR_37 = FUNC_23 (VAR_40))) >= 0)
    ||
    (VAR_44 && FUNC_33 (FUNC_23 (VAR_40), VAR_28)


     && !FUNC_32 (FUNC_22 (VAR_40), VAR_28)
     && (VAR_42 = FUNC_36 (VAR_37 = FUNC_22 (VAR_40))) >= 0)
    || (VAR_43
        && (VAR_42 = FUNC_36 (VAR_37 = FUNC_22 (VAR_40))) >= 0
        && FUNC_34 (VAR_28, FUNC_23 (VAR_40)))
    || (VAR_43
        && (VAR_42 = FUNC_36 (VAR_37 = FUNC_23 (VAR_40))) >= 0
        && FUNC_34 (VAR_28, FUNC_22 (VAR_40)))



    || (VAR_44 && FUNC_18 (VAR_35) != 0
        && (VAR_51 = FUNC_28 (VAR_35, VAR_9, VAR_5))
        && ((FUNC_33 (FUNC_25 (VAR_51, 0), VAR_28)
      && (VAR_42
          = FUNC_36 (VAR_37 = FUNC_22 (VAR_40))) >= 0)
     || (FUNC_20 (FUNC_22 (VAR_40))
         && FUNC_5 (FUNC_25 (VAR_51, 0)) == VAR_2
         && FUNC_21 (FUNC_6 (FUNC_25 (VAR_51, 0)))
         && FUNC_5 (VAR_28) == VAR_3
         && 0 != (VAR_36
           = FUNC_29 (FUNC_25 (VAR_51, 0), 0, 0,
         VAR_16))
         && FUNC_33 (VAR_28, VAR_36)
         && (VAR_37
      = FUNC_29 (FUNC_22 (VAR_40), 0, 0,
           VAR_16))
         && (VAR_42 = FUNC_36 (VAR_37)) >= 0)))
    || (VAR_44 && (VAR_51 = FUNC_28 (VAR_35, VAR_9,
         VAR_5))
        && FUNC_20 (FUNC_22 (VAR_40))
        && FUNC_5 (FUNC_25 (VAR_51, 0)) == VAR_2
        && FUNC_21 (FUNC_6 (FUNC_25 (VAR_51, 0)))
        && FUNC_5 (VAR_28) == VAR_3
        && 0 != (VAR_36 = FUNC_29 (FUNC_25 (VAR_51, 0), 1, 0,
         VAR_16))
        && FUNC_33 (VAR_28, VAR_36)
        && (VAR_37
     = FUNC_29 (FUNC_22 (VAR_40), 1, 0, VAR_16))
        && (VAR_42 = FUNC_36 (VAR_37)) >= 0)))
     {
       if (VAR_31 >= 0)
  {
    if (VAR_42 != VAR_31)
      continue;
  }
       else if ((unsigned) VAR_42 >= VAR_4)
  continue;
       else
  {
    int VAR_52;

    for (VAR_52 = VAR_21[VAR_42][VAR_34] - 1; VAR_52 >= 0; VAR_52--)
      if (! FUNC_24 (VAR_23[(int) VAR_30],
          VAR_42 + VAR_52))
        break;
    if (VAR_52 >= 0)
      continue;
  }
       VAR_38 = VAR_37;
       VAR_39 = VAR_35;
       break;
     }
 }
    }
  if (FUNC_18 (VAR_39) != 0 && FUNC_28 (VAR_39, VAR_11, VAR_38))
    return 0;



  if (VAR_42 == VAR_13 || VAR_41 == VAR_13
      || (VAR_43 && FUNC_32 (VAR_27,
         VAR_28)))
    VAR_46 = 1;


  if (FUNC_6 (VAR_38) != VAR_34)
    return 0;




  if (VAR_43 && VAR_38 == FUNC_22 (FUNC_35 (VAR_39))
      && FUNC_31 (VAR_42,
           (VAR_42
     + VAR_21[VAR_42][VAR_34]),
           VAR_28, (rtx*) 0))
    return 0;



  if (VAR_41 >= 0 && VAR_41 < VAR_4)
    VAR_47 = VAR_21[VAR_41][VAR_34];
  else
    VAR_47 = 1;
  VAR_48 = VAR_21[VAR_42][VAR_34];

  if (!VAR_43 && !VAR_44
      && VAR_41 + VAR_47 > VAR_42 && VAR_41 < VAR_42 + VAR_48)
    return 0;







  if (VAR_32 != 0 && VAR_32 != (short *) (HOST_WIDE_INT) 1)
    {
      int VAR_53;
      for (VAR_53 = 0; VAR_53 < VAR_48; ++VAR_53)
 if (VAR_32[VAR_42 + VAR_53] >= 0)
   return 0;
    }




  if (VAR_32 != 0)
    {
      int VAR_54;
      for (VAR_54 = 0; VAR_54 < VAR_22; VAR_54++)
 if (VAR_26[VAR_54].reg_rtx != 0 && VAR_26[VAR_54].in)
   {
     int VAR_55 = FUNC_17 (VAR_26[VAR_54].reg_rtx);
     int VAR_56 = VAR_21[VAR_55]
      [FUNC_6 (VAR_26[VAR_54].reg_rtx)];
     if (VAR_55 < VAR_42 + VAR_48
  && VAR_55 + VAR_56 > VAR_42)
       return 0;
   }
    }

  if (VAR_43)


    VAR_45 = !FUNC_3 (FUNC_25 (VAR_28, 0));




  VAR_35 = VAR_29;
  while (1)
    {
      VAR_35 = FUNC_16 (VAR_35);
      if (VAR_35 == VAR_39)
 return VAR_38;



      if (FUNC_1 (VAR_35))
 {
   int VAR_57;

   if (VAR_43 || VAR_46)
     return 0;

   if (VAR_41 >= 0 && VAR_41 < VAR_4)
     for (VAR_57 = 0; VAR_57 < VAR_47; ++VAR_57)
       if (VAR_18[VAR_41 + VAR_57]
    || FUNC_7 (VAR_41 + VAR_57, VAR_34))
  return 0;

   if (VAR_42 >= 0 && VAR_42 < VAR_4)
     for (VAR_57 = 0; VAR_57 < VAR_48; ++VAR_57)
       if (VAR_18[VAR_42 + VAR_57]
    || FUNC_7 (VAR_42 + VAR_57, VAR_34))
  return 0;
 }

      if (FUNC_8 (VAR_35))
 {
   VAR_40 = FUNC_15 (VAR_35);


   if (FUNC_37 (VAR_40))
     return 0;






   if (FUNC_5 (VAR_40) == VAR_1)
     VAR_40 = FUNC_2 (VAR_40);
   if (FUNC_5 (VAR_40) == VAR_12 || FUNC_5 (VAR_40) == VAR_0)
     {
       rtx VAR_58 = FUNC_22 (VAR_40);
       while (FUNC_5 (VAR_58) == VAR_15
       || FUNC_5 (VAR_58) == VAR_17
       || FUNC_5 (VAR_58) == VAR_14)
  VAR_58 = FUNC_25 (VAR_58, 0);
       if (FUNC_20 (VAR_58))
  {
    int VAR_59 = FUNC_17 (VAR_58);
    int VAR_60;
    if (FUNC_17 (VAR_58) < VAR_4)
      VAR_60 = VAR_21[VAR_59][FUNC_6 (VAR_58)];
    else
      VAR_60 = 1;
    if (VAR_59 < VAR_41 + VAR_47 && VAR_59 + VAR_60 > VAR_41)
      return 0;
    if (VAR_59 < VAR_42 + VAR_48
        && VAR_59 + VAR_60 > VAR_42)
      return 0;
    if (VAR_45
        && FUNC_32 (VAR_58, VAR_28))
      return 0;
    if (VAR_59 == VAR_13 && VAR_46)
      return 0;
  }
       else if (VAR_43 && FUNC_11 (VAR_58)
         && ! FUNC_30 (VAR_58, FUNC_6 (VAR_58)))
  return 0;
       else if (FUNC_11 (VAR_58) && VAR_41 >= VAR_4
         && VAR_24[VAR_41] != 0)
  return 0;
       else if (VAR_46 && FUNC_30 (VAR_58, FUNC_6 (VAR_58)))
  return 0;
     }
   else if (FUNC_5 (VAR_40) == VAR_6)
     {
       int VAR_61;
       for (VAR_61 = FUNC_27 (VAR_40, 0) - 1; VAR_61 >= 0; VAR_61--)
  {
    rtx VAR_62 = FUNC_26 (VAR_40, 0, VAR_61);
    if (FUNC_5 (VAR_62) == VAR_1)
      VAR_62 = FUNC_2 (VAR_62);
    if (FUNC_5 (VAR_62) == VAR_12 || FUNC_5 (VAR_62) == VAR_0)
      {
        rtx VAR_63 = FUNC_22 (VAR_62);
        while (FUNC_5 (VAR_63) == VAR_15
        || FUNC_5 (VAR_63) == VAR_17
        || FUNC_5 (VAR_63) == VAR_14)
   VAR_63 = FUNC_25 (VAR_63, 0);
        if (FUNC_20 (VAR_63))
   {
     int VAR_64 = FUNC_17 (VAR_63);
     int VAR_65;
     if (FUNC_17 (VAR_63) < VAR_4)
       VAR_65 = VAR_21[VAR_64][FUNC_6 (VAR_63)];
     else
       VAR_65 = 1;
     if (VAR_64 < VAR_41 + VAR_47
         && VAR_64 + VAR_65 > VAR_41)
       return 0;
     if (VAR_64 < VAR_42 + VAR_48
         && VAR_64 + VAR_65 > VAR_42)
       return 0;
     if (VAR_45
         && FUNC_32 (VAR_63,
             VAR_28))
       return 0;
     if (VAR_64 == VAR_13 && VAR_46)
       return 0;
   }
        else if (VAR_43 && FUNC_11 (VAR_63)
          && ! FUNC_30 (VAR_63, FUNC_6 (VAR_63)))
   return 0;
        else if (FUNC_11 (VAR_63) && VAR_41 >= VAR_4
          && VAR_24[VAR_41] != 0)
   return 0;
        else if (VAR_46
          && FUNC_30 (VAR_63, FUNC_6 (VAR_63)))
   return 0;
      }
  }
     }

   if (FUNC_1 (VAR_35) && FUNC_0 (VAR_35))
     {
       rtx VAR_66;

       for (VAR_66 = FUNC_0 (VAR_35); FUNC_25 (VAR_66, 1) != 0;
     VAR_66 = FUNC_25 (VAR_66, 1))
  {
    VAR_40 = FUNC_25 (VAR_66, 0);
    if (FUNC_5 (VAR_40) == VAR_0)
      {
        rtx VAR_67 = FUNC_22 (VAR_40);

        if (FUNC_20 (VAR_67))
   {
     int VAR_68 = FUNC_17 (VAR_67);
     int VAR_69
       = VAR_21[VAR_68][FUNC_6 (VAR_67)];

     if (VAR_68 < VAR_41 + VAR_47
         && VAR_68 + VAR_69 > VAR_41)
       return 0;
     else if (VAR_68 < VAR_42 + VAR_48
       && VAR_68 + VAR_69 > VAR_42)
       return 0;
     else if (VAR_45
       && FUNC_32 (VAR_67,
             VAR_28))
       return 0;
   }

        else if (VAR_43 && FUNC_11 (VAR_67)
          && ! FUNC_30 (VAR_67, FUNC_6 (VAR_67)))
   return 0;
        else if (VAR_46
          && FUNC_30 (VAR_67, FUNC_6 (VAR_67)))
   return 0;
      }
  }
     }
 }
    }
}
