
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int** lambda_matrix ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (int,int,int,scalar_t__*,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,char*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int**,scalar_t__,unsigned int,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int,int) ;
 scalar_t__ VAR_6 ;
 int** FUNC_16 (unsigned int,int) ;
 int FUNC_17 (int**,unsigned int,int,int**,int**) ;
 int FUNC_18 (int**,unsigned int,int ) ;
 unsigned int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_21 (tree VAR_7,
     tree VAR_8,
     tree *VAR_9,
     tree *VAR_10,
     tree *VAR_11)
{
  unsigned VAR_12, VAR_13, VAR_14;
  int VAR_15, VAR_16, VAR_17, VAR_18;
  int VAR_19, VAR_20;
  lambda_matrix VAR_21, VAR_22, VAR_23;

  if (FUNC_10 (VAR_7, VAR_8))
    {


      *VAR_9 = VAR_6;
      *VAR_10 = VAR_6;
      *VAR_11 = VAR_2;
      return;
    }
  if (VAR_4 && (VAR_5 & VAR_1))
    FUNC_11 (VAR_4, "(analyze_subscript_affine_affine \n");
  VAR_12 = FUNC_19 (VAR_7);
  VAR_13 = FUNC_19 (VAR_8);

  VAR_14 = VAR_12 + VAR_13;
  VAR_22 = FUNC_16 (VAR_14, VAR_14);
  VAR_21 = FUNC_16 (VAR_14, 1);
  VAR_23 = FUNC_16 (VAR_14, 1);

  VAR_15 = FUNC_13 (VAR_21, VAR_7, 0, 1);
  VAR_16 = FUNC_13 (VAR_21, VAR_8, VAR_12, -1);
  VAR_17 = VAR_16 - VAR_15;
  if (VAR_17 == 0)
    {
      if (VAR_12 == 1 && VAR_13 == 1)
 {
   int VAR_24, VAR_25;
   int VAR_26, VAR_27, VAR_28;
   tree VAR_29, VAR_30;

   VAR_29 = FUNC_12 (FUNC_2 (VAR_7));
   VAR_30 = FUNC_12 (FUNC_2 (VAR_8));
   if (VAR_29 == VAR_0 || VAR_30 == VAR_0)
     {
       if (VAR_4 && (VAR_5 & VAR_1))
  FUNC_11 (VAR_4, "affine-affine test failed: missing iteration counts.\n");
       *VAR_9 = VAR_2;
       *VAR_10 = VAR_2;
       *VAR_11 = VAR_2;
       goto end_analyze_subs_aa;
     }

   VAR_27 = FUNC_14 (VAR_29);
   VAR_28 = FUNC_14 (VAR_30);
   VAR_26 = FUNC_5 (VAR_27, VAR_28);

   VAR_24 = FUNC_14 (FUNC_1 (VAR_7));
   VAR_25 = FUNC_14 (FUNC_1 (VAR_8));

   FUNC_9 (VAR_26, VAR_24, VAR_25,
         VAR_9, VAR_10,
         VAR_11, 1);
 }

      else if (VAR_12 == 2 && VAR_13 == 1)
 FUNC_8
   (VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

      else if (VAR_12 == 1 && VAR_13 == 2)
 FUNC_8
   (VAR_8, VAR_7, VAR_10, VAR_9, VAR_11);

      else
 {
   if (VAR_4 && (VAR_5 & VAR_1))
     FUNC_11 (VAR_4, "affine-affine test failed: too many variables.\n");
   *VAR_9 = VAR_2;
   *VAR_10 = VAR_2;
   *VAR_11 = VAR_2;
 }
      goto end_analyze_subs_aa;
    }


  FUNC_17 (VAR_21, VAR_14, 1, VAR_23, VAR_22);

  if (VAR_23[0][0] < 0)
    {
      VAR_23[0][0] *= -1;
      FUNC_18 (VAR_22, VAR_14, 0);
    }
  VAR_18 = VAR_23[0][0];




  if (VAR_18 == 0)
    {
      *VAR_9 = VAR_2;
      *VAR_10 = VAR_2;
      *VAR_11 = VAR_2;
      goto end_analyze_subs_aa;
    }


  if (!FUNC_15 (VAR_18, VAR_17))
    {


      *VAR_9 = VAR_3;
      *VAR_10 = VAR_3;
      *VAR_11 = VAR_6;
    }


  else if (VAR_12 == 1 && VAR_13 == 1)
    {

      if (((VAR_21[0][0] > 0 && -VAR_21[1][0] > 0)
    || (VAR_21[0][0] < 0 && -VAR_21[1][0] < 0)))
 {
   int VAR_31, VAR_32, VAR_33, VAR_34;




   int VAR_35, VAR_36;
   int VAR_37, VAR_38, VAR_39;
   tree VAR_40, VAR_41;

   VAR_40 = FUNC_12 (FUNC_2 (VAR_7));
   VAR_41 = FUNC_12 (FUNC_2 (VAR_8));

   if (VAR_40 == VAR_0 || VAR_41 == VAR_0)
     {
       if (VAR_4 && (VAR_5 & VAR_1))
  FUNC_11 (VAR_4, "affine-affine test failed: missing iteration counts.\n");
       *VAR_9 = VAR_2;
       *VAR_10 = VAR_2;
       *VAR_11 = VAR_2;
       goto end_analyze_subs_aa;
     }

   VAR_38 = FUNC_14 (VAR_40);
   VAR_39 = FUNC_14 (VAR_41);
   VAR_37 = FUNC_5 (VAR_38, VAR_39);

   VAR_31 = VAR_22[0][0] * VAR_17 / VAR_18;
   VAR_32 = VAR_22[0][1] * VAR_17 / VAR_18;
   VAR_33 = VAR_22[1][0];
   VAR_34 = VAR_22[1][1];

   if ((VAR_33 == 0 && VAR_31 < 0)
       || (VAR_34 == 0 && VAR_32 < 0))
     {




       *VAR_9 = VAR_3;
       *VAR_10 = VAR_3;
       *VAR_11 = VAR_6;
     }

   else
     {
       if (VAR_33 > 0)
  {
    VAR_19 = FUNC_0 (-VAR_31, VAR_33);
    VAR_20 = FUNC_3 (VAR_37 - VAR_31, VAR_33);

    if (VAR_34 > 0)
      {
        int VAR_42, VAR_43;
        VAR_19 = FUNC_4 (VAR_19, FUNC_0 (-VAR_32, VAR_34));
        VAR_20 = FUNC_5 (VAR_20, FUNC_3 (VAR_37 - VAR_32, VAR_34));

        VAR_35 = VAR_33 * VAR_19 + VAR_31;
        VAR_36 = VAR_34 * VAR_19 + VAR_32;





        VAR_43 = FUNC_5 (VAR_35 / VAR_33, VAR_36 / VAR_34);
        VAR_35 -= VAR_33 * VAR_43;
        VAR_36 -= VAR_34 * VAR_43;

        VAR_19 = (VAR_35 - VAR_31)/VAR_33;
        VAR_42 = VAR_20 - VAR_19;



        if (VAR_35 > VAR_37 || VAR_36 > VAR_37)
   {
     *VAR_9 = VAR_3;
     *VAR_10 = VAR_3;
     *VAR_11 = VAR_6;
   }
        else
   {
     *VAR_9 = FUNC_7
       (1,
        FUNC_6 (VAR_0, VAR_35),
        FUNC_6 (VAR_0, VAR_33));
     *VAR_10 = FUNC_7
       (1,
        FUNC_6 (VAR_0, VAR_36),
        FUNC_6 (VAR_0, VAR_34));
     *VAR_11 = FUNC_6 (VAR_0, VAR_42);
   }
      }
    else
      {


        if (VAR_4 && (VAR_5 & VAR_1))
   FUNC_11 (VAR_4, "affine-affine test failed: unimplemented.\n");
        *VAR_9 = VAR_2;
        *VAR_10 = VAR_2;
        *VAR_11 = VAR_2;
      }
  }

       else
  {


    if (VAR_4 && (VAR_5 & VAR_1))
      FUNC_11 (VAR_4, "affine-affine test failed: unimplemented.\n");
    *VAR_9 = VAR_2;
    *VAR_10 = VAR_2;
    *VAR_11 = VAR_2;
  }
     }
 }
      else
 {
   if (VAR_4 && (VAR_5 & VAR_1))
     FUNC_11 (VAR_4, "affine-affine test failed: unimplemented.\n");
   *VAR_9 = VAR_2;
   *VAR_10 = VAR_2;
   *VAR_11 = VAR_2;
 }
    }

  else
    {
      if (VAR_4 && (VAR_5 & VAR_1))
 FUNC_11 (VAR_4, "affine-affine test failed: unimplemented.\n");
      *VAR_9 = VAR_2;
      *VAR_10 = VAR_2;
      *VAR_11 = VAR_2;
    }

end_analyze_subs_aa:
  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_11 (VAR_4, "  (overlaps_a = ");
      FUNC_20 (VAR_4, *VAR_9, 0);
      FUNC_11 (VAR_4, ")\n  (overlaps_b = ");
      FUNC_20 (VAR_4, *VAR_10, 0);
      FUNC_11 (VAR_4, ")\n");
      FUNC_11 (VAR_4, ")\n");
    }
}
