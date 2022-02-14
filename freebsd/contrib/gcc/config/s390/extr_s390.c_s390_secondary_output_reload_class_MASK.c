
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
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int,int) ;

enum reg_class
FUNC_6 (enum reg_class VAR_13,
        enum machine_mode VAR_14, rtx VAR_15)
{
  if ((VAR_10 ? (VAR_14 == VAR_12 || VAR_14 == VAR_11)
                    : (VAR_14 == VAR_4 || VAR_14 == VAR_3))
      && FUNC_5 (VAR_6, VAR_13)
      && FUNC_1 (VAR_15) == VAR_7
      && FUNC_1 (FUNC_4 (VAR_15, 0)) == VAR_9
      && FUNC_1 (FUNC_4 (FUNC_4 (VAR_15, 0), 0)) == VAR_9
      && FUNC_1 (FUNC_4 (FUNC_4 (VAR_15, 0), 1)) == VAR_2
      && !FUNC_0 (FUNC_3 (FUNC_4 (FUNC_4 (VAR_15, 0), 1))
    + FUNC_2 (VAR_14) - 1))
    return VAR_0;

  if (FUNC_5 (VAR_5, VAR_13)
      && VAR_14 == VAR_11
      && FUNC_1 (VAR_15) == VAR_7
      && FUNC_1 (FUNC_4 (VAR_15, 0)) == VAR_9
      && FUNC_1 (FUNC_4 (FUNC_4 (VAR_15, 0), 1)) == VAR_2
      && !FUNC_0 (FUNC_3 (FUNC_4 (FUNC_4 (VAR_15, 0), 1))
    + FUNC_2 (VAR_14) - 1))
    return VAR_0;

  if (FUNC_5 (VAR_1, VAR_13))
    return VAR_6;

  return VAR_8;
}
