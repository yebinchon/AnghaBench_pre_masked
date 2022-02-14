
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* type_for_size ) (int,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; int (* can_use_bit_fields_p ) () ;} ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int*,int*,int*,int*,int*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (int,int,int ,int ,int) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 TYPE_2__ VAR_16 ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__,int,int,int) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__,int ) ;
 int FUNC_25 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 () ;
 scalar_t__ FUNC_29 (int,int) ;
 scalar_t__ FUNC_30 (int,int) ;
 int FUNC_31 (int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_32 (scalar_t__,int,int,scalar_t__) ;
 int FUNC_33 (int ,char*,...) ;
 int VAR_18 ;

__attribute__((used)) static tree
FUNC_34 (enum tree_code VAR_19, tree VAR_20, tree VAR_21, tree VAR_22)
{
  enum tree_code VAR_23;
  enum tree_code VAR_24, VAR_25;
  tree VAR_26, VAR_27, VAR_28, VAR_29;
  tree VAR_30, VAR_31, VAR_32, VAR_33;
  HOST_WIDE_INT VAR_34, VAR_35, VAR_36, VAR_37;
  HOST_WIDE_INT VAR_38, VAR_39, VAR_40, VAR_41;
  HOST_WIDE_INT VAR_42, VAR_43, VAR_44, VAR_45;
  HOST_WIDE_INT VAR_46, VAR_47, VAR_48, VAR_49;
  int VAR_50, VAR_51, VAR_52, VAR_53;
  enum machine_mode VAR_54, VAR_55, VAR_56, VAR_57;
  enum machine_mode VAR_58, VAR_59;
  tree VAR_60, VAR_61, VAR_62, VAR_63;
  tree VAR_64, VAR_65, VAR_66, VAR_67;
  tree VAR_68, VAR_69;
  tree VAR_70, VAR_71, VAR_72;
  int VAR_73, VAR_74;
  int VAR_75;
  tree VAR_76 = VAR_21, VAR_77 = VAR_22;
  enum tree_code VAR_78 = VAR_19;





  if (FUNC_7 (VAR_21) || FUNC_7 (VAR_22))
    return 0;

  VAR_24 = FUNC_4 (VAR_21);
  VAR_25 = FUNC_4 (VAR_22);

  if (VAR_24 == VAR_0 && FUNC_20 (FUNC_6 (VAR_21, 1)))
    {
      VAR_21 = FUNC_11 (VAR_9, VAR_20, VAR_21,
      FUNC_12 (FUNC_8 (VAR_21), 0));
      VAR_24 = VAR_9;
    }

  if (VAR_25 == VAR_0 && FUNC_20 (FUNC_6 (VAR_22, 1)))
    {
      VAR_22 = FUNC_11 (VAR_9, VAR_20, VAR_22,
      FUNC_12 (FUNC_8 (VAR_22), 0));
      VAR_25 = VAR_9;
    }

  if (FUNC_5 (VAR_24) != VAR_17
      || FUNC_5 (VAR_25) != VAR_17)
    return 0;

  VAR_26 = FUNC_6 (VAR_21, 0);
  VAR_27 = FUNC_6 (VAR_21, 1);
  VAR_28 = FUNC_6 (VAR_22, 0);
  VAR_29 = FUNC_6 (VAR_22, 1);


  if (FUNC_26 (VAR_26)
      && FUNC_26 (VAR_27))
    {
      tree VAR_79;
      if (FUNC_24 (VAR_26, VAR_28, 0)
          && FUNC_24 (VAR_27, VAR_29, 0))
 {
          VAR_79 = FUNC_13 (VAR_19, VAR_24, VAR_25,
     VAR_20, VAR_26, VAR_27);
   if (VAR_79)
     return VAR_79;
 }
      else if (FUNC_24 (VAR_26, VAR_29, 0)
               && FUNC_24 (VAR_27, VAR_28, 0))
 {
          VAR_79 = FUNC_13 (VAR_19, VAR_24,
     FUNC_31 (VAR_25),
     VAR_20, VAR_26, VAR_27);
   if (VAR_79)
     return VAR_79;
 }
    }

  VAR_19 = ((VAR_19 == VAR_13 || VAR_19 == VAR_12)
   ? VAR_13 : VAR_14);







  if (VAR_3 >= 2
      && ! FUNC_0 (FUNC_8 (VAR_28))
      && FUNC_26 (VAR_28)
      && FUNC_26 (VAR_29))
    {

      if (VAR_19 == VAR_14
   && VAR_24 == VAR_9 && FUNC_22 (VAR_27)
   && VAR_25 == VAR_9 && FUNC_22 (VAR_29)
   && FUNC_8 (VAR_26) == FUNC_8 (VAR_28))
 return FUNC_11 (VAR_9, VAR_20,
         FUNC_11 (VAR_1, FUNC_8 (VAR_26),
          VAR_26, VAR_28),
         FUNC_12 (FUNC_8 (VAR_26), 0));


      if (VAR_19 == VAR_13
   && VAR_24 == VAR_5 && FUNC_22 (VAR_27)
   && VAR_25 == VAR_5 && FUNC_22 (VAR_29)
   && FUNC_8 (VAR_26) == FUNC_8 (VAR_28))
 return FUNC_11 (VAR_5, VAR_20,
         FUNC_11 (VAR_1, FUNC_8 (VAR_26),
          VAR_26, VAR_28),
         FUNC_12 (FUNC_8 (VAR_26), 0));

      if (VAR_7)
 {
   if (VAR_19 != VAR_78 || VAR_21 != VAR_76 || VAR_22 != VAR_77)
     return FUNC_11 (VAR_19, VAR_20, VAR_21, VAR_22);
   return VAR_10;
 }
    }




  if ((VAR_24 != VAR_5 && VAR_24 != VAR_9)
      || (VAR_25 != VAR_5 && VAR_25 != VAR_9))
    return 0;

  VAR_75 = 0;
  VAR_30 = FUNC_16 (VAR_26,
         &VAR_34, &VAR_35, &VAR_54,
         &VAR_50, &VAR_75, &VAR_60,
         &VAR_64);
  VAR_31 = FUNC_16 (VAR_27,
         &VAR_36, &VAR_37, &VAR_55,
         &VAR_51, &VAR_75, &VAR_61,
         &VAR_65);
  VAR_32 = FUNC_16 (VAR_28,
         &VAR_38, &VAR_39, &VAR_56,
         &VAR_52, &VAR_75, &VAR_62,
         &VAR_66);
  VAR_33 = FUNC_16 (VAR_29,
         &VAR_40, &VAR_41, &VAR_57,
         &VAR_53, &VAR_75, &VAR_63,
         &VAR_67);





  if (VAR_75 || VAR_30 == 0 || VAR_32 == 0
      || ! FUNC_24 (VAR_30, VAR_32, 0))
    return 0;

  if (FUNC_4 (VAR_27) == VAR_6
      && FUNC_4 (VAR_29) == VAR_6)
    VAR_68 = VAR_27, VAR_69 = VAR_29;
  else if (VAR_31 == 0 || VAR_33 == 0
    || ! FUNC_24 (VAR_31, VAR_33, 0))
    return 0;
  else
    VAR_68 = VAR_69 = 0;





  VAR_23 = (VAR_19 == VAR_13 ? VAR_5 : VAR_9);
  if (VAR_24 != VAR_23)
    {
      if (VAR_68 && FUNC_22 (VAR_68) && FUNC_21 (VAR_60))
 {



   VAR_50 = 1;
   VAR_68 = VAR_60;
 }
      else
 return 0;
    }


  if (VAR_25 != VAR_23)
    {
      if (VAR_69 && FUNC_22 (VAR_69) && FUNC_21 (VAR_62))
 {
   VAR_52 = 1;
   VAR_69 = VAR_62;
 }
      else
 return 0;
    }



  if (! VAR_16.can_use_bit_fields_p ())
    return 0;




  VAR_73 = FUNC_3 (VAR_35, VAR_39);
  VAR_74 = FUNC_2 (VAR_35 + VAR_34, VAR_39 + VAR_38);
  VAR_58 = FUNC_19 (VAR_74 - VAR_73, VAR_73,
     FUNC_9 (FUNC_8 (VAR_30)), VAR_18,
     VAR_75);
  if (VAR_58 == VAR_15)
    return 0;

  VAR_46 = FUNC_1 (VAR_58);
  VAR_47 = VAR_73 & ~ (VAR_46 - 1);
  VAR_70 = VAR_16.types.type_for_size (VAR_46, 1);
  VAR_42 = VAR_35 - VAR_47, VAR_44 = VAR_39 - VAR_47;

  if (VAR_4)
    {
      VAR_42 = VAR_46 - VAR_42 - VAR_34;
      VAR_44 = VAR_46 - VAR_44 - VAR_38;
    }

  VAR_60 = FUNC_14 (VAR_8, FUNC_18 (VAR_70, VAR_60),
    FUNC_27 (VAR_42), 0);
  VAR_62 = FUNC_14 (VAR_8, FUNC_18 (VAR_70, VAR_62),
    FUNC_27 (VAR_44), 0);

  if (VAR_68)
    {
      VAR_68 = FUNC_18 (VAR_70, VAR_68);
      VAR_68 = FUNC_32 (VAR_68, VAR_34, VAR_50, VAR_64);
      VAR_68 = FUNC_14 (VAR_8, VAR_68, FUNC_27 (VAR_42), 0);
      if (! FUNC_22 (FUNC_14 (VAR_0, VAR_68,
     FUNC_17 (VAR_2,
           VAR_70, VAR_60),
     0)))
 {
   FUNC_33 (0, "comparison is always %d", VAR_23 == VAR_9);

   return FUNC_15 (VAR_23 == VAR_9, VAR_20);
 }
    }
  if (VAR_69)
    {
      VAR_69 = FUNC_18 (VAR_70, VAR_69);
      VAR_69 = FUNC_32 (VAR_69, VAR_38, VAR_52, VAR_66);
      VAR_69 = FUNC_14 (VAR_8, VAR_69, FUNC_27 (VAR_44), 0);
      if (! FUNC_22 (FUNC_14 (VAR_0, VAR_69,
     FUNC_17 (VAR_2,
           VAR_70, VAR_62),
     0)))
 {
   FUNC_33 (0, "comparison is always %d", VAR_23 == VAR_9);

   return FUNC_15 (VAR_23 == VAR_9, VAR_20);
 }
    }




  if (VAR_68 == 0)
    {
      if (VAR_34 != VAR_36 || VAR_38 != VAR_40
   || VAR_50 != VAR_51 || VAR_52 != VAR_53


   || VAR_35 - VAR_39 != VAR_37 - VAR_41)
 return 0;

      VAR_73 = FUNC_3 (VAR_37, VAR_41);
      VAR_74 = FUNC_2 (VAR_37 + VAR_36, VAR_41 + VAR_40);
      VAR_59 = FUNC_19 (VAR_74 - VAR_73, VAR_73,
         FUNC_9 (FUNC_8 (VAR_31)), VAR_18,
         VAR_75);
      if (VAR_59 == VAR_15)
 return 0;

      VAR_48 = FUNC_1 (VAR_59);
      VAR_49 = VAR_73 & ~ (VAR_48 - 1);
      VAR_71 = VAR_16.types.type_for_size (VAR_48, 1);
      VAR_43 = VAR_37 - VAR_49, VAR_45 = VAR_41 - VAR_49;

      if (VAR_4)
 {
   VAR_43 = VAR_48 - VAR_43 - VAR_36;
   VAR_45 = VAR_48 - VAR_45 - VAR_40;
 }

      VAR_61 = FUNC_14 (VAR_8, FUNC_18 (VAR_71, VAR_61),
        FUNC_27 (VAR_43), 0);
      VAR_63 = FUNC_14 (VAR_8, FUNC_18 (VAR_71, VAR_63),
        FUNC_27 (VAR_45), 0);






      VAR_60 = FUNC_14 (VAR_1, VAR_60, VAR_62, 0);
      VAR_61 = FUNC_14 (VAR_1, VAR_61, VAR_63, 0);
      if (VAR_46 == VAR_48 && VAR_42 == VAR_43)
 {
   VAR_21 = FUNC_23 (VAR_30, VAR_70, VAR_46, VAR_47,
        VAR_50 || VAR_52);
   if (! FUNC_10 (VAR_60, VAR_46))
     VAR_21 = FUNC_11 (VAR_0, VAR_70, VAR_21, VAR_60);

   VAR_22 = FUNC_23 (VAR_31, VAR_71, VAR_48, VAR_49,
        VAR_51 || VAR_53);
   if (! FUNC_10 (VAR_61, VAR_48))
     VAR_22 = FUNC_11 (VAR_0, VAR_71, VAR_22, VAR_61);

   return FUNC_11 (VAR_23, VAR_20, VAR_21, VAR_22);
 }
      if ((VAR_34 + VAR_35 == VAR_39
    && VAR_36 + VAR_37 == VAR_41)
   || (VAR_35 == VAR_39 + VAR_38
       && VAR_37 == VAR_41 + VAR_40))
 {
   tree VAR_80;

   VAR_21 = FUNC_23 (VAR_30, VAR_70, VAR_34 + VAR_38,
        FUNC_3 (VAR_35, VAR_39), VAR_50);
   VAR_22 = FUNC_23 (VAR_31, VAR_71, VAR_36 + VAR_40,
        FUNC_3 (VAR_37, VAR_41), VAR_51);

   VAR_60 = FUNC_14 (VAR_11, VAR_60,
     FUNC_27 (FUNC_3 (VAR_42, VAR_44)), 0);
   VAR_61 = FUNC_14 (VAR_11, VAR_61,
     FUNC_27 (FUNC_3 (VAR_43, VAR_45)), 0);


   VAR_80 = VAR_70;
   if (VAR_70 != VAR_71)
     {
       if (VAR_46 > VAR_48)
  {
    VAR_21 = FUNC_18 (VAR_71, VAR_21);
    VAR_60 = FUNC_18 (VAR_71, VAR_60);
    VAR_80 = VAR_71;
  }
       else if (VAR_46 < VAR_48)
  {
    VAR_22 = FUNC_18 (VAR_70, VAR_22);
    VAR_61 = FUNC_18 (VAR_70, VAR_61);
    VAR_80 = VAR_70;
  }
     }

   if (! FUNC_10 (VAR_60, VAR_34 + VAR_38))
     VAR_21 = FUNC_11 (VAR_0, VAR_80, VAR_21, VAR_60);

   if (! FUNC_10 (VAR_61, VAR_36 + VAR_40))
     VAR_22 = FUNC_11 (VAR_0, VAR_80, VAR_22, VAR_61);

   return FUNC_11 (VAR_23, VAR_20, VAR_21, VAR_22);
 }

      return 0;
    }





  VAR_72 = FUNC_14 (VAR_0, VAR_60, VAR_62, 0);
  if (! FUNC_22 (VAR_72)
      && FUNC_25 (FUNC_14 (VAR_0, VAR_72, VAR_68, 0),
      FUNC_14 (VAR_0, VAR_72, VAR_69, 0)) != 1)
    {
      if (VAR_23 == VAR_9)
 {
   FUNC_33 (0, "%<or%> of unmatched not-equal tests is always 1");
   return FUNC_15 (1, VAR_20);
 }
      else
 {
   FUNC_33 (0, "%<and%> of mutually exclusive equal-tests is always 0");
   return FUNC_15 (0, VAR_20);
 }
    }





  VAR_72 = FUNC_23 (VAR_30, VAR_70, VAR_46, VAR_47,
          VAR_50 || VAR_52);

  VAR_60 = FUNC_14 (VAR_1, VAR_60, VAR_62, 0);
  if (! FUNC_10 (VAR_60, VAR_46))
    VAR_72 = FUNC_11 (VAR_0, VAR_70, VAR_72, VAR_60);

  return FUNC_11 (VAR_23, VAR_20, VAR_72,
   FUNC_14 (VAR_1, VAR_68, VAR_69, 0));
}
