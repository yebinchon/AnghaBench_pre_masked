
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int,int ,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ,int ) ;

bool
FUNC_19 (enum machine_mode VAR_6, rtx VAR_7, rtx VAR_8)
{
  if (!FUNC_17 (VAR_7, VAR_6) && !FUNC_16 (VAR_8, VAR_6))
    {
      FUNC_8 (VAR_7, FUNC_9 (VAR_6, VAR_8));
      return 1;
    }


  if (FUNC_1 (VAR_6) <= VAR_5
      && FUNC_5 (VAR_8) && FUNC_3 (FUNC_4 (VAR_8))
      && FUNC_5 (VAR_7) && FUNC_2 (FUNC_4 (VAR_7)))
    {
      int VAR_9 = FUNC_4 (VAR_8) == VAR_1 ? VAR_2 : VAR_1;
      if (FUNC_1 (VAR_6) <= 4)
 FUNC_7 (FUNC_11 (FUNC_12 (VAR_4, FUNC_4 (VAR_7)),
      FUNC_12 (VAR_4, FUNC_4 (VAR_8)),
      FUNC_12 (VAR_4, VAR_9)));
      else
 FUNC_7 (FUNC_10 (FUNC_12 (VAR_0, FUNC_4 (VAR_7)),
      FUNC_12 (VAR_0, FUNC_4 (VAR_8)),
      FUNC_12 (VAR_0, VAR_9)));
      return 1;
    }



  if (FUNC_0 (VAR_8) && !FUNC_15 (VAR_8, VAR_6))
    {
      FUNC_14 (VAR_6, VAR_7, VAR_8);
      FUNC_18 (FUNC_13 (), VAR_3, FUNC_6 (VAR_8));
      return 1;
    }
  return 0;
}
