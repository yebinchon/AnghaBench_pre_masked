
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_11 (rtx VAR_3)
{
  rtx VAR_4 = FUNC_3 (VAR_3);
  rtx VAR_5;

  if (VAR_4 == 0)
    return 0;

  if (FUNC_1 (VAR_4) == VAR_0)
    return FUNC_0 (VAR_4);

  if (!FUNC_6 (VAR_3) || !FUNC_8 (VAR_3))
    return 0;

  VAR_5 = FUNC_4 (FUNC_9 (VAR_3));

  if (FUNC_5 (VAR_5, 2) == VAR_2)
    return FUNC_5 (VAR_5, 0);
  else if (FUNC_5 (VAR_5, 1) == VAR_2)
    {
      rtx VAR_6 = FUNC_5 (VAR_5, 0);
      enum rtx_code VAR_7 = FUNC_10 (VAR_6, VAR_3);

      if (VAR_7 == VAR_1)
 return 0;
      return FUNC_7 (VAR_7, FUNC_2 (VAR_6), FUNC_5 (VAR_6, 0),
        FUNC_5 (VAR_6, 1));
    }

  return 0;
}
