
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {int instruction; TYPE_2__ reloc; void* error; TYPE_1__* operands; } ;
struct TYPE_4__ {int reg; int imm; scalar_t__ writeback; scalar_t__ preind; scalar_t__ postind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int
FUNC_2 (int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
  VAR_11.instruction |= VAR_11.operands[VAR_13].reg << 16;

  FUNC_1 (!(VAR_11.operands[VAR_13].preind && VAR_11.operands[VAR_13].postind));

  if (!VAR_11.operands[VAR_13].preind && !VAR_11.operands[VAR_13].postind)
    {
      FUNC_1 (!VAR_11.operands[VAR_13].writeback);
      if (!VAR_15)
 {
   VAR_11.error = FUNC_0("instruction does not support unindexed addressing");
   return VAR_5;
 }
      VAR_11.instruction |= VAR_11.operands[VAR_13].imm;
      VAR_11.instruction |= VAR_6;
      return VAR_9;
    }

  if (VAR_11.operands[VAR_13].preind)
    VAR_11.instruction |= VAR_7;

  if (VAR_11.operands[VAR_13].writeback)
    {
      if (VAR_11.operands[VAR_13].reg == VAR_8)
 {
   VAR_11.error = FUNC_0("pc may not be used with write-back");
   return VAR_5;
 }
      if (!VAR_14)
 {
   VAR_11.error = FUNC_0("instruction does not support writeback");
   return VAR_5;
 }
      VAR_11.instruction |= VAR_10;
    }

  if (VAR_16)
    VAR_11.reloc.type = VAR_16;
  else if ((VAR_11.reloc.type < VAR_0
            || VAR_11.reloc.type > VAR_2)
           && VAR_11.reloc.type != VAR_3)
    {
      if (VAR_12)
        VAR_11.reloc.type = VAR_4;
      else
        VAR_11.reloc.type = VAR_1;
    }

  return VAR_9;
}
