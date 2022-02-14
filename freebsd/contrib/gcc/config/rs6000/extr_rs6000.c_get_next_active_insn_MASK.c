
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static rtx
FUNC_7 (rtx VAR_4, rtx VAR_5)
{
  if (VAR_4 == VAR_2 || VAR_4 == VAR_5)
    return VAR_2;

  while (1)
    {
      VAR_4 = FUNC_4 (VAR_4);
      if (VAR_4 == VAR_2 || VAR_4 == VAR_5)
 return VAR_2;

      if (FUNC_0 (VAR_4)
   || FUNC_3 (VAR_4)
   || (FUNC_5 (VAR_4)
       && FUNC_1 (FUNC_6 (VAR_4)) != VAR_3
       && FUNC_1 (FUNC_6 (VAR_4)) != VAR_0
       && FUNC_2 (VAR_4) != VAR_1))
 break;
    }
  return VAR_4;
}
