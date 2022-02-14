
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X_add_number; } ;
struct TYPE_6__ {TYPE_1__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__* operands; TYPE_2__ reloc; } ;
struct TYPE_7__ {int reg; int imm; scalar_t__ writeback; int negative; scalar_t__ preind; scalar_t__ immisreg; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int ,int ,int ) ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_7.instruction |= VAR_7.operands[0].reg << 12;
  if (FUNC_0 (VAR_6, VAR_5)
      && VAR_7.operands[1].immisreg)
    {
      VAR_7.instruction &= ~0x1a000ff;
      VAR_7.instruction |= (0xf << 28);
      if (VAR_7.operands[1].preind)
 VAR_7.instruction |= VAR_2;
      if (!VAR_7.operands[1].negative)
 VAR_7.instruction |= VAR_1;
      if (VAR_7.operands[1].writeback)
 VAR_7.instruction |= VAR_4;
      VAR_7.instruction |= VAR_7.operands[1].reg << 16;
      VAR_7.instruction |= VAR_7.reloc.exp.X_add_number << 4;
      VAR_7.instruction |= VAR_7.operands[1].imm;
    }
  else
    FUNC_1 (1, VAR_3, VAR_0, 0);
}
