
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

int
FUNC_0 (rtx VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (VAR_1[VAR_3] == VAR_2)
      return 1;

  return 0;
}
