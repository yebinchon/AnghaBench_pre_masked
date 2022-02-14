
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_18 (int,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_23 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_24 (scalar_t__,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_25 (scalar_t__) ;
 int FUNC_26 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_27 (int ,char*) ;

tree
FUNC_28 (tree *VAR_10, tree *VAR_11, tree *VAR_12,
   enum tree_code *VAR_13)
{
  tree VAR_14;
  tree VAR_15 = *VAR_10;
  tree VAR_16 = *VAR_11;
  int VAR_17, VAR_18;
  int VAR_19, VAR_20;
  tree VAR_21, VAR_22;
  enum tree_code VAR_23 = *VAR_13;




  VAR_21 = FUNC_24 (VAR_15, &VAR_17);
  VAR_22 = FUNC_24 (VAR_16, &VAR_18);




  if (VAR_15 == VAR_21 && FUNC_10 (VAR_15) != *VAR_12)
    VAR_17 = FUNC_15 (FUNC_10 (VAR_15));
  if (VAR_16 == VAR_22 && FUNC_10 (VAR_16) != *VAR_12)
    VAR_18 = FUNC_15 (FUNC_10 (VAR_16));


  VAR_19 = FUNC_3 (FUNC_10 (VAR_21)) == VAR_4;
  VAR_20 = FUNC_3 (FUNC_10 (VAR_22)) == VAR_4;





  if (FUNC_4 (VAR_21)
      && !FUNC_25 (VAR_22) && !FUNC_26 (VAR_22))
    {
      tree VAR_24 = VAR_21;
      int VAR_25 = VAR_17;
      VAR_21 = VAR_22;
      VAR_22 = VAR_24;
      VAR_24 = VAR_15;
      VAR_15 = VAR_16;
      VAR_16 = VAR_24;
      *VAR_10 = VAR_15;
      *VAR_11 = VAR_16;
      VAR_17 = VAR_18;
      VAR_18 = VAR_25;
      VAR_25 = VAR_19;
      VAR_19 = VAR_20;
      VAR_20 = VAR_25;

      switch (VAR_23)
 {
 case 128:
   VAR_23 = 130;
   break;
 case 130:
   VAR_23 = 128;
   break;
 case 129:
   VAR_23 = 131;
   break;
 case 131:
   VAR_23 = 129;
   break;
 default:
   break;
 }
      *VAR_13 = VAR_23;
    }
  if (!VAR_19 && !VAR_20
      && FUNC_3 (VAR_22) == VAR_2
      && FUNC_14 (FUNC_10 (VAR_21)) < FUNC_14 (*VAR_12))
    {
      int VAR_26, VAR_27, VAR_28, VAR_29;
      tree VAR_30, VAR_31;

      int VAR_32 = FUNC_15 (*VAR_12);
      tree VAR_33;

      VAR_14 = FUNC_18 (VAR_17,
            FUNC_10 (VAR_21));

      VAR_30 = FUNC_11 (VAR_14);
      VAR_31 = FUNC_12 (VAR_14);

      if (VAR_32 && !VAR_17)
 *VAR_12 = FUNC_19 (*VAR_12);

      if (FUNC_10 (VAR_22) != *VAR_12)
 {


   tree VAR_34 = FUNC_17 (*VAR_12,
      FUNC_7 (VAR_22),
      FUNC_6 (VAR_22));

   VAR_22 = FUNC_23 (VAR_34, 0, FUNC_8 (VAR_22),
        FUNC_5 (VAR_22));
 }
      if (VAR_14 != *VAR_12)
 {
   VAR_31 = FUNC_22 (*VAR_12, VAR_31);
   VAR_30 = FUNC_22 (*VAR_12, VAR_30);
 }

      if (VAR_32 && VAR_17)
 {
   VAR_26 = FUNC_2 (VAR_22, VAR_31);
   VAR_27 = FUNC_2 (VAR_22, VAR_30);
   VAR_28 = FUNC_2 (VAR_31, VAR_22);
   VAR_29 = FUNC_2 (VAR_30, VAR_22);
 }
      else
 {
   VAR_26 = FUNC_1 (VAR_22, VAR_31);
   VAR_27 = FUNC_1 (VAR_22, VAR_30);
   VAR_28 = FUNC_1 (VAR_31, VAR_22);
   VAR_29 = FUNC_1 (VAR_30, VAR_22);
 }

      VAR_33 = 0;

      if (VAR_23 == VAR_3)
 {
   if (VAR_29 || VAR_26)
     VAR_33 = VAR_8;
 }
      else if (VAR_23 == VAR_1)
 {
   if (VAR_29 || VAR_26)
     VAR_33 = VAR_7;
 }
      else if (VAR_23 == 128)
 {
   if (VAR_29)
     VAR_33 = VAR_8;
   if (!VAR_28)
     VAR_33 = VAR_7;
 }
      else if (VAR_23 == 130)
 {
   if (VAR_26)
     VAR_33 = VAR_8;
   if (!VAR_27)
     VAR_33 = VAR_7;
 }
      else if (VAR_23 == 129)
 {
   if (!VAR_27)
     VAR_33 = VAR_8;
   if (VAR_26)
     VAR_33 = VAR_7;
 }
      else if (VAR_23 == 131)
 {
   if (!VAR_28)
     VAR_33 = VAR_8;
   if (VAR_29)
     VAR_33 = VAR_7;
 }
      if (VAR_32 && !VAR_17)
 {
   if (VAR_33 != 0)
     switch (VAR_23)
       {
       case 128:
       case 131:
  VAR_22 = FUNC_12 (VAR_14);
  VAR_33 = 0;
  break;

       case 129:
       case 130:
  VAR_22 = FUNC_11 (VAR_14);
  VAR_33 = 0;
  break;

       default:
  break;
       }
   VAR_14 = FUNC_20 (VAR_14);
 }

      if (FUNC_3 (VAR_21) != VAR_2)
 {
   if (VAR_33 == VAR_7)
     FUNC_27 (0, "comparison is always false due to limited range of data type");
   if (VAR_33 == VAR_8)
     FUNC_27 (0, "comparison is always true due to limited range of data type");
 }

      if (VAR_33 != 0)
 {

   if (FUNC_9 (VAR_21))
     return FUNC_16 (VAR_0, FUNC_10 (VAR_33), VAR_21, VAR_33);
   return VAR_33;
 }




    }



  else if (VAR_19 && VAR_20
    && (FUNC_0 (FUNC_13 (FUNC_10 (VAR_21)))
        || FUNC_0 (FUNC_13 (FUNC_10 (VAR_22)))))
    VAR_14 = FUNC_21 (FUNC_10 (VAR_21), FUNC_10 (VAR_22));

  else if (VAR_19 && VAR_20
    && (FUNC_14 (FUNC_10 (VAR_21))
        == FUNC_14 (FUNC_10 (VAR_22))))
    VAR_14 = FUNC_10 (VAR_21);
  else if (VAR_17 == VAR_18 && VAR_19 == VAR_20
    && FUNC_14 (FUNC_10 (VAR_21)) < FUNC_14 (*VAR_12)
    && FUNC_14 (FUNC_10 (VAR_22)) < FUNC_14 (*VAR_12))
    {
      VAR_14 = FUNC_21 (FUNC_10 (VAR_21), FUNC_10 (VAR_22));
      VAR_14 = FUNC_18 (VAR_17
            || FUNC_15 (*VAR_12),
            VAR_14);


      VAR_21
 = FUNC_22 (FUNC_18 (VAR_17,
           FUNC_10 (VAR_21)),
     VAR_21);
      VAR_22
 = FUNC_22 (FUNC_18 (VAR_18,
           FUNC_10 (VAR_22)),
     VAR_22);
    }
  else
    {


      VAR_14 = *VAR_12;
      VAR_21 = VAR_15;
      VAR_22 = VAR_16;

      if (!VAR_19 && !VAR_20 && FUNC_25 (VAR_22)
   && FUNC_15 (*VAR_12))
 {
   tree VAR_35 = 0;
   switch (VAR_23)
     {
     case 131:




       if (VAR_5 && !VAR_6
    && !(FUNC_3 (VAR_21) == VAR_2
         && !FUNC_8 (FUNC_22 (FUNC_19 (VAR_14),
         VAR_21))))
  FUNC_27 (0, "comparison of unsigned expression >= 0 is always true");
       VAR_35 = VAR_8;
       break;

     case 128:
       if (VAR_5 && !VAR_6
    && !(FUNC_3 (VAR_21) == VAR_2
         && !FUNC_8 (FUNC_22 (FUNC_19 (VAR_14),
         VAR_21))))
  FUNC_27 (0, "comparison of unsigned expression < 0 is always false");
       VAR_35 = VAR_7;
       break;

     default:
       break;
     }

   if (VAR_35 != 0)
     {

       if (FUNC_9 (VAR_21))
  return FUNC_16 (VAR_0, FUNC_10 (VAR_35),
          VAR_21, VAR_35);
       return VAR_35;
     }
 }
    }

  *VAR_10 = FUNC_22 (VAR_14, VAR_21);
  *VAR_11 = FUNC_22 (VAR_14, VAR_22);

  *VAR_12 = VAR_9;

  return 0;
}
