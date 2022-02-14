
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

bool
FUNC_4 (rtx VAR_3, rtx VAR_4, rtx VAR_5)
{
  HOST_WIDE_INT VAR_6, VAR_7;

  if (!VAR_1
      || !FUNC_3 (VAR_3, VAR_2)
      || FUNC_1 (FUNC_0 (VAR_3)) > VAR_0)
    return 0;

  VAR_6 = FUNC_2 (VAR_4);
  VAR_7 = FUNC_2 (VAR_5);

  if (VAR_6 <= 0 || VAR_6 >= FUNC_1 (FUNC_0 (VAR_3))
      || VAR_7 < 0 || VAR_7 + VAR_6 > FUNC_1 (FUNC_0 (VAR_3)))
    return 0;

  return 1;
}
