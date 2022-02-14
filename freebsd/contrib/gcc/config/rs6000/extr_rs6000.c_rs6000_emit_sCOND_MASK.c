
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int ) ;
 int VAR_17 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int ,int,int ,int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;

void
FUNC_16 (enum rtx_code VAR_21, rtx VAR_22)
{
  rtx VAR_23;
  enum machine_mode VAR_24;
  enum rtx_code VAR_25;

  VAR_23 = FUNC_14 (VAR_21);
  VAR_25 = FUNC_0 (VAR_23);

  if (VAR_10 && VAR_18
      && !VAR_11 && VAR_12)
    {
      rtx VAR_26;

      FUNC_2 (VAR_23, VAR_9);
      VAR_26 = FUNC_3 (VAR_23, 0);

      FUNC_6 (VAR_25 == VAR_7 || VAR_25 == VAR_2);

      if (VAR_25 == VAR_7)
 FUNC_5 (FUNC_7 (VAR_26, VAR_26));

      FUNC_5 (FUNC_8 (VAR_22, VAR_26));
      return;
    }

  if (VAR_25 == VAR_7
      || VAR_25 == VAR_3 || VAR_25 == VAR_5
      || VAR_25 == VAR_4 || VAR_25 == VAR_6
      || VAR_25 == VAR_8 || VAR_25 == VAR_14 || VAR_25 == VAR_15)
    {
      rtx VAR_27 = FUNC_9 (VAR_0);
      rtx VAR_28, VAR_29;
      enum machine_mode VAR_30;

      VAR_30 = FUNC_1 (FUNC_3 (VAR_23, 0));

      VAR_29 = FUNC_13 (FUNC_15 (VAR_30, VAR_25),
         VAR_9, FUNC_3 (VAR_23, 0), VAR_17);
      VAR_28 = FUNC_10 (VAR_0, VAR_29, VAR_17);
      FUNC_5 (FUNC_12 (VAR_16, VAR_27, VAR_28));
      VAR_23 = FUNC_11 (VAR_16, VAR_27, VAR_17);
    }

  VAR_24 = FUNC_1 (VAR_19);
  if (VAR_24 == VAR_16)
    VAR_24 = FUNC_1 (VAR_20);

  if (VAR_13 && (VAR_24 == VAR_1 || VAR_18))
    {
      FUNC_2 (VAR_23, VAR_1);
      FUNC_4 (VAR_22, VAR_23, 0);
    }
  else
    {
      FUNC_2 (VAR_23, VAR_9);
      FUNC_5 (FUNC_12 (VAR_16, VAR_22, VAR_23));
    }
}
