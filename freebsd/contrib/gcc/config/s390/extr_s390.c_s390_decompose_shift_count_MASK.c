
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

bool
FUNC_4 (rtx VAR_5, rtx *VAR_6, HOST_WIDE_INT *VAR_7)
{
  HOST_WIDE_INT VAR_8 = 0;



  if (FUNC_0 (VAR_5) == VAR_0)
    {
      VAR_8 = FUNC_1 (VAR_5);
      VAR_5 = VAR_1;
    }
  if (VAR_5 && FUNC_0 (VAR_5) == VAR_2 && FUNC_0 (FUNC_3 (VAR_5, 1)) == VAR_0)
    {
      VAR_8 = FUNC_1 (FUNC_3 (VAR_5, 1));
      VAR_5 = FUNC_3 (VAR_5, 0);
    }
  while (VAR_5 && FUNC_0 (VAR_5) == VAR_4)
    VAR_5 = FUNC_2 (VAR_5);

  if (VAR_5 && FUNC_0 (VAR_5) != VAR_3)
    return 0;

  if (VAR_7)
    *VAR_7 = VAR_8;
  if (VAR_6)
    *VAR_6 = VAR_5;

   return 1;
}
