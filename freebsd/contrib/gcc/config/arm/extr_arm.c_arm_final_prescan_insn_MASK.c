
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;


 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int const FUNC_14 (int *) ;
 int VAR_19 ;
 int * FUNC_15 (int *) ;
 int VAR_20 ;
 int FUNC_16 (int *,int *,int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int,int *) ;

void
FUNC_19 (rtx VAR_21)
{

  rtx VAR_22 = FUNC_4 (VAR_21);



  int VAR_23 = 0;





  int VAR_24 = 0;


  int VAR_25 = 0;



  rtx VAR_26 = VAR_21;



  if (VAR_15 == 4)
    {
      if (VAR_21 == VAR_17)
 {
   VAR_17 = ((void*)0);
   VAR_15 = 0;
 }
      return;
    }





  if (VAR_15 == 3)
    {
      if (FUNC_17 (VAR_21))
 {
   VAR_26 = FUNC_15 (VAR_26);
   if (FUNC_2 (VAR_26) == 133)
     {

       VAR_26 = FUNC_15 (VAR_26);
     }
   if (FUNC_2 (VAR_26) == 131
       && FUNC_1 (VAR_26) == VAR_18
       && FUNC_3 (VAR_26) == 1)
     VAR_23 = VAR_12;
   else
     return;
 }
      else if (FUNC_2 (VAR_22) == VAR_10)
        {
   VAR_26 = FUNC_15 (VAR_26);
   if (FUNC_2 (VAR_26) == 133)
     VAR_26 = FUNC_15 (VAR_26);
   if (FUNC_2 (VAR_26) == 131
       && FUNC_1 (VAR_26) == VAR_18
       && FUNC_3 (VAR_26) == 1)
     {
       VAR_23 = VAR_12;
       VAR_25 = 1;
     }
   else
     return;
        }
      else
 return;
    }

  FUNC_10 (!VAR_15 || VAR_23);
  if (FUNC_2 (VAR_21) != 128)
    return;



  if (FUNC_2 (VAR_22) == VAR_8 && FUNC_9 (VAR_22, 0) > 0)
    VAR_22 = FUNC_8 (VAR_22, 0, 0);

  if (VAR_23
      || (FUNC_2 (VAR_22) == VAR_11 && FUNC_2 (FUNC_5 (VAR_22)) == VAR_9
   && FUNC_2 (FUNC_6 (VAR_22)) == VAR_5))
    {
      int VAR_27;
      int VAR_28 = VAR_4, VAR_29 = VAR_4;

      int VAR_30 = VAR_12;
      rtx VAR_31 = VAR_26, VAR_32 = 0;



      if (FUNC_14 (VAR_21) == VAR_3)
 {
   VAR_24 = 1;
   return;
 }


      if (VAR_23)
        {
   if (!VAR_25)
     VAR_32 = FUNC_7 (FUNC_6 (VAR_22), 0);
        }
      else if (FUNC_2 (FUNC_7 (FUNC_6 (VAR_22), 1)) == VAR_6)
 VAR_32 = FUNC_7 (FUNC_7 (FUNC_6 (VAR_22), 1), 0);
      else if (FUNC_2 (FUNC_7 (FUNC_6 (VAR_22), 2)) == VAR_6)
 {
   VAR_32 = FUNC_7 (FUNC_7 (FUNC_6 (VAR_22), 2), 0);
   VAR_30 = VAR_4;
 }
      else if (FUNC_2 (FUNC_7 (FUNC_6 (VAR_22), 1)) == VAR_10)
 VAR_25 = 1;
      else if (FUNC_2 (FUNC_7 (FUNC_6 (VAR_22), 2)) == VAR_10)
        {
   VAR_25 = 1;
   VAR_30 = VAR_4;
        }
      else
 FUNC_11 ();




      for (VAR_27 = 0;
    !VAR_28 && !VAR_29 && VAR_27++ < VAR_19;)
 {
   rtx VAR_33;

   VAR_31 = FUNC_15 (VAR_31);
   if (!VAR_31)
     break;

   switch (FUNC_2 (VAR_31))
     {
     case 131:


       if (VAR_31 == VAR_32)
  {
    if (VAR_24)
      {
        VAR_15 = 2;
        VAR_31 = FUNC_15 (VAR_31);
      }
    else
      VAR_15 = 1;
    VAR_29 = VAR_12;
  }
       else
  VAR_28 = VAR_12;
       break;

     case 133:




       VAR_31 = FUNC_15 (VAR_31);
       if (VAR_31 && VAR_31 == VAR_32)
  {
    if (VAR_24)
      {
        VAR_15 = 2;
        VAR_31 = FUNC_15 (VAR_31);
      }
    else
      VAR_15 = 1;
    VAR_29 = VAR_12;
  }
       else
  VAR_28 = VAR_12;
       break;

     case 132:




       if (VAR_14)
  {
    VAR_28 = VAR_12;
    break;
  }




       VAR_31 = FUNC_15 (VAR_31);
       if (VAR_31 && FUNC_2 (VAR_31) == 133)
  VAR_31 = FUNC_15 (VAR_31);

       if (VAR_31 && VAR_31 == VAR_32
    && VAR_27 < VAR_19)
  {
    if (VAR_24)
      {
        VAR_15 = 2;
        VAR_31 = FUNC_15 (VAR_31);
      }
    else
      VAR_15 = 1;
    VAR_29 = VAR_12;
  }
       else
  VAR_28 = VAR_12;
       break;

     case 128:






       VAR_33 = FUNC_4 (VAR_31);
       if (FUNC_2 (VAR_33) == VAR_11
    && FUNC_2 (FUNC_5 (VAR_33)) == VAR_9)
  {
    if (FUNC_2 (FUNC_6 (VAR_33)) == VAR_6
        && FUNC_7 (FUNC_6 (VAR_33), 0) == VAR_32 && !VAR_23)
      {
        VAR_15 = 2;
        VAR_29 = VAR_12;
      }
    else if (FUNC_2 (FUNC_6 (VAR_33)) == VAR_5)
      VAR_28 = VAR_12;
  }


       else if (FUNC_2 (VAR_33) == VAR_10
         && !FUNC_18 (VAR_12, ((void*)0))
         && !VAR_20)
  VAR_28 = VAR_12;
       else if (FUNC_2 (VAR_33) == VAR_10
         && VAR_25)
         {
    VAR_15 = 2;
    VAR_29 = VAR_12;
         }
       else if (FUNC_2 (VAR_33) == VAR_8)
         {
    switch (FUNC_14 (VAR_31))
      {
      case 130:
        break;
      default:
        VAR_28 = VAR_12;
        break;
      }
  }
       else
  VAR_28 = VAR_12;

       break;

     case 129:


       VAR_33 = FUNC_4 (VAR_31);
       if (!(FUNC_2 (VAR_33) == VAR_11
      || FUNC_2 (VAR_33) == VAR_8)
    || FUNC_14 (VAR_31) != 130)
  VAR_28 = VAR_12;
       if (FUNC_2 (VAR_33) != VAR_13
    && FUNC_2 (VAR_33) != VAR_2
    && FUNC_13 (VAR_31) != VAR_1)
  VAR_28 = VAR_12;
       break;

     default:
       break;
     }
 }
      if (VAR_29)
 {
   if ((!VAR_25) && (VAR_15 == 1 || VAR_23))
     VAR_18 = FUNC_1 (VAR_32);
   else
     {
       FUNC_10 (VAR_25 || VAR_15 == 2);

       while (VAR_31 && FUNC_2 (FUNC_4 (VAR_31)) == VAR_13)
         {
    VAR_31 = FUNC_15 (VAR_31);
    FUNC_10 (!VAR_31
         || (FUNC_2 (VAR_31) != 133
      && FUNC_2 (VAR_31) != 131));
         }
       if (!VAR_31)
         {

    FUNC_16 (FUNC_4 (VAR_21), VAR_21, ((void*)0));
    VAR_15 = 0;
    VAR_17 = ((void*)0);
    return;
         }
       VAR_17 = VAR_31;
     }
   if (VAR_24)
     {
       FUNC_10 (!VAR_23);
       VAR_16 =
    FUNC_12 (FUNC_7 (FUNC_7 (FUNC_7 (FUNC_6 (VAR_22),
           0), 0), 1));
       if (FUNC_2 (FUNC_7 (FUNC_7 (FUNC_6 (VAR_22), 0), 0)) == VAR_0)
  VAR_16 = FUNC_0 (VAR_16);
       if (FUNC_2 (FUNC_7 (FUNC_6 (VAR_22), 0)) == VAR_7)
  VAR_16 = FUNC_0 (VAR_16);
     }
   else
     {


       if (!VAR_23)
  VAR_16 = FUNC_12 (FUNC_7 (FUNC_6 (VAR_22),
              0));
     }

   if (VAR_23 || VAR_30)
     VAR_16 = FUNC_0 (VAR_16);
 }





      FUNC_16 (FUNC_4 (VAR_21), VAR_21, ((void*)0));
    }
}
