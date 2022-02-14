
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp0; int pc; int cause; int hi; int lo; int fp_control_status; int fp_implementation_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_2)
{
  if (VAR_2 < 32)
    return VAR_2;
  if (VAR_2 >= FUNC_0 (VAR_1)->fp0
      && VAR_2 < FUNC_0 (VAR_1)->fp0 + 32)
    return VAR_2 - FUNC_0 (VAR_1)->fp0 + 32;
  else if (VAR_2 == FUNC_0 (VAR_1)->pc)
    return VAR_0 + 0;
  else if (VAR_2 == FUNC_0 (VAR_1)->cause)
    return VAR_0 + 1;
  else if (VAR_2 == FUNC_0 (VAR_1)->hi)
    return VAR_0 + 2;
  else if (VAR_2 == FUNC_0 (VAR_1)->lo)
    return VAR_0 + 3;
  else if (VAR_2 == FUNC_0 (VAR_1)->fp_control_status)
    return VAR_0 + 4;
  else if (VAR_2 == FUNC_0 (VAR_1)->fp_implementation_revision)
    return VAR_0 + 5;
  else

    return 0;
}
