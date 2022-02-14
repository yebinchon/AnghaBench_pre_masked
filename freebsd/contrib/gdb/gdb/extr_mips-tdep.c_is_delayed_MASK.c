
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pinfo; unsigned long mask; unsigned long match; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_0 (unsigned long VAR_6)
{
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
    if (VAR_5[VAR_7].pinfo != VAR_2
 && (VAR_6 & VAR_5[VAR_7].mask) == VAR_5[VAR_7].match)
      break;
  return (VAR_7 < VAR_4
   && (VAR_5[VAR_7].pinfo & (VAR_3
           | VAR_0
           | VAR_1)));
}
