
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; int instruction; } ;
struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_1.operands[0].reg == VAR_0)
    FUNC_1 (FUNC_0("use of r15 in bx in ARM mode is not really useful"));

  VAR_1.instruction |= VAR_1.operands[0].reg;
}
