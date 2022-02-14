
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int ,int ,int ,int,int,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int,int ,scalar_t__,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (scalar_t__,scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int,scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_20 (scalar_t__,int ) ;

void
FUNC_21 (rtx VAR_10, rtx VAR_11, rtx VAR_12)
{
  if (FUNC_1 (VAR_12) == VAR_0 && FUNC_3 (VAR_12) >= 0 && FUNC_3 (VAR_12) <= 256)
    {
      if (FUNC_3 (VAR_12) > 0)
        FUNC_9 (FUNC_17 (VAR_10, VAR_11, FUNC_0 (FUNC_3 (VAR_12) - 1)));
    }

  else if (VAR_4)
    {
      FUNC_9 (FUNC_16 (VAR_10, VAR_11, FUNC_7 (VAR_3, VAR_12, 1)));
    }

  else
    {
      rtx VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
      rtx VAR_18 = FUNC_15 ();
      rtx VAR_19 = FUNC_15 ();
      rtx VAR_20 = FUNC_15 ();
      enum machine_mode VAR_21;

      VAR_21 = FUNC_2 (VAR_12);
      if (VAR_21 == VAR_5)
        VAR_21 = VAR_3;

      VAR_13 = FUNC_18 (VAR_3);
      VAR_14 = FUNC_18 (VAR_3);
      VAR_15 = FUNC_18 (VAR_21);
      VAR_16 = FUNC_18 (VAR_21);

      FUNC_6 (VAR_15, VAR_12, 1);
      FUNC_8 (VAR_15, VAR_7,
          VAR_1, VAR_2, VAR_21, 1, VAR_20);

      FUNC_12 (VAR_13, FUNC_14 (FUNC_4 (VAR_10, 0), VAR_2));
      FUNC_12 (VAR_14, FUNC_14 (FUNC_4 (VAR_11, 0), VAR_2));
      VAR_10 = FUNC_5 (VAR_10, VAR_5, VAR_13);
      VAR_11 = FUNC_5 (VAR_11, VAR_5, VAR_14);

      VAR_17 = FUNC_13 (VAR_21, VAR_6, VAR_15, VAR_8, VAR_15, 1, 0);
      if (VAR_17 != VAR_15)
        FUNC_12 (VAR_15, VAR_17);

      VAR_17 = FUNC_13 (VAR_21, VAR_9, VAR_15, FUNC_0 (8), VAR_16, 1, 0);
      if (VAR_17 != VAR_16)
        FUNC_12 (VAR_16, VAR_17);

      FUNC_8 (VAR_16, VAR_7,
          VAR_1, VAR_2, VAR_21, 1, VAR_19);

      FUNC_11 (VAR_18);

      FUNC_9 (FUNC_17 (VAR_10, VAR_11, FUNC_0 (255)));
      FUNC_20 (VAR_13,
    FUNC_19 (VAR_3, VAR_13, FUNC_0 (256)));
      FUNC_20 (VAR_14,
    FUNC_19 (VAR_3, VAR_14, FUNC_0 (256)));

      VAR_17 = FUNC_13 (VAR_21, VAR_6, VAR_16, VAR_8, VAR_16, 1, 0);
      if (VAR_17 != VAR_16)
        FUNC_12 (VAR_16, VAR_17);

      FUNC_8 (VAR_16, VAR_7,
          VAR_1, VAR_2, VAR_21, 1, VAR_19);

      FUNC_10 (VAR_18);
      FUNC_11 (VAR_19);

      FUNC_9 (FUNC_17 (VAR_10, VAR_11,
       FUNC_7 (VAR_3, VAR_15, 1)));
      FUNC_11 (VAR_20);
    }
}
