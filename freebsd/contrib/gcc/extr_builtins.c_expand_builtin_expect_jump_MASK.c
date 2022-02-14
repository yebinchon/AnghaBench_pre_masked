
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 () ;

rtx
FUNC_25 (tree VAR_5, rtx VAR_6, rtx VAR_7)
{
  tree VAR_8 = FUNC_8 (VAR_5, 1);
  tree VAR_9 = FUNC_10 (VAR_8);
  tree VAR_10 = FUNC_10 (FUNC_6 (VAR_8));
  rtx VAR_11 = VAR_2;



  if (FUNC_7 (FUNC_9 (VAR_10)) == VAR_0
      && (FUNC_19 (VAR_10) || FUNC_18 (VAR_10)))
    {
      rtx VAR_12, VAR_13, VAR_14;


      FUNC_24 ();
      FUNC_14 (VAR_9, VAR_6, VAR_7);
      VAR_11 = FUNC_16 ();

      VAR_13 = FUNC_17 ();
      if (VAR_13 && FUNC_4 (VAR_13))
 VAR_13 = FUNC_23 (VAR_13);
      if (VAR_13 && !FUNC_2 (VAR_13))
 VAR_13 = VAR_2;
      FUNC_15 ();

      if (! VAR_7)
 VAR_7 = VAR_13;
      if (! VAR_6)
 VAR_6 = VAR_13;


      VAR_12 = VAR_11;
      while (VAR_12 != VAR_2)
 {
   rtx VAR_15 = FUNC_3 (VAR_12);

   if (FUNC_1 (VAR_12) && FUNC_12 (VAR_12))
     {
       rtx VAR_16 = FUNC_5 (FUNC_21 (VAR_12));
       rtx VAR_17 = FUNC_11 (VAR_16, 1);
       rtx VAR_18 = FUNC_11 (VAR_16, 2);
       int VAR_19 = -1;


       if (FUNC_0 (VAR_17) == VAR_1
    && FUNC_11 (VAR_17, 0) == VAR_7)
  VAR_19 = 1;
       else if (FUNC_0 (VAR_17) == VAR_1
         && FUNC_11 (VAR_17, 0) == VAR_6)
  VAR_19 = 0;
       else if (FUNC_0 (VAR_18) == VAR_1
         && FUNC_11 (VAR_18, 0) == VAR_6)
  VAR_19 = 1;
       else if (FUNC_0 (VAR_18) == VAR_1
         && FUNC_11 (VAR_18, 0) == VAR_7)
  VAR_19 = 0;

       else if (VAR_18 == VAR_4)
  {
    if (VAR_15 && FUNC_4 (VAR_15))
      VAR_15 = FUNC_20 (VAR_15);

    if (VAR_15 && FUNC_1 (VAR_15)
        && FUNC_13 (VAR_15))
      VAR_14 = FUNC_11 (FUNC_5 (FUNC_21 (VAR_15)), 0);
    else
      VAR_14 = VAR_15;



    if (VAR_14 == VAR_6)
      VAR_19 = 1;
    else if (VAR_14 == VAR_7)
      VAR_19 = 0;
  }
       else if (VAR_17 == VAR_4)
  {
    if (VAR_15 && FUNC_4 (VAR_15))
      VAR_15 = FUNC_20 (VAR_15);

    if (VAR_15 && FUNC_1 (VAR_15)
        && FUNC_13 (VAR_15))
      VAR_14 = FUNC_11 (FUNC_5 (FUNC_21 (VAR_15)), 0);
    else
      VAR_14 = VAR_15;

    if (VAR_14 == VAR_6)
      VAR_19 = 0;
    else if (VAR_14 == VAR_7)
      VAR_19 = 1;
  }

       if (VAR_19 != -1)
  {


    if (FUNC_19 (VAR_10))
      VAR_19 = 1 - VAR_19;
    FUNC_22 (VAR_12, VAR_3, VAR_19);
  }
     }

   VAR_12 = VAR_15;
 }
    }

  return VAR_11;
}
