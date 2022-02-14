
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int ,int ) ;
 int** VAR_14 ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int,int ,int,int) ;
 int VAR_15 ;

void
FUNC_23 (rtx VAR_16, rtx VAR_17)
{

  int VAR_18;

  enum machine_mode VAR_19;

  enum machine_mode VAR_20;
  int VAR_21;

  int VAR_22;

  VAR_18 = FUNC_9 (VAR_16) ? FUNC_8 (VAR_16) : FUNC_8 (VAR_17);
  VAR_19 = FUNC_4 (VAR_16);
  VAR_22 = VAR_14[VAR_18][VAR_19];
  if (FUNC_1 (VAR_18))
    VAR_20 = VAR_0;
  else if (FUNC_0 (VAR_18))
    VAR_20 = VAR_12;
  else if (VAR_8 && VAR_19 == VAR_11)
    VAR_20 = VAR_0;
  else
    VAR_20 = VAR_15;
  VAR_21 = FUNC_5 (VAR_20);

  FUNC_12 (VAR_21 * VAR_22 == FUNC_5 (VAR_19));

  if (FUNC_9 (VAR_17) && FUNC_9 (VAR_16) && (FUNC_8 (VAR_17) < FUNC_8 (VAR_16)))
    {


      int VAR_23;
      for (VAR_23 = VAR_22 - 1; VAR_23 >= 0; VAR_23--)
 FUNC_11 (FUNC_19 (VAR_13,
    FUNC_22 (VAR_20, VAR_16, VAR_19,
           VAR_23 * VAR_21),
    FUNC_22 (VAR_20, VAR_17, VAR_19,
           VAR_23 * VAR_21)));
    }
  else
    {
      int VAR_24;
      int VAR_25 = -1;
      bool VAR_26 = 0;

      if (FUNC_7 (VAR_17) && FUNC_6 (VAR_18))
 {
   rtx VAR_27;

   if (FUNC_3 (FUNC_10 (VAR_17, 0)) == VAR_5
       || FUNC_3 (FUNC_10 (VAR_17, 0)) == VAR_4)
     {
       rtx VAR_28;
       VAR_27 = FUNC_10 (FUNC_10 (VAR_17, 0), 0);
       VAR_28 = (FUNC_3 (FUNC_10 (VAR_17, 0)) == VAR_5
      ? FUNC_2 (FUNC_5 (FUNC_4 (VAR_17)))
      : FUNC_2 (-FUNC_5 (FUNC_4 (VAR_17))));
       FUNC_11 (VAR_7
    ? FUNC_14 (VAR_27, VAR_27, VAR_28)
    : FUNC_13 (VAR_27, VAR_27, VAR_28));
       VAR_17 = FUNC_20 (VAR_17, VAR_27);
     }
   else if (! FUNC_21 (VAR_17))
     {
       rtx VAR_29;
       VAR_29 = FUNC_18 (VAR_6, VAR_18);
       FUNC_11 (FUNC_19 (VAR_13, VAR_29, FUNC_10 (VAR_17, 0)));
       VAR_17 = FUNC_20 (VAR_17, VAR_29);
     }

   VAR_27 = FUNC_10 (VAR_17, 0);
   if (FUNC_3 (VAR_27) == VAR_3 || FUNC_3 (VAR_27) == VAR_1)
     VAR_27 = FUNC_10 (VAR_27, 0);



   if (FUNC_9 (VAR_27)
       && FUNC_8 (VAR_27) >= FUNC_8 (VAR_16)
       && FUNC_8 (VAR_27) < FUNC_8 (VAR_16) + VAR_22)
     VAR_25 = FUNC_8 (VAR_27) - FUNC_8 (VAR_16);
 }

      if (FUNC_3 (VAR_16) == VAR_2 && FUNC_6 (VAR_18))
 {
   rtx VAR_30;

   if (FUNC_3 (FUNC_10 (VAR_16, 0)) == VAR_5
       || FUNC_3 (FUNC_10 (VAR_16, 0)) == VAR_4)
     {
       rtx VAR_31;
       VAR_30 = FUNC_10 (FUNC_10 (VAR_16, 0), 0);
       VAR_31 = (FUNC_3 (FUNC_10 (VAR_16, 0)) == VAR_5
      ? FUNC_2 (FUNC_5 (FUNC_4 (VAR_16)))
      : FUNC_2 (-FUNC_5 (FUNC_4 (VAR_16))));




       if (VAR_10)
  {
    rtx VAR_32 = FUNC_22 (VAR_20, VAR_17, VAR_19, 0);
    FUNC_11 (VAR_7
        ? (VAR_9
    ? FUNC_16 (VAR_30, VAR_30, VAR_31, VAR_32)
    : FUNC_17 (VAR_30, VAR_30, VAR_31, VAR_32))
        : FUNC_15 (VAR_30, VAR_30, VAR_31, VAR_32));
    VAR_26 = 1;
  }
       else
  FUNC_11 (VAR_7
      ? FUNC_14 (VAR_30, VAR_30, VAR_31)
      : FUNC_13 (VAR_30, VAR_30, VAR_31));
       VAR_16 = FUNC_20 (VAR_16, VAR_30);
     }
   else
     FUNC_12 (FUNC_21 (VAR_16));
 }

      for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++)
 {

   ++VAR_25;
   if (VAR_25 == VAR_22)
     VAR_25 = 0;



   if (VAR_25 == 0 && VAR_26)
     continue;

   FUNC_11 (FUNC_19 (VAR_13,
      FUNC_22 (VAR_20, VAR_16, VAR_19,
             VAR_25 * VAR_21),
      FUNC_22 (VAR_20, VAR_17, VAR_19,
             VAR_25 * VAR_21)));
 }
    }
}
