
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;

enum reg_class
FUNC_7 (enum reg_class VAR_9,
       enum machine_mode VAR_10, rtx VAR_11)
{
  if (FUNC_6 (VAR_11, VAR_10))
    return VAR_0;

  if (FUNC_5 (VAR_3, VAR_9)
      && VAR_10 == VAR_8
      && FUNC_1 (VAR_11) == VAR_5
      && FUNC_1 (FUNC_4 (VAR_11, 0)) == VAR_7
      && FUNC_1 (FUNC_4 (FUNC_4 (VAR_11, 0), 1)) == VAR_2
      && !FUNC_0 (FUNC_3 (FUNC_4 (FUNC_4 (VAR_11, 0), 1))
    + FUNC_2 (VAR_10) - 1))
    return VAR_0;

  if (FUNC_5 (VAR_1, VAR_9))
    return VAR_4;

  return VAR_6;
}
