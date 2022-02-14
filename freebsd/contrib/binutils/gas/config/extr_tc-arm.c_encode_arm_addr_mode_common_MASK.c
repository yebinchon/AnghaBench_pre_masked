
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_4__ {int instruction; void* error; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ writeback; scalar_t__ postind; scalar_t__ preind; scalar_t__ isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void
FUNC_3 (int VAR_4, bfd_boolean VAR_5)
{
  FUNC_2 (VAR_3.operands[VAR_4].isreg);
  VAR_3.instruction |= VAR_3.operands[VAR_4].reg << 16;

  if (VAR_3.operands[VAR_4].preind)
    {
      if (VAR_5)
 {
   VAR_3.error = FUNC_0("instruction does not accept preindexed addressing");
   return;
 }
      VAR_3.instruction |= VAR_1;
      if (VAR_3.operands[VAR_4].writeback)
 VAR_3.instruction |= VAR_2;

    }
  else if (VAR_3.operands[VAR_4].postind)
    {
      FUNC_2 (VAR_3.operands[VAR_4].writeback);
      if (VAR_5)
 VAR_3.instruction |= VAR_2;
    }
  else
    {
      VAR_3.error = FUNC_0("instruction does not accept unindexed addressing");
      return;
    }

  if (((VAR_3.instruction & VAR_2) || !(VAR_3.instruction & VAR_1))
      && (((VAR_3.instruction & 0x000f0000) >> 16)
   == ((VAR_3.instruction & 0x0000f000) >> 12)))
    FUNC_1 ((VAR_3.instruction & VAR_0)
      ? FUNC_0("destination register same as write-back base")
      : FUNC_0("source register same as write-back base"));
}
