
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int RTX_CODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int,int ,int ,int) ;
 scalar_t__ VAR_20 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

int
FUNC_11 (enum machine_mode VAR_22, rtx VAR_23, RTX_CODE VAR_24,
     int VAR_25)
{
  bool VAR_26;
  enum rtx_code VAR_27 = FUNC_1 (VAR_23);

  if (FUNC_5 (VAR_23, VAR_25))
    return 1;

  VAR_26 = (VAR_16
       && (VAR_22 == VAR_3
    || (VAR_22 == VAR_2 && (VAR_17 || VAR_18))));

  if (VAR_27 == VAR_9 || VAR_27 == VAR_11
      || ((VAR_27 == VAR_12 || VAR_27 == VAR_8)
   && (VAR_26 || FUNC_3 (VAR_22) <= 4)))
    return FUNC_5 (FUNC_4 (VAR_23, 0), VAR_25);

  else if ((VAR_27 == VAR_10 || VAR_27 == VAR_13)
    && FUNC_5 (FUNC_4 (VAR_23, 0), VAR_25)
    && FUNC_1 (FUNC_4 (VAR_23, 1)) == VAR_7
    && FUNC_9 (FUNC_4 (FUNC_4 (VAR_23, 1), 0), FUNC_4 (VAR_23, 0)))
    {
      rtx VAR_28 = FUNC_4 (FUNC_4 (VAR_23, 1), 1);



      if (VAR_26
   && FUNC_1 (VAR_23) == VAR_10
   && FUNC_1 (VAR_28) == VAR_14)
 return 0;

      return ((VAR_26 || FUNC_3 (VAR_22) <= 4)
       && FUNC_6 (VAR_22, VAR_28, VAR_24, VAR_25));
    }



  else if (VAR_21
    && (VAR_27 == VAR_4
        || (VAR_27 == VAR_0
     && FUNC_1 (FUNC_4 (VAR_23, 0)) == VAR_7
     && FUNC_1 (FUNC_4 (FUNC_4 (VAR_23, 0), 0)) == VAR_4
     && FUNC_1 (FUNC_4 (FUNC_4 (VAR_23, 0), 1)) == VAR_1)))
    return 1;

  else if (VAR_22 == VAR_19)
    return 0;

  else if (VAR_27 == VAR_7)
    {
      rtx VAR_29 = FUNC_4 (VAR_23, 0);
      rtx VAR_30 = FUNC_4 (VAR_23, 1);

      return ((FUNC_5 (VAR_29, VAR_25)
        && FUNC_6 (VAR_22, VAR_30, VAR_24, VAR_25))
       || (FUNC_5 (VAR_30, VAR_25)
    && FUNC_6 (VAR_22, VAR_29, VAR_24, VAR_25)));
    }
  else if (FUNC_2 (VAR_22) != VAR_6
    && VAR_27 == VAR_15
    && FUNC_0 (VAR_23)
    && ! (VAR_20
   && FUNC_10 (FUNC_7 (VAR_23))
   && ! FUNC_8 (FUNC_7 (VAR_23))))
    return 1;

  return 0;
}
