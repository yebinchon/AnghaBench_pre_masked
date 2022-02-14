
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ isreg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (int VAR_2)
{
  if (VAR_1.operands[VAR_2].isreg)
    {
      VAR_1.instruction |= VAR_1.operands[VAR_2].reg;
      FUNC_0 (VAR_2);
    }
  else
    VAR_1.instruction |= VAR_0;
}
