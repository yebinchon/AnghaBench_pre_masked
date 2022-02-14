
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_5)
{
  if (FUNC_4 (VAR_5)
      || (FUNC_1 (VAR_5) && FUNC_0 (VAR_5)
   && FUNC_3 (VAR_5) != VAR_4))
    VAR_5 = FUNC_6 (FUNC_3 (VAR_5), VAR_5);
  else if (FUNC_2 (VAR_5) == VAR_2 || FUNC_2 (VAR_5) == VAR_0
    || FUNC_2 (VAR_5) == VAR_1)
    {
      rtx VAR_6 = FUNC_8 (FUNC_5 (VAR_5, 0));
      rtx VAR_7 = FUNC_8 (FUNC_5 (VAR_5, 1));

      if (VAR_6 != FUNC_5 (VAR_5, 0) || VAR_7 != FUNC_5 (VAR_5, 1))
 VAR_5 = FUNC_7 (FUNC_2 (VAR_5), VAR_3, VAR_6, VAR_7);
    }

  return VAR_5;
}
