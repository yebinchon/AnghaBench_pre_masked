
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int) ;
 int FUNC_14 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;

rtx
FUNC_21 (rtx VAR_6, rtx VAR_7)
{
  enum machine_mode VAR_8 = FUNC_2 (VAR_6);
  rtx VAR_9 = VAR_1;
  rtx VAR_10, VAR_11;

  FUNC_13 (VAR_8 != VAR_0
       && (FUNC_2 (VAR_7) == VAR_8 || FUNC_2 (VAR_7) == VAR_3));

  if (FUNC_1 (VAR_7))
    {
      if (VAR_5
   && FUNC_6 (FUNC_2 (VAR_6))
   && (VAR_10 = FUNC_10 (VAR_6, VAR_7)))
 return VAR_10;

      VAR_9 = VAR_7;

      if (!FUNC_3 (VAR_7))
 {
   VAR_7 = FUNC_12 (VAR_8, VAR_7);




   if (!VAR_7)
     VAR_7 = VAR_9;
   else
     VAR_7 = FUNC_19 (VAR_7);
 }
    }



  if (FUNC_4 (VAR_6)
      && ((! FUNC_14 (FUNC_2 (VAR_6), FUNC_9 (VAR_6, 0))
    && ! FUNC_15 (VAR_6, FUNC_2 (VAR_6)))
   || (VAR_4
       && FUNC_0 (FUNC_9 (VAR_6, 0)))))
    VAR_6 = FUNC_20 (VAR_6);

  if (FUNC_4 (VAR_7)
      && (! FUNC_14 (FUNC_2 (VAR_7), FUNC_9 (VAR_7, 0))
   || (VAR_4
       && FUNC_0 (FUNC_9 (VAR_7, 0)))))
    VAR_7 = FUNC_20 (VAR_7);

  FUNC_13 (VAR_8 != VAR_0);

  VAR_10 = FUNC_11 (VAR_6, VAR_7);

  if (VAR_9 && FUNC_5 (VAR_6)
      && (VAR_11 = FUNC_18 (VAR_10)) != VAR_1
      && FUNC_7 (VAR_11) == VAR_6
      && ! FUNC_16 (VAR_9, FUNC_8 (VAR_11)))
    FUNC_17 (VAR_10, VAR_2, VAR_9);

  return VAR_10;
}
