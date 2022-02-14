
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; int error; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_0 (void)
{

  if (VAR_3.operands[1].reg > 14)
    {
      VAR_3.error = VAR_0;
      return;
    }


  if (VAR_4 && VAR_3.operands[0].reg == VAR_2)
    {
      VAR_3.error = VAR_1;
      return;
    }


  VAR_3.instruction |= VAR_3.operands[1].reg << 12;
  VAR_3.instruction |= VAR_3.operands[0].reg << 16;
}
