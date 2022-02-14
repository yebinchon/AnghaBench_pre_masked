
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,int ) ;

int
FUNC_21 (rtx VAR_17, rtx VAR_18, rtx VAR_19, rtx VAR_20)
{
  enum rtx_code VAR_21 = FUNC_1 (VAR_18);
  rtx VAR_22 = VAR_15;
  rtx VAR_23 = VAR_16;
  REAL_VALUE_TYPE VAR_24;
  enum machine_mode VAR_25 = FUNC_2 (VAR_22);
  enum machine_mode VAR_26 = FUNC_2 (VAR_17);
  rtx VAR_27;
  bool VAR_28;


  if (FUNC_2 (VAR_23) != VAR_25


      && (!VAR_7 || !FUNC_20 (VAR_23, VAR_12)))
    return 0;
  if (FUNC_2 (VAR_19) != VAR_26)
    return 0;
  if (FUNC_2 (VAR_20) != VAR_26)
    return 0;



  if (! VAR_14)
    {
      if (VAR_7)
 return FUNC_18 (VAR_17, VAR_18, VAR_19, VAR_20);
      return 0;
    }
  else if (VAR_4 && VAR_6 && !VAR_5
    && FUNC_6 (VAR_25))
    return 0;

  VAR_28 = VAR_23 == FUNC_0 (VAR_25);






  if (FUNC_6 (VAR_25)
      && VAR_13 && ! VAR_28)
    return 0;



  if (VAR_21 == VAR_10 || VAR_21 == VAR_8 || VAR_21 == VAR_11 || VAR_21 == VAR_3
      || VAR_21 == VAR_2 || VAR_21 == VAR_1 || VAR_21 == VAR_9)
    {
      VAR_21 = FUNC_17 (VAR_21);
      VAR_27 = VAR_19;
      VAR_19 = VAR_20;
      VAR_20 = VAR_27;
    }



  if (VAR_21 == 129 && FUNC_4 (VAR_25))
    return 0;

  if (FUNC_1 (VAR_23) == VAR_0)
    FUNC_5 (VAR_24, VAR_23);






  if (FUNC_3 (VAR_25)
      && VAR_21 != 132 && VAR_21 != 128
      && (FUNC_1 (VAR_23) != VAR_0 || FUNC_16 (&VAR_24))

      && ((! FUNC_19 (VAR_22, VAR_20) && ! FUNC_19 (VAR_23, VAR_20))
   || (! FUNC_19 (VAR_22, VAR_19)
       && ! FUNC_19 (VAR_23, VAR_19))))
    return 0;




  if (! VAR_28)
    {
      VAR_27 = FUNC_9 (VAR_25);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27,
         FUNC_13 (VAR_25, VAR_22, VAR_23)));
      VAR_22 = VAR_27;
      VAR_23 = FUNC_0 (VAR_25);
    }



  if (! FUNC_4 (VAR_25))
    switch (VAR_21)
      {
      case 132:
 VAR_21 = 131;
 VAR_27 = VAR_19;
 VAR_19 = VAR_20;
 VAR_20 = VAR_27;
 break;
      case 128:
 VAR_21 = 133;
 break;
      case 129:
 VAR_21 = 134;
 break;
      default:
 break;
      }


  switch (VAR_21)
    {
    case 133:
      break;

    case 131:
      VAR_27 = FUNC_9 (VAR_25);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27, FUNC_14 (VAR_25, VAR_22)));
      VAR_22 = VAR_27;
      break;

    case 130:
      VAR_27 = FUNC_9 (VAR_25);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27, FUNC_10 (VAR_25, VAR_22)));
      VAR_22 = VAR_27;
      break;

    case 134:
      VAR_27 = FUNC_9 (VAR_25);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27,
         FUNC_14 (VAR_25,
        FUNC_10 (VAR_25, VAR_22))));
      VAR_22 = VAR_27;
      break;

    case 128:

      VAR_27 = FUNC_9 (VAR_26);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27,
         FUNC_12 (VAR_26,
          FUNC_11 (VAR_12,
        VAR_22, VAR_23),
          VAR_19, VAR_20)));
      VAR_20 = VAR_19;
      VAR_19 = VAR_27;

      VAR_27 = FUNC_9 (VAR_25);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27, FUNC_14 (VAR_25, VAR_22)));
      VAR_22 = VAR_27;
      break;

    case 132:

      VAR_27 = FUNC_9 (VAR_26);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27,
         FUNC_12 (VAR_26,
          FUNC_11 (VAR_12,
        VAR_22, VAR_23),
          VAR_19, VAR_20)));
      VAR_19 = VAR_20;
      VAR_20 = VAR_27;

      VAR_27 = FUNC_9 (VAR_25);
      FUNC_7 (FUNC_15 (VAR_12, VAR_27, FUNC_14 (VAR_25, VAR_22)));
      VAR_22 = VAR_27;
      break;

    default:
      FUNC_8 ();
    }

  FUNC_7 (FUNC_15 (VAR_12, VAR_17,
     FUNC_12 (VAR_26,
      FUNC_11 (VAR_12,
           VAR_22, VAR_23),
      VAR_19, VAR_20)));
  return 1;
}
