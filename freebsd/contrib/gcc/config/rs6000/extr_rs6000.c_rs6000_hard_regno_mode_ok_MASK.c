
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13 (int VAR_6, enum machine_mode VAR_7)
{


  if (FUNC_8 (VAR_6))
    return FUNC_8 (VAR_6 + FUNC_7 (VAR_6, VAR_7) - 1);



  if (FUNC_4 (VAR_6))
    return
      (FUNC_9 (VAR_7)
       && !FUNC_3 (VAR_7)
       && FUNC_4 (VAR_6 + FUNC_7 (VAR_6, VAR_7) - 1))
      || (FUNC_5 (VAR_7) == VAR_1
   && FUNC_6 (VAR_7) == VAR_4);


  if (FUNC_2 (VAR_6))
    return FUNC_5 (VAR_7) == VAR_0;

  if (FUNC_12 (VAR_6))
    return VAR_7 == VAR_2;


  if (FUNC_0 (VAR_6))
    return FUNC_1 (VAR_7);


  if (FUNC_10 (VAR_6) && VAR_3 && FUNC_11 (VAR_7))
    return 1;




  return FUNC_6 (VAR_7) <= VAR_5;
}
