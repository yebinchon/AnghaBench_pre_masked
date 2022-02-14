
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_0, tree VAR_1, HOST_WIDE_INT VAR_2)
{
  tree VAR_3;
  HOST_WIDE_INT VAR_4;

  if (! FUNC_0 (VAR_1))
    return 0;

  if (FUNC_6 (VAR_0))
    {
      VAR_3 = FUNC_4 (VAR_0);
      VAR_4 = FUNC_5 (VAR_0);
    }
  else if (FUNC_3 (VAR_0))
    {
      VAR_3 = FUNC_2 (VAR_0);
      VAR_4 = FUNC_1 (VAR_0);
    }
  else
    return 0;

  if (! VAR_3 || ! FUNC_0 (VAR_3))
    return 0;

  VAR_1 = FUNC_7 (VAR_1);
  VAR_3 = FUNC_7 (VAR_3);

  return (VAR_1 == VAR_3 && VAR_2 == VAR_4);
}
