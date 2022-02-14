
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_5, int VAR_6)
{
  enum machine_mode VAR_7, VAR_8;
  int VAR_9;
  if (FUNC_0 (VAR_5) != VAR_1)
    return 0;
  VAR_7 = FUNC_1 (VAR_5);
  VAR_8 = FUNC_1 (FUNC_4 (VAR_5));
  VAR_9 = VAR_6 * VAR_2 + FUNC_3 (VAR_5);




  if (FUNC_3 (VAR_5) == 0
      && FUNC_2 (VAR_8) < FUNC_2 (VAR_7))
    {
      int VAR_10 = (FUNC_2 (VAR_8) - FUNC_2 (VAR_7));
      if (VAR_3)
 VAR_9 += (VAR_10 / VAR_2) * VAR_2;
      if (VAR_0)
 VAR_9 += VAR_10 % VAR_2;
    }
  if (VAR_9 >= FUNC_2 (VAR_8)
      || VAR_9 <= -FUNC_2 (VAR_4))
    return 1;
  return 0;
}
