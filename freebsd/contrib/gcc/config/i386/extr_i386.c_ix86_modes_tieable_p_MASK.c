
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;

bool
FUNC_3 (enum machine_mode VAR_5, enum machine_mode VAR_6)
{
  if (VAR_5 == VAR_6)
    return 1;

  if (FUNC_2 (VAR_5)
      && FUNC_2 (VAR_6))
    return 1;




  if (VAR_6 == VAR_4)
    return VAR_5 == VAR_3 || VAR_5 == VAR_0;



  if (VAR_6 == VAR_0)
    return VAR_5 == VAR_3;



  if (FUNC_0 (VAR_6) >= 8
      && FUNC_1 (VAR_2, VAR_6))
    return FUNC_1 (VAR_2, VAR_5);



  if (FUNC_0 (VAR_6) == 8
      && FUNC_1 (VAR_1, VAR_6))
    return FUNC_1 (VAR_1, VAR_5);

  return 0;
}
