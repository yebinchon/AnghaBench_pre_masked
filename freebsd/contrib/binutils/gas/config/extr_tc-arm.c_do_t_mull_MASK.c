
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_0.instruction |= VAR_0.operands[0].reg << 12;
  VAR_0.instruction |= VAR_0.operands[1].reg << 8;
  VAR_0.instruction |= VAR_0.operands[2].reg << 16;
  VAR_0.instruction |= VAR_0.operands[3].reg;

  if (VAR_0.operands[0].reg == VAR_0.operands[1].reg)
    FUNC_1 (FUNC_0("rdhi and rdlo must be different"));
}
