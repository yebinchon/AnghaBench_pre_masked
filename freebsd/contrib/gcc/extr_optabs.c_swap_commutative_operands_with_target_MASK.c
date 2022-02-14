
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3 (rtx VAR_0, rtx VAR_1, rtx VAR_2)
{
  int VAR_3 = FUNC_1 (VAR_1);
  int VAR_4 = FUNC_1 (VAR_2);

  if (VAR_3 < VAR_4)
    return 1;

  if (VAR_3 > VAR_4)
    return 0;



  if (VAR_0 == 0 || FUNC_0 (VAR_0))
    return (FUNC_0 (VAR_2) && !FUNC_0 (VAR_1)) || VAR_0 == VAR_2;
  else
    return FUNC_2 (VAR_2, VAR_0);
}
