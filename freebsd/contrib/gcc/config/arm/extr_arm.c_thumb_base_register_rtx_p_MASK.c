
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_4 (rtx VAR_8, enum machine_mode VAR_9, int VAR_10)
{
  int VAR_11;

  if (FUNC_0 (VAR_8) != VAR_4)
    return 0;

  VAR_11 = FUNC_2 (VAR_8);

  if (VAR_10)
    return FUNC_3 (VAR_11, VAR_9);

  return (VAR_11 <= VAR_2
   || VAR_11 > VAR_3
   || VAR_11 == VAR_1
   || (FUNC_1 (VAR_9) >= 4
       && (VAR_11 == VAR_5
    || VAR_11 >= VAR_0
    || VAR_8 == VAR_7
    || VAR_8 == VAR_6)));
}
