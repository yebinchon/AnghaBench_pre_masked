
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;

int
FUNC_0 (void)
{
  int VAR_10;


  for (VAR_10 = 13; VAR_10 <= 31; VAR_10++)
    if (VAR_9[VAR_10]
 && (! VAR_6[VAR_10]
     || (VAR_10 == VAR_3
  && ((VAR_2 == VAR_1 && VAR_8 != 0)
      || (VAR_2 == VAR_0 && VAR_8)
      || (VAR_5 && VAR_4)))))
      break;
  return VAR_10;
}
