
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int VAR_5 ;

int
FUNC_9 (rtx VAR_6, enum machine_mode VAR_7)
{

  if (! VAR_5
      && FUNC_0 (VAR_6) == VAR_3 && FUNC_3 (FUNC_5 (VAR_6)))
    {
      int VAR_8 = FUNC_4 (VAR_6);
      rtx VAR_9 = FUNC_5 (VAR_6);

      if (VAR_7 != VAR_4 && FUNC_1 (VAR_6) != VAR_7)
 return 0;






      return ((VAR_8 == 0 && FUNC_7 (FUNC_6 (VAR_9, 0), VAR_2))
       || (FUNC_0 (FUNC_6 (VAR_9, 0)) == VAR_1
    && FUNC_0 (FUNC_6 (FUNC_6 (VAR_9, 0), 1)) == VAR_0
    && FUNC_2 (FUNC_6 (FUNC_6 (VAR_9, 0), 1)) == -VAR_8
    && FUNC_7 (FUNC_6 (FUNC_6 (VAR_9, 0), 0), VAR_2)));
    }

  return (FUNC_3 (VAR_6)
   && FUNC_8 (VAR_6, VAR_7)
   && FUNC_7 (FUNC_6 (VAR_6, 0), VAR_2));
}
