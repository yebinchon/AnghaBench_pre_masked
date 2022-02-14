
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int double_int ;
typedef int HOST_WIDE_INT ;




 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;

 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;

 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

 int VAR_8 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (int ,scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__,int) ;
 int FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_29 (scalar_t__,int) ;
 int FUNC_30 (scalar_t__) ;
 int FUNC_31 (int ) ;

tree
FUNC_32 (tree VAR_12, HOST_WIDE_INT *VAR_13,
       HOST_WIDE_INT *VAR_14, tree *VAR_15,
       enum machine_mode *VAR_16, int *VAR_17,
       int *VAR_18, bool VAR_19)
{
  tree VAR_20 = 0;
  enum machine_mode VAR_21 = VAR_8;
  tree VAR_22 = VAR_10;
  tree VAR_23 = VAR_9;



  if (FUNC_7 (VAR_12) == 131)
    {
      VAR_20 = FUNC_4 (FUNC_8 (VAR_12, 1));
      if (! FUNC_1 (FUNC_8 (VAR_12, 1)))
 VAR_21 = FUNC_3 (FUNC_8 (VAR_12, 1));

      *VAR_17 = FUNC_5 (FUNC_8 (VAR_12, 1));
    }
  else if (FUNC_7 (VAR_12) == 132)
    {
      VAR_20 = FUNC_8 (VAR_12, 1);
      *VAR_17 = FUNC_0 (VAR_12);
    }
  else
    {
      VAR_21 = FUNC_13 (FUNC_10 (VAR_12));
      *VAR_17 = FUNC_15 (FUNC_10 (VAR_12));

      if (VAR_21 == VAR_2)
 VAR_20 = FUNC_14 (FUNC_10 (VAR_12));
      else
 *VAR_13 = FUNC_6 (VAR_21);
    }

  if (VAR_20 != 0)
    {
      if (! FUNC_26 (VAR_20, 1))
 VAR_21 = VAR_2, *VAR_13 = -1;
      else
 *VAR_13 = FUNC_29 (VAR_20, 1);
    }

  *VAR_16 = VAR_21;



  while (1)
    {
      switch (FUNC_7 (VAR_12))
 {
 case 132:
   VAR_23 = FUNC_28 (VAR_6, VAR_23,
       FUNC_8 (VAR_12, 2));
   break;

 case 131:
   {
     tree VAR_24 = FUNC_8 (VAR_12, 1);
     tree VAR_25 = FUNC_19 (VAR_12);




     if (VAR_25 == 0)
       break;

     VAR_22 = FUNC_28 (VAR_6, VAR_22, VAR_25);
     VAR_23 = FUNC_28 (VAR_6, VAR_23,
         FUNC_2 (VAR_24));


   }
   break;

 case 133:
 case 134:
   {
     tree VAR_26 = FUNC_8 (VAR_12, 1);
     tree VAR_27 = FUNC_17 (VAR_12);
     tree VAR_28 = FUNC_16 (VAR_12);





     if (! FUNC_27 (VAR_27))
       VAR_26 = FUNC_24 (VAR_3, FUNC_10 (VAR_26),
       VAR_26, VAR_27);

     VAR_22 = FUNC_28 (VAR_6, VAR_22,
            FUNC_28 (VAR_4,
          FUNC_25 (VAR_11, VAR_26),
          VAR_28));
   }
   break;

 case 129:
   break;

 case 130:
   VAR_23 = FUNC_28 (VAR_6, VAR_23,
       FUNC_18 (*VAR_13));
   break;

 case 128:
   if (VAR_19 && VAR_7
       && (FUNC_11 (FUNC_10 (VAR_12))
        > FUNC_11 (FUNC_10 (FUNC_8 (VAR_12, 0))))
       && (FUNC_11 (FUNC_10 (FUNC_8 (VAR_12, 0)))
    < VAR_0)
       && (FUNC_12 (FUNC_10 (VAR_12))
    || FUNC_12 (FUNC_10 (FUNC_8 (VAR_12, 0)))))
     goto done;
   break;

 default:
   goto done;
 }


      if (FUNC_9 (VAR_12))
 *VAR_18 = 1;

      VAR_12 = FUNC_8 (VAR_12, 0);
    }
 done:




  if (FUNC_26 (VAR_22, 0))
    {
      double_int VAR_29 = FUNC_22 (FUNC_30 (VAR_22),
           FUNC_31 (VAR_1));
      VAR_29 = FUNC_20 (VAR_29, FUNC_30 (VAR_23));
      if (FUNC_21 (VAR_29))
 {
   *VAR_14 = FUNC_23 (VAR_29);
   *VAR_15 = VAR_5;
   return VAR_12;
 }
    }


  *VAR_14 = FUNC_29 (VAR_23, 0);
  *VAR_15 = VAR_22;

  return VAR_12;
}
