
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {int instruction; int size_req; TYPE_2__* operands; TYPE_1__ reloc; } ;
struct TYPE_5__ {int writeback; int imm; int reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int,int) ;
 TYPE_3__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_6 (void)
{

  FUNC_4 (VAR_9.reloc.type != VAR_1,
       FUNC_2("expression too complex"));
  FUNC_4 (VAR_9.operands[1].writeback,
       FUNC_2("Thumb load/store multiple does not support {reglist}^"));

  if (VAR_10)
    {
      bfd_boolean VAR_11;
      unsigned VAR_12;

      VAR_11 = VAR_2;

      if (VAR_9.instruction < 0xffff
   && VAR_9.size_req != 4
   && !(VAR_9.operands[1].imm & ~0xff))
 {
   VAR_12 = 1 << VAR_9.operands[0].reg;

   if (VAR_9.operands[0].reg <= 7
       && (VAR_9.instruction == VAR_8
    ? VAR_9.operands[0].writeback
    : (VAR_9.operands[0].writeback
       == !(VAR_9.operands[1].imm & VAR_12))))
     {
       if (VAR_9.instruction == VAR_8
    && (VAR_9.operands[1].imm & VAR_12)
    && (VAR_9.operands[1].imm & (VAR_12 - 1)))
  FUNC_3 (FUNC_2("value stored for r%d is UNPREDICTABLE"),
    VAR_9.operands[0].reg);

       VAR_9.instruction = FUNC_0 (VAR_9.instruction);
       VAR_9.instruction |= VAR_9.operands[0].reg << 8;
       VAR_9.instruction |= VAR_9.operands[1].imm;
       VAR_11 = VAR_4;
     }
   else if (VAR_9.operands[0] .reg == VAR_3
     && VAR_9.operands[0].writeback)
     {
       VAR_9.instruction = FUNC_0 (VAR_9.instruction == VAR_8
          ? VAR_7 : VAR_6);
       VAR_9.instruction |= VAR_9.operands[1].imm;
       VAR_11 = VAR_4;
     }
 }

      if (!VAR_11)
 {
   if (VAR_9.instruction < 0xffff)
     VAR_9.instruction = FUNC_1 (VAR_9.instruction);

   FUNC_5(VAR_9.operands[0].reg, VAR_9.operands[1].imm,
          VAR_9.operands[0].writeback);
 }
    }
  else
    {
      FUNC_4 (VAR_9.operands[0].reg > 7
    || (VAR_9.operands[1].imm & ~0xff), VAR_0);
      FUNC_4 (VAR_9.instruction != VAR_5
    && VAR_9.instruction != VAR_8,
    FUNC_2("Thumb-2 instruction only valid in unified syntax"));
      if (VAR_9.instruction == VAR_8)
 {
   if (!VAR_9.operands[0].writeback)
     FUNC_3 (FUNC_2("this instruction will write back the base register"));
   if ((VAR_9.operands[1].imm & (1 << VAR_9.operands[0].reg))
       && (VAR_9.operands[1].imm & ((1 << VAR_9.operands[0].reg) - 1)))
     FUNC_3 (FUNC_2("value stored for r%d is UNPREDICTABLE"),
       VAR_9.operands[0].reg);
 }
      else
 {
   if (!VAR_9.operands[0].writeback
       && !(VAR_9.operands[1].imm & (1 << VAR_9.operands[0].reg)))
     FUNC_3 (FUNC_2("this instruction will write back the base register"));
   else if (VAR_9.operands[0].writeback
     && (VAR_9.operands[1].imm & (1 << VAR_9.operands[0].reg)))
     FUNC_3 (FUNC_2("this instruction will not write back the base register"));
 }

      VAR_9.instruction = FUNC_0 (VAR_9.instruction);
      VAR_9.instruction |= VAR_9.operands[0].reg << 8;
      VAR_9.instruction |= VAR_9.operands[1].imm;
    }
}
