
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static enum rtx_code
FUNC_6 (rtx VAR_9)
{
  if (FUNC_1 (VAR_9))
    return VAR_2;
  if (FUNC_0 (VAR_9) == VAR_0)
    return VAR_1;
  if (FUNC_0 (VAR_9) == VAR_6)
    return VAR_4;
  if (FUNC_0 (VAR_9) == VAR_7)
    {
      if (FUNC_2 (VAR_9) == VAR_8)
 return VAR_4;
      else if (FUNC_0 (FUNC_3 (VAR_9)) == VAR_0)
 return VAR_1;
      else
 return VAR_3;
    }
  if (FUNC_0 (VAR_9) == VAR_5)
    {
      int VAR_10;
      for (VAR_10 = FUNC_5 (VAR_9, 0) - 1; VAR_10 >= 0; VAR_10--)
 if (FUNC_0 (FUNC_4 (VAR_9, 0, VAR_10)) == VAR_0)
   return VAR_1;
 else if (FUNC_0 (FUNC_4 (VAR_9, 0, VAR_10)) == VAR_7
   && FUNC_2 (FUNC_4 (VAR_9, 0, VAR_10)) == VAR_8)
   return VAR_4;
 else if (FUNC_0 (FUNC_4 (VAR_9, 0, VAR_10)) == VAR_7
   && FUNC_0 (FUNC_3 (FUNC_4 (VAR_9, 0, VAR_10))) == VAR_0)
   return VAR_1;
    }
  return VAR_3;
}
