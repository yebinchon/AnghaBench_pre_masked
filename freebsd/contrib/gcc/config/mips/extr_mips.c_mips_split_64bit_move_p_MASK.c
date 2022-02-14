
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool
FUNC_2 (rtx VAR_2, rtx VAR_3)
{
  if (VAR_0)
    return 0;


  if (FUNC_0 (VAR_3) && FUNC_0 (VAR_2))
    return 0;



  if (VAR_1 > 1)
    {
      if (FUNC_0 (VAR_2) && FUNC_1 (VAR_3))
 return 0;
      if (FUNC_0 (VAR_3) && FUNC_1 (VAR_2))
 return 0;
    }
  return 1;
}
