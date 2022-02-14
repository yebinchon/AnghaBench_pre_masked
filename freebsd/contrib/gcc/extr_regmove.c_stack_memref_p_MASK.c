
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_3 (rtx VAR_3)
{
  if (!FUNC_1 (VAR_3))
    return 0;
  VAR_3 = FUNC_2 (VAR_3, 0);

  if (VAR_3 == VAR_2)
    return 1;
  if (FUNC_0 (VAR_3) == VAR_1
      && FUNC_2 (VAR_3, 0) == VAR_2
      && FUNC_0 (FUNC_2 (VAR_3, 1)) == VAR_0)
    return 1;

  return 0;
}
