
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_6 (rtx VAR_4, rtx VAR_5)
{

  if (!FUNC_3 (VAR_5) || FUNC_2 (FUNC_1 (VAR_5)) != VAR_0)
    return 0;

  if (FUNC_0 (VAR_4) == VAR_1
      || FUNC_0 (VAR_4) == VAR_3)
    VAR_4 = FUNC_5 (VAR_4, 0);

  return FUNC_0 (VAR_4) == VAR_2
  && FUNC_4 (VAR_4) == VAR_5
  && FUNC_2 (FUNC_1 (VAR_4)) == VAR_0;
}
