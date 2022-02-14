
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_24 (int ,int) ;
 scalar_t__ FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int VAR_12 ;

void
FUNC_28 (rtx VAR_13[])
{
  rtx VAR_14[2][3];
  int VAR_15;
  int VAR_16 = 0;
  int VAR_17 = 0;
  enum machine_mode VAR_18 = FUNC_3 (VAR_13[0]);




  if (FUNC_4 (FUNC_3 (VAR_13[0])) == 8 && VAR_6)
    {



      if (FUNC_2 (VAR_13[1]) == 129
   && FUNC_2 (FUNC_9 (VAR_13[1], 0)) == VAR_4
   && FUNC_0 (FUNC_9 (VAR_13[1], 0)))
 VAR_13[1] = FUNC_21 (FUNC_9 (VAR_13[1], 0));
      if (FUNC_25 (VAR_13[0], VAR_8))
 {
   VAR_13[0] = FUNC_12 (VAR_13[0]);
   FUNC_6 (VAR_13[0], VAR_2);
 }
      else
        VAR_13[0] = FUNC_18 (VAR_1, VAR_13[0]);
      VAR_13[1] = FUNC_18 (VAR_1, VAR_13[1]);
      FUNC_14 (VAR_13[0], VAR_13[1]);
      return;
    }


  if (FUNC_25 (VAR_13[0], VAR_8))
    VAR_16 = 1;
  else
    FUNC_15 (FUNC_2 (VAR_13[0]) != 129
  || FUNC_23 (VAR_13[0]));

  VAR_15 = FUNC_22 (VAR_13[1], VAR_14[1], FUNC_3 (VAR_13[0]));
  FUNC_22 (VAR_13[0], VAR_14[0], FUNC_3 (VAR_13[0]));


  if (VAR_16 && FUNC_2 (VAR_13[1]) == 129
      && FUNC_26 (VAR_12, VAR_13[1]))
    {
      if (VAR_15 == 3)
 VAR_14[1][1] = FUNC_11 (VAR_14[1][1], FUNC_3 (VAR_14[1][1]),
         FUNC_9 (VAR_14[1][2], 0));
      VAR_14[1][0] = FUNC_11 (VAR_14[1][0], FUNC_3 (VAR_14[1][0]),
       FUNC_9 (VAR_14[1][1], 0));
    }



  if (FUNC_8 (VAR_14[0][0]) && FUNC_2 (VAR_14[1][0]) == 129)
    {
      if (FUNC_26 (VAR_14[0][0], FUNC_9 (VAR_14[1][0], 0)))
 VAR_17++;
      if (FUNC_26 (VAR_14[0][1], FUNC_9 (VAR_14[1][0], 0)))
 VAR_17++;
      if (VAR_15 == 3
   && FUNC_26 (VAR_14[0][2], FUNC_9 (VAR_14[1][0], 0)))
 VAR_17++;


      if (VAR_17 == 1 && VAR_15 == 3
   && FUNC_26 (VAR_14[0][1], FUNC_9 (VAR_14[1][0], 0)))
 {
   rtx VAR_19;
   VAR_19 = VAR_14[0][1]; VAR_14[0][1] = VAR_14[0][2]; VAR_14[0][2] = VAR_19;
   VAR_19 = VAR_14[1][1]; VAR_14[1][1] = VAR_14[1][2]; VAR_14[1][2] = VAR_19;
 }



      else if (VAR_17 > 1)
 {
   rtx VAR_20;

   VAR_17 = 1;

   VAR_20 = VAR_14[0][VAR_15 - 1];



   if (FUNC_3 (VAR_20) != VAR_2)
     VAR_20 = FUNC_19 (VAR_2, FUNC_7 (VAR_20));

   FUNC_13 (FUNC_20 (VAR_8, VAR_20, FUNC_9 (VAR_14[1][0], 0)));
   VAR_14[1][0] = FUNC_27 (VAR_14[1][0], VAR_20);
   VAR_14[1][1] = FUNC_27 (VAR_14[1][1],
          FUNC_24 (VAR_20, VAR_7));
   if (VAR_15 == 3)
     VAR_14[1][2] = FUNC_27 (VAR_14[1][2],
          FUNC_24 (VAR_20, 8));
 }
    }

  if (VAR_16)
    {
      if (!VAR_6)
 {
   if (VAR_15 == 3)
     {
       if (VAR_5 && VAR_18 == VAR_9)
                FUNC_13 (FUNC_17 (VAR_12, VAR_12, FUNC_1 (-4)));
       FUNC_14 (VAR_14[0][2], VAR_14[1][2]);
     }
 }
      else
 {




   if (FUNC_3 (VAR_14[1][1]) == VAR_3)
     {
       switch (FUNC_2 (VAR_14[1][1]))
  {
  case 129:
    VAR_14[1][1] = FUNC_10 (VAR_14[1][1], VAR_1, 0);
    break;

  case 128:
    VAR_14[1][1] = FUNC_19 (VAR_1, FUNC_7 (VAR_14[1][1]));
    break;

  default:
    FUNC_16 ();
  }

       if (FUNC_3 (VAR_14[1][0]) == VAR_3)
  VAR_14[1][0] = VAR_14[1][1];
     }
 }
      FUNC_14 (VAR_14[0][1], VAR_14[1][1]);
      FUNC_14 (VAR_14[0][0], VAR_14[1][0]);
      return;
    }


  if ((FUNC_8 (VAR_14[0][0])
       && FUNC_8 (VAR_14[1][1])
       && (FUNC_7 (VAR_14[0][0]) == FUNC_7 (VAR_14[1][1])
    || (VAR_15 == 3
        && FUNC_7 (VAR_14[0][0]) == FUNC_7 (VAR_14[1][2]))))
      || (VAR_17 > 0
   && FUNC_26 (VAR_14[0][0], FUNC_9 (VAR_14[1][0], 0))))
    {
      if (VAR_15 == 3)
 {
   VAR_13[2] = VAR_14[0][2];
   VAR_13[3] = VAR_14[0][1];
   VAR_13[4] = VAR_14[0][0];
   VAR_13[5] = VAR_14[1][2];
   VAR_13[6] = VAR_14[1][1];
   VAR_13[7] = VAR_14[1][0];
 }
      else
 {
   VAR_13[2] = VAR_14[0][1];
   VAR_13[3] = VAR_14[0][0];
   VAR_13[5] = VAR_14[1][1];
   VAR_13[6] = VAR_14[1][0];
 }
    }
  else
    {
      if (VAR_15 == 3)
 {
   VAR_13[2] = VAR_14[0][0];
   VAR_13[3] = VAR_14[0][1];
   VAR_13[4] = VAR_14[0][2];
   VAR_13[5] = VAR_14[1][0];
   VAR_13[6] = VAR_14[1][1];
   VAR_13[7] = VAR_14[1][2];
 }
      else
 {
   VAR_13[2] = VAR_14[0][0];
   VAR_13[3] = VAR_14[0][1];
   VAR_13[5] = VAR_14[1][0];
   VAR_13[6] = VAR_14[1][1];
 }
    }


  if (VAR_11)
    {
      if (FUNC_2 (VAR_13[5]) == VAR_0
   && VAR_13[5] != VAR_10
   && FUNC_8 (VAR_13[2]))
 {
   if (FUNC_2 (VAR_13[6]) == VAR_0
       && FUNC_5 (VAR_13[6]) == FUNC_5 (VAR_13[5]))
     VAR_13[6] = VAR_13[2];

   if (VAR_15 == 3
       && FUNC_2 (VAR_13[7]) == VAR_0
       && FUNC_5 (VAR_13[7]) == FUNC_5 (VAR_13[5]))
     VAR_13[7] = VAR_13[2];
 }

      if (VAR_15 == 3
   && FUNC_2 (VAR_13[6]) == VAR_0
   && VAR_13[6] != VAR_10
   && FUNC_8 (VAR_13[3])
   && FUNC_2 (VAR_13[7]) == VAR_0
   && FUNC_5 (VAR_13[7]) == FUNC_5 (VAR_13[6]))
 VAR_13[7] = VAR_13[3];
    }

  FUNC_14 (VAR_13[2], VAR_13[5]);
  FUNC_14 (VAR_13[3], VAR_13[6]);
  if (VAR_15 == 3)
    FUNC_14 (VAR_13[4], VAR_13[7]);

  return;
}
