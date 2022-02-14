
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {char* (* invalid_binary_op ) (int,scalar_t__,scalar_t__) ;} ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;



 int VAR_6 ;


 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;







 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_19 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,int) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 int FUNC_25 (char const*,char*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_26 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_28 () ;
 scalar_t__ FUNC_29 (scalar_t__,int*) ;
 scalar_t__ FUNC_30 (scalar_t__,int ) ;
 scalar_t__ FUNC_31 (scalar_t__,scalar_t__) ;
 int FUNC_32 (scalar_t__) ;
 scalar_t__ VAR_22 ;
 int FUNC_33 (scalar_t__) ;
 int FUNC_34 (scalar_t__) ;
 int FUNC_35 (scalar_t__,scalar_t__,int,scalar_t__,char*) ;
 int VAR_23 ;
 int FUNC_36 (char*) ;
 scalar_t__ FUNC_37 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_38 (int const,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_39 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_40 (scalar_t__*,scalar_t__*,scalar_t__*,int*) ;
 scalar_t__ VAR_26 ;
 char* FUNC_41 (int,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_27 ;
 scalar_t__ FUNC_42 (scalar_t__,int*) ;
 int FUNC_43 (int ,int ) ;
 int FUNC_44 (scalar_t__) ;
 int FUNC_45 (scalar_t__,int ) ;
 scalar_t__ VAR_28 ;
 int FUNC_46 (int ,char*,...) ;

tree
FUNC_47 (enum tree_code VAR_29, tree VAR_30, tree VAR_31,
   int VAR_32)
{
  tree VAR_33, VAR_34;
  enum tree_code VAR_35, VAR_36;
  tree VAR_37, VAR_38;
  const char *VAR_39;




  enum tree_code VAR_40 = VAR_29;



  tree VAR_41 = ((void*)0);




  int VAR_42 = 0;



  tree VAR_43 = 0;



  tree VAR_44 = 0;







  int VAR_45 = 0;




  int VAR_46 = 0;



  int VAR_47 = 0;


  int VAR_48 = 0;


  bool VAR_49;

  if (VAR_32)
    {
      VAR_37 = FUNC_24 (VAR_30);
      VAR_38 = FUNC_24 (VAR_31);
    }
  else
    {
      VAR_37 = VAR_30;
      VAR_38 = VAR_31;
    }

  VAR_33 = FUNC_6 (VAR_37);
  VAR_34 = FUNC_6 (VAR_38);



  VAR_35 = FUNC_4 (VAR_33);
  VAR_36 = FUNC_4 (VAR_34);


  FUNC_3 (VAR_37);
  FUNC_3 (VAR_38);




  if (VAR_35 == VAR_5 || VAR_36 == VAR_5)
    return VAR_20;

  if ((VAR_39
       = VAR_27.invalid_binary_op (VAR_29, VAR_33, VAR_34)))
    {
      FUNC_25 (VAR_39, "");
      return VAR_20;
    }

  VAR_49 = FUNC_35 (VAR_33, VAR_34, -3, VAR_11, "comparison");

  switch (VAR_29)
    {
    case 137:

      if (VAR_35 == VAR_16 && VAR_36 == VAR_9)
 return FUNC_38 (137, VAR_37, VAR_38);
      else if (VAR_36 == VAR_16 && VAR_35 == VAR_9)
 return FUNC_38 (137, VAR_38, VAR_37);
      else
 VAR_48 = 1;
      break;

    case 140:


      if (VAR_35 == VAR_16 && VAR_36 == VAR_16
   && FUNC_20 (VAR_33, VAR_34))
 return FUNC_37 (VAR_37, VAR_38);

      else if (VAR_35 == VAR_16 && VAR_36 == VAR_9)
 return FUNC_38 (140, VAR_37, VAR_38);
      else
 VAR_48 = 1;
      break;

    case 139:
      VAR_48 = 1;
      break;

    case 134:
    case 150:
    case 147:
    case 136:
    case 148:


      if (VAR_26 == 0 && FUNC_33 (VAR_38))
 FUNC_46 (VAR_13, "division by zero");

      if ((VAR_35 == VAR_9 || VAR_35 == VAR_18
    || VAR_35 == VAR_3 || VAR_35 == VAR_19)
   && (VAR_36 == VAR_9 || VAR_36 == VAR_18
       || VAR_36 == VAR_3 || VAR_36 == VAR_19))
 {
   enum tree_code VAR_50 = VAR_35, VAR_51 = VAR_36;

   if (VAR_35 == VAR_3 || VAR_35 == VAR_19)
     VAR_50 = FUNC_4 (FUNC_6 (FUNC_6 (VAR_37)));
   if (VAR_36 == VAR_3 || VAR_36 == VAR_19)
     VAR_51 = FUNC_4 (FUNC_6 (FUNC_6 (VAR_38)));

   if (!(VAR_50 == VAR_9 && VAR_51 == VAR_9))
     VAR_40 = VAR_17;
   else





     VAR_45 = (FUNC_11 (FUNC_6 (VAR_30))
         || (FUNC_4 (VAR_38) == VAR_8
      && !FUNC_32 (VAR_38)));
   VAR_48 = 1;
 }
      break;

    case 153:
    case 152:
    case 151:
      if (VAR_35 == VAR_9 && VAR_36 == VAR_9)
 VAR_45 = -1;
      else if (VAR_35 == VAR_19 && VAR_36 == VAR_19)
 VAR_48 = 1;
      break;

    case 133:
    case 146:
      if (VAR_26 == 0 && FUNC_33 (VAR_38))
 FUNC_46 (VAR_13, "division by zero");

      if (VAR_35 == VAR_9 && VAR_36 == VAR_9)
 {




   VAR_45 = (FUNC_11 (FUNC_6 (VAR_30))
       || (FUNC_4 (VAR_38) == VAR_8
    && !FUNC_32 (VAR_38)));
   VAR_48 = 1;
 }
      break;

    case 132:
    case 130:
    case 131:
    case 129:
    case 128:
      if ((VAR_35 == VAR_9 || VAR_35 == VAR_16

    || VAR_35 == VAR_2
    || VAR_35 == VAR_18 || VAR_35 == VAR_3)
   && (VAR_36 == VAR_9 || VAR_36 == VAR_16

       || VAR_36 == VAR_2
       || VAR_36 == VAR_18 || VAR_36 == VAR_3))
 {



   VAR_41 = VAR_22;
   VAR_37 = FUNC_16 (VAR_37);
   VAR_38 = FUNC_16 (VAR_38);
   VAR_42 = 1;
 }
      break;





    case 135:
      if (VAR_35 == VAR_9 && VAR_36 == VAR_9)
 {
   if (FUNC_4 (VAR_38) == VAR_8 && VAR_26 == 0)
     {
       if (FUNC_44 (VAR_38) < 0)
  FUNC_46 (0, "right shift count is negative");
       else
  {
    if (!FUNC_33 (VAR_38))
      VAR_47 = 1;

    if (FUNC_21 (VAR_38, FUNC_9 (VAR_33)) >= 0)
      FUNC_46 (0, "right shift count >= width of type");
  }
     }


   VAR_41 = VAR_33;


   if (FUNC_7 (FUNC_6 (VAR_38)) != VAR_22)
     VAR_38 = FUNC_22 (VAR_22, VAR_38);

   VAR_42 = 1;
 }
      break;

    case 142:
      if (VAR_35 == VAR_9 && VAR_36 == VAR_9)
 {
   if (FUNC_4 (VAR_38) == VAR_8 && VAR_26 == 0)
     {
       if (FUNC_44 (VAR_38) < 0)
  FUNC_46 (0, "left shift count is negative");

       else if (FUNC_21 (VAR_38, FUNC_9 (VAR_33)) >= 0)
  FUNC_46 (0, "left shift count >= width of type");
     }


   VAR_41 = VAR_33;


   if (FUNC_7 (FUNC_6 (VAR_38)) != VAR_22)
     VAR_38 = FUNC_22 (VAR_22, VAR_38);

   VAR_42 = 1;
 }
      break;

    case 149:
    case 138:
      if (VAR_35 == VAR_18 || VAR_36 == VAR_18)
 FUNC_46 (VAR_14,
   "comparing floating point with == or != is unsafe");


      VAR_43 = VAR_22;
      if ((VAR_35 == VAR_9 || VAR_35 == VAR_18
    || VAR_35 == VAR_3)
   && (VAR_36 == VAR_9 || VAR_36 == VAR_18
       || VAR_36 == VAR_3))
 VAR_46 = 1;

      else if ((VAR_35 == VAR_16 || VAR_35 == VAR_2)
        && (VAR_36 == VAR_16 || VAR_36 == VAR_2))

 {
   tree VAR_52 = FUNC_6 (VAR_33);
   tree VAR_53 = FUNC_6 (VAR_34);



   if (FUNC_20 (VAR_33, VAR_34))
     VAR_41 = FUNC_18 (VAR_33, VAR_34);

   else if (VAR_36 == VAR_2 && FUNC_12 (VAR_52))
     ;
   else if (VAR_35 == VAR_2 && FUNC_12 (VAR_53))
     ;

   else if (FUNC_12 (VAR_52))
     {


       if (VAR_23 && !FUNC_34 (VAR_30)
    && FUNC_4 (VAR_53) == VAR_6)
  FUNC_36 ("ISO C forbids comparison of %<void *%>"
    " with function pointer");
     }
   else if (FUNC_12 (VAR_53))
     {
       if (VAR_23 && !FUNC_34 (VAR_31)
    && FUNC_4 (VAR_52) == VAR_6)
  FUNC_36 ("ISO C forbids comparison of %<void *%>"
    " with function pointer");
     }
   else

     if (!VAR_49)

       {
  if (VAR_35 == VAR_2 || VAR_36 == VAR_2)
    FUNC_36 ("comparison of distinct block types lacks a cast");
  else
    FUNC_36 ("comparison of distinct pointer types lacks a cast");
       }


   if (VAR_41 == VAR_11)
     VAR_41 = VAR_24;
 }
      else if (VAR_35 == VAR_16 && FUNC_34 (VAR_31))
 {
   if (FUNC_4 (VAR_37) == VAR_0
       && FUNC_1 (FUNC_5 (VAR_37, 0))
       && (FUNC_4 (FUNC_5 (VAR_37, 0)) == VAR_15
    || FUNC_4 (FUNC_5 (VAR_37, 0)) == VAR_10
    || !FUNC_2 (FUNC_5 (VAR_37, 0))))
     FUNC_46 (VAR_12, "the address of %qD will never be NULL",
       FUNC_5 (VAR_37, 0));
   VAR_41 = VAR_33;
 }
      else if (VAR_36 == VAR_16 && FUNC_34 (VAR_30))
 {
   if (FUNC_4 (VAR_38) == VAR_0
       && FUNC_1 (FUNC_5 (VAR_38, 0))
       && (FUNC_4 (FUNC_5 (VAR_38, 0)) == VAR_15
    || FUNC_4 (FUNC_5 (VAR_38, 0)) == VAR_10
    || !FUNC_2 (FUNC_5 (VAR_38, 0))))
     FUNC_46 (VAR_12, "the address of %qD will never be NULL",
       FUNC_5 (VAR_38, 0));
   VAR_41 = VAR_34;
 }
      else if (VAR_35 == VAR_16 && VAR_36 == VAR_9)
 {
   VAR_41 = VAR_33;
   FUNC_36 ("comparison between pointer and integer");
 }
      else if (VAR_35 == VAR_9 && VAR_36 == VAR_16)
 {
   VAR_41 = VAR_34;
   FUNC_36 ("comparison between pointer and integer");
 }

      else if (VAR_35 == VAR_2 && FUNC_34 (VAR_31))
  VAR_41 = VAR_33;
      else if (VAR_36 == VAR_2 && FUNC_34 (VAR_30))
  VAR_41 = VAR_34;

      break;

    case 143:
    case 145:
    case 141:
    case 144:
      VAR_43 = VAR_22;
      if ((VAR_35 == VAR_9 || VAR_35 == VAR_18)
   && (VAR_36 == VAR_9 || VAR_36 == VAR_18))
 VAR_46 = 1;
      else if (VAR_35 == VAR_16 && VAR_36 == VAR_16)
 {
   if (FUNC_20 (VAR_33, VAR_34))
     {
       VAR_41 = FUNC_18 (VAR_33, VAR_34);
       if (!FUNC_0 (FUNC_6 (VAR_33))
    != !FUNC_0 (FUNC_6 (VAR_34)))
  FUNC_36 ("comparison of complete and incomplete pointers");
       else if (VAR_23
         && FUNC_4 (FUNC_6 (VAR_33)) == VAR_6)
  FUNC_36 ("ISO C forbids ordered comparisons of pointers to functions");
     }
   else
     {
       VAR_41 = VAR_24;
       FUNC_36 ("comparison of distinct pointer types lacks a cast");
     }
 }
      else if (VAR_35 == VAR_16 && FUNC_34 (VAR_31))
 {
   VAR_41 = VAR_33;
   if (VAR_23 || VAR_21)
     FUNC_36 ("ordered comparison of pointer with integer zero");
 }
      else if (VAR_36 == VAR_16 && FUNC_34 (VAR_30))
 {
   VAR_41 = VAR_34;
   if (VAR_23)
     FUNC_36 ("ordered comparison of pointer with integer zero");
 }
      else if (VAR_35 == VAR_16 && VAR_36 == VAR_9)
 {
   VAR_41 = VAR_33;
   FUNC_36 ("comparison between pointer and integer");
 }
      else if (VAR_35 == VAR_9 && VAR_36 == VAR_16)
 {
   VAR_41 = VAR_34;
   FUNC_36 ("comparison between pointer and integer");
 }
      break;

    default:
      FUNC_28 ();
    }

  if (VAR_35 == VAR_5 || VAR_36 == VAR_5)
    return VAR_20;

  if (VAR_35 == VAR_19 && VAR_36 == VAR_19
      && (!FUNC_43 (FUNC_10 (VAR_33), FUNC_10 (VAR_34))
   || !FUNC_39 (FUNC_6 (VAR_33),
          FUNC_6 (VAR_34))))
    {
      FUNC_13 (VAR_29, VAR_33, VAR_34);
      return VAR_20;
    }

  if ((VAR_35 == VAR_9 || VAR_35 == VAR_18 || VAR_35 == VAR_3
       || VAR_35 == VAR_19)
      &&
      (VAR_36 == VAR_9 || VAR_36 == VAR_18 || VAR_36 == VAR_3
       || VAR_36 == VAR_19))
    {
      int VAR_54 = (VAR_35 != VAR_3 && VAR_36 != VAR_3);

      if (VAR_45 || VAR_48 || VAR_46)
 VAR_41 = FUNC_17 (VAR_33, VAR_34);
      if (VAR_45 && VAR_54)
 {
   int VAR_55, VAR_56;
   tree VAR_57, VAR_58;
   int VAR_59;
   tree VAR_60;
   VAR_37 = FUNC_22 (VAR_41, VAR_37);
   VAR_38 = FUNC_22 (VAR_41, VAR_38);

   VAR_57 = FUNC_29 (VAR_37, &VAR_55);
   VAR_58 = FUNC_29 (VAR_38, &VAR_56);


   VAR_59 = FUNC_11 (VAR_41);

   VAR_44 = VAR_41;




   if ((FUNC_9 (FUNC_6 (VAR_37))
        == FUNC_9 (FUNC_6 (VAR_57)))
       && FUNC_6 (VAR_37) != VAR_44)
     VAR_55 = FUNC_11 (FUNC_6 (VAR_37));
   if ((FUNC_9 (FUNC_6 (VAR_38))
        == FUNC_9 (FUNC_6 (VAR_58)))
       && FUNC_6 (VAR_38) != VAR_44)
     VAR_56 = FUNC_11 (FUNC_6 (VAR_38));





   if (VAR_45 == -1)
     VAR_59 = VAR_55;
   if ((FUNC_9 (FUNC_6 (VAR_57))
        < FUNC_9 (VAR_41))
       && (FUNC_9 (FUNC_6 (VAR_58))
    == FUNC_9 (FUNC_6 (VAR_57)))
       && VAR_55 == VAR_56
       && (VAR_55 || !VAR_59))
     VAR_41
       = FUNC_14
       (VAR_55, FUNC_19 (FUNC_6 (VAR_57), FUNC_6 (VAR_58)));
   else if (FUNC_4 (VAR_57) == VAR_8
     && (VAR_56 || !VAR_59)
     && (FUNC_9 (FUNC_6 (VAR_58))
         < FUNC_9 (VAR_41))
     && (VAR_60
         = FUNC_14 (VAR_56,
          FUNC_6 (VAR_58)),
         FUNC_31 (VAR_57, VAR_60)))
     VAR_41 = VAR_60;
   else if (FUNC_4 (VAR_58) == VAR_8
     && (VAR_55 || !VAR_59)
     && (FUNC_9 (FUNC_6 (VAR_57))
         < FUNC_9 (VAR_41))
     && (VAR_60
         = FUNC_14 (VAR_55,
          FUNC_6 (VAR_57)),
         FUNC_31 (VAR_58, VAR_60)))
     VAR_41 = VAR_60;
 }



      if (VAR_47)
 {
   int VAR_61;
   tree VAR_62 = FUNC_29 (VAR_37, &VAR_61);

   VAR_44 = VAR_41;

   if (VAR_62 == VAR_37 && VAR_44 == FUNC_6 (VAR_37))
     VAR_61 = FUNC_11 (FUNC_6 (VAR_37));

   if (FUNC_9 (FUNC_6 (VAR_62)) < FUNC_9 (VAR_41)


       && FUNC_21 (VAR_38, FUNC_9 (FUNC_6 (VAR_62))) < 0

       && (!FUNC_11 (VAR_44) || VAR_61))
     {

       VAR_41
  = FUNC_14 (VAR_61,
          FUNC_6 (VAR_62));

       if (FUNC_6 (VAR_37) != VAR_41)
  VAR_37 = FUNC_22 (VAR_41, VAR_37);
       VAR_42 = 1;
     }
 }




      if (VAR_46)
 {




   tree VAR_63 = VAR_37, VAR_64 = VAR_38, VAR_65 = VAR_41;
   enum tree_code VAR_66 = VAR_40;
   tree VAR_67
     = FUNC_40 (&VAR_63, &VAR_64, &VAR_65, &VAR_66);

   if (VAR_67 != 0)
     return VAR_67;

   VAR_37 = VAR_63, VAR_38 = VAR_64;
   VAR_42 = 1;
   VAR_40 = VAR_66;

   if (VAR_28 && VAR_26 == 0)
     {
       int VAR_68 = !FUNC_11 (FUNC_6 (VAR_30));
       int VAR_69 = !FUNC_11 (FUNC_6 (VAR_31));
       int VAR_70, VAR_71;
       tree VAR_72 = FUNC_29 (VAR_37, &VAR_70);
       tree VAR_73 = FUNC_29 (VAR_38, &VAR_71);

       VAR_63 = VAR_30;
       VAR_64 = VAR_31;
       FUNC_3 (VAR_63);
       FUNC_3 (VAR_64);
       if (!FUNC_11 (VAR_41))
          ;

       else if (VAR_68 == VAR_69)
          ;
       else
  {
    tree VAR_74, VAR_75;
    bool VAR_76;

    if (VAR_68)
      VAR_74 = VAR_63, VAR_75 = VAR_64;
    else
      VAR_74 = VAR_64, VAR_75 = VAR_63;






    if (FUNC_42 (VAR_74, &VAR_76))
              ;



    else if (FUNC_4 (VAR_75) == VAR_8
      && (VAR_40 == 149 || VAR_40 == 138)
      && FUNC_31
      (VAR_75, FUNC_15 (VAR_41)))
              ;



    else if (FUNC_4 (VAR_75) == VAR_8
      && FUNC_4 (FUNC_6 (VAR_75)) == VAR_4
      && FUNC_31
      (FUNC_8 (FUNC_6 (VAR_75)),
       FUNC_15 (VAR_41)))
              ;
    else
      FUNC_46 (0, "comparison between signed and unsigned");
  }
       if ((FUNC_4 (VAR_72) == VAR_1)
    != (FUNC_4 (VAR_73) == VAR_1))
  {
    if (FUNC_4 (VAR_72) == VAR_1)
      VAR_72 = FUNC_29 (FUNC_5 (VAR_72, 0),
         &VAR_70);
    else
      VAR_73 = FUNC_29 (FUNC_5 (VAR_73, 0),
         &VAR_71);

    if (FUNC_30 (VAR_72, 0) || FUNC_30 (VAR_73, 0))
      {
        tree VAR_77;
        HOST_WIDE_INT VAR_78, VAR_79;
        int VAR_80, VAR_81;

        if (FUNC_30 (VAR_72, 0))
   {
     VAR_77 = VAR_73;
     VAR_80 = VAR_71;
     VAR_78 = FUNC_45 (VAR_72, 0);
   }
        else
   {
     VAR_77 = VAR_72;
     VAR_80 = VAR_70;
     VAR_78 = FUNC_45 (VAR_73, 0);
   }

        VAR_81 = FUNC_9 (FUNC_6 (VAR_77));
        if (VAR_81 < FUNC_9 (VAR_41)
     && VAR_81 < VAR_7 && VAR_80)
   {
     VAR_79 = (~(HOST_WIDE_INT) 0) << VAR_81;
     if ((VAR_79 & VAR_78) != VAR_79)
       FUNC_46 (0, "comparison of promoted ~unsigned with constant");
   }
      }
    else if (VAR_70 && VAR_71
      && (FUNC_9 (FUNC_6 (VAR_72))
          < FUNC_9 (VAR_41))
      && (FUNC_9 (FUNC_6 (VAR_73))
          < FUNC_9 (VAR_41)))
      FUNC_46 (0, "comparison of promoted ~unsigned with unsigned");
  }
     }
 }
    }







  if (!VAR_41)
    {
      FUNC_13 (VAR_29, FUNC_6 (VAR_37), FUNC_6 (VAR_38));
      return VAR_20;
    }

  if (!VAR_42)
    {
      if (FUNC_6 (VAR_37) != VAR_41)
 VAR_37 = FUNC_23 (VAR_41, VAR_37);
      if (FUNC_6 (VAR_38) != VAR_41)
 VAR_38 = FUNC_23 (VAR_41, VAR_38);



      if (FUNC_4 (VAR_37) == VAR_5 || FUNC_4 (VAR_38) == VAR_5)
 return VAR_20;
    }

  if (VAR_43 == VAR_11)
    VAR_43 = VAR_41;

  {

    tree VAR_82 = VAR_25 ? FUNC_27 (VAR_40,
            VAR_43,
            VAR_37, VAR_38)
      : FUNC_26 (VAR_40, VAR_43,
       VAR_37, VAR_38);

    if (VAR_44 != 0)
      VAR_82 = FUNC_22 (VAR_44, VAR_82);
    return VAR_82;
  }
}
