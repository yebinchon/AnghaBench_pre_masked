
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp0; int hi; int lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_3)
{
  int VAR_4;
  if (VAR_3 >= 0 && VAR_3 < 32)
    VAR_4 = VAR_3;
  else if (VAR_3 >= 38 && VAR_3 < 70)
    VAR_4 = VAR_3 + FUNC_0 (VAR_2)->fp0 - 38;
  else if (VAR_3 == 70)
    VAR_4 = FUNC_0 (VAR_2)->hi;
  else if (VAR_3 == 71)
    VAR_4 = FUNC_0 (VAR_2)->lo;
  else


    return VAR_1 + VAR_0;
  return VAR_1 + VAR_4;
}
