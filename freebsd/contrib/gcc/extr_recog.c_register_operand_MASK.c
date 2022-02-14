
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (int ,int) ;
 int VAR_6 ;

int
FUNC_12 (rtx VAR_7, enum machine_mode VAR_8)
{
  if (FUNC_1 (VAR_7) != VAR_8 && VAR_8 != VAR_5)
    return 0;

  if (FUNC_0 (VAR_7) == VAR_4)
    {
      rtx VAR_9 = FUNC_10 (VAR_7);







      if (! VAR_6 && FUNC_4 (VAR_9))
 return FUNC_11 (VAR_7, VAR_8);
      if (FUNC_9 (FUNC_1 (VAR_7))
   && FUNC_3 (FUNC_1 (VAR_7)) > FUNC_3 (FUNC_1 (VAR_9)))
 return 0;

      VAR_7 = VAR_9;
    }



  return (FUNC_8 (VAR_7)
   && (FUNC_5 (VAR_7) >= VAR_0
       || FUNC_6 (FUNC_5 (VAR_7)) != VAR_3));
}
