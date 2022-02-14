
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; scalar_t__ present; } ;


 int FUNC_0 (int,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (VAR_0.operands[0].present)
    {
      FUNC_0 ((VAR_0.instruction & 0xf0) != 0x40
    && (VAR_0.instruction & 0xf0) != 0x50
    && VAR_0.operands[0].imm != 0xf,
    "bad barrier type");
      VAR_0.instruction |= VAR_0.operands[0].imm;
    }
  else
    VAR_0.instruction |= 0xf;
}
