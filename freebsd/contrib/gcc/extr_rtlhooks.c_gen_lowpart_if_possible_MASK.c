
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,int ) ;

rtx
FUNC_10 (enum machine_mode VAR_4, rtx VAR_5)
{
  rtx VAR_6 = FUNC_8 (VAR_4, VAR_5);

  if (VAR_6)
    return VAR_6;
  else if (FUNC_3 (VAR_5))
    {

      int VAR_7 = 0;
      rtx VAR_8;

      if (VAR_3)
 VAR_7 = (FUNC_2 (FUNC_1 (FUNC_0 (VAR_5)), VAR_1)
    - FUNC_2 (FUNC_1 (VAR_4), VAR_1));
      if (VAR_0)


 VAR_7 -= (FUNC_4 (VAR_1, FUNC_1 (VAR_4))
     - FUNC_4 (VAR_1, FUNC_1 (FUNC_0 (VAR_5))));

      VAR_8 = FUNC_6 (VAR_5, VAR_4, VAR_7);
      if (! FUNC_9 (VAR_4, FUNC_5 (VAR_8, 0)))
 return 0;

      return VAR_8;
    }
  else if (VAR_4 != FUNC_0 (VAR_5) && FUNC_0 (VAR_5) != VAR_2)
    return FUNC_7 (VAR_4, VAR_5);
  else
    return 0;
}
