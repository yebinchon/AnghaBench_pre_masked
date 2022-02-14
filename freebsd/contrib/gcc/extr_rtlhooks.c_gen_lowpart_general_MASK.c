
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_12 (scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int,scalar_t__) ;
 int VAR_4 ;

rtx
FUNC_17 (enum machine_mode VAR_5, rtx VAR_6)
{
  rtx VAR_7 = FUNC_16 (VAR_5, VAR_6);

  if (VAR_7)
    return VAR_7;

  else if (FUNC_8 (VAR_6)

    || (FUNC_1 (VAR_6) == VAR_1
        && FUNC_0 (FUNC_2 (FUNC_10 (VAR_6)))))
    {
      VAR_7 = FUNC_16 (VAR_5, FUNC_13 (VAR_6));
      FUNC_15 (VAR_7 != 0);
      return VAR_7;
    }
  else
    {
      int VAR_8 = 0;


      FUNC_15 (FUNC_6 (VAR_6));


      if (FUNC_4 (FUNC_2 (VAR_6)) <= VAR_2
   && FUNC_9 (FUNC_2 (VAR_6))
   && FUNC_11 (FUNC_3 (VAR_5),
        FUNC_3 (FUNC_2 (VAR_6)))
   && ! VAR_4)
 return FUNC_17 (VAR_5, FUNC_14 (FUNC_2 (VAR_6), VAR_6));

      if (VAR_3)
 VAR_8 = (FUNC_5 (FUNC_4 (FUNC_2 (VAR_6)), VAR_2)
    - FUNC_5 (FUNC_4 (VAR_5), VAR_2));

      if (VAR_0)


 VAR_8 -= (FUNC_7 (VAR_2, FUNC_4 (VAR_5))
     - FUNC_7 (VAR_2, FUNC_4 (FUNC_2 (VAR_6))));

      return FUNC_12 (VAR_6, VAR_5, VAR_8);
    }
}
