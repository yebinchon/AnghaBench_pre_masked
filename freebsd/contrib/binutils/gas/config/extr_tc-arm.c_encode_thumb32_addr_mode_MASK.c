
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_7__ {void* type; TYPE_1__ exp; } ;
struct TYPE_8__ {int instruction; int error; TYPE_3__ reloc; TYPE_2__* operands; } ;
struct TYPE_6__ {int reg; int negative; int postind; int writeback; scalar_t__ shift_kind; int imm; scalar_t__ preind; scalar_t__ shifted; scalar_t__ immisreg; int isreg; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void
FUNC_3 (int VAR_6, bfd_boolean VAR_7, bfd_boolean VAR_8)
{
  bfd_boolean VAR_9 = (VAR_5.operands[VAR_6].reg == VAR_3);

  FUNC_2 (!VAR_5.operands[VAR_6].isreg,
       FUNC_0("Instruction does not support =N addresses"));

  VAR_5.instruction |= VAR_5.operands[VAR_6].reg << 16;
  if (VAR_5.operands[VAR_6].immisreg)
    {
      FUNC_2 (VAR_9, FUNC_0("cannot use register index with PC-relative addressing"));
      FUNC_2 (VAR_7 || VAR_8, FUNC_0("cannot use register index with this instruction"));
      FUNC_2 (VAR_5.operands[VAR_6].negative,
    FUNC_0("Thumb does not support negative register indexing"));
      FUNC_2 (VAR_5.operands[VAR_6].postind,
    FUNC_0("Thumb does not support register post-indexing"));
      FUNC_2 (VAR_5.operands[VAR_6].writeback,
    FUNC_0("Thumb does not support register indexing with writeback"));
      FUNC_2 (VAR_5.operands[VAR_6].shifted && VAR_5.operands[VAR_6].shift_kind != VAR_4,
    FUNC_0("Thumb supports only LSL in shifted register indexing"));

      VAR_5.instruction |= VAR_5.operands[VAR_6].imm;
      if (VAR_5.operands[VAR_6].shifted)
 {
   FUNC_2 (VAR_5.reloc.exp.X_op != VAR_2,
        FUNC_0("expression too complex"));
   FUNC_2 (VAR_5.reloc.exp.X_add_number < 0
        || VAR_5.reloc.exp.X_add_number > 3,
        FUNC_0("shift out of range"));
   VAR_5.instruction |= VAR_5.reloc.exp.X_add_number << 4;
 }
      VAR_5.reloc.type = VAR_1;
    }
  else if (VAR_5.operands[VAR_6].preind)
    {
      FUNC_2 (VAR_9 && VAR_5.operands[VAR_6].writeback,
    FUNC_0("cannot use writeback with PC-relative addressing"));
      FUNC_2 (VAR_7 && VAR_5.operands[VAR_6].writeback,
    FUNC_0("cannot use writeback with this instruction"));

      if (VAR_8)
 {
   VAR_5.instruction |= 0x01000000;
   if (VAR_5.operands[VAR_6].writeback)
     VAR_5.instruction |= 0x00200000;
 }
      else
 {
   VAR_5.instruction |= 0x00000c00;
   if (VAR_5.operands[VAR_6].writeback)
     VAR_5.instruction |= 0x00000100;
 }
      VAR_5.reloc.type = VAR_0;
    }
  else if (VAR_5.operands[VAR_6].postind)
    {
      FUNC_1 (VAR_5.operands[VAR_6].writeback);
      FUNC_2 (VAR_9, FUNC_0("cannot use post-indexing with PC-relative addressing"));
      FUNC_2 (VAR_7, FUNC_0("cannot use post-indexing with this instruction"));

      if (VAR_8)
 VAR_5.instruction |= 0x00200000;
      else
 VAR_5.instruction |= 0x00000900;
      VAR_5.reloc.type = VAR_0;
    }
  else
    VAR_5.error = FUNC_0("instruction does not accept unindexed addressing");
}
