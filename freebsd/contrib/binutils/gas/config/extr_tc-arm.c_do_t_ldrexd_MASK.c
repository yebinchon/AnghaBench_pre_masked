
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (!VAR_2.operands[1].present)
    {
      FUNC_1 (VAR_2.operands[0].reg == VAR_1,
    FUNC_0("r14 not allowed as first register "
      "when second register is omitted"));
      VAR_2.operands[1].reg = VAR_2.operands[0].reg + 1;
    }
  FUNC_1 (VAR_2.operands[0].reg == VAR_2.operands[1].reg,
       VAR_0);

  VAR_2.instruction |= VAR_2.operands[0].reg << 12;
  VAR_2.instruction |= VAR_2.operands[1].reg << 8;
  VAR_2.instruction |= VAR_2.operands[2].reg << 16;
}
