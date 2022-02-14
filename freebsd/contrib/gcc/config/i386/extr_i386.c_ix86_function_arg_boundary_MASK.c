
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

int
FUNC_4 (enum machine_mode VAR_3, tree VAR_4)
{
  int VAR_5;
  if (VAR_4)
    VAR_5 = FUNC_2 (VAR_4);
  else
    VAR_5 = FUNC_0 (VAR_3);
  if (VAR_5 < VAR_0)
    VAR_5 = VAR_0;
  if (!VAR_1)
    {







      if (!VAR_2)
 VAR_5 = VAR_0;
      else if (!VAR_4)
 {
   if (!FUNC_1 (VAR_3))
     VAR_5 = VAR_0;
 }
      else
 {
   if (!FUNC_3 (VAR_4))
     VAR_5 = VAR_0;
 }
    }
  if (VAR_5 > 128)
    VAR_5 = 128;
  return VAR_5;
}
