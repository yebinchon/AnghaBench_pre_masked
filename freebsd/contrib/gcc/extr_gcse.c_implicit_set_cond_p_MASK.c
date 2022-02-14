
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_2)
{
  enum machine_mode VAR_3 = FUNC_1 (FUNC_5 (VAR_2, 0));
  rtx VAR_4 = FUNC_5 (VAR_2, 1);



  if (FUNC_2 (VAR_3))
    {





      if (FUNC_0 (VAR_4) == VAR_0)
 {
   REAL_VALUE_TYPE VAR_5;
   FUNC_4 (VAR_5, VAR_4);
   if (FUNC_3 (VAR_5, VAR_1))
     return 0;
 }
      else
 return 0;
    }

  return FUNC_6 (VAR_4);
}
