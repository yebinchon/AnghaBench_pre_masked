
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_6__ {int instruction; TYPE_1__ reloc; TYPE_2__* operands; } ;
struct TYPE_5__ {int shift_kind; int imm; scalar_t__ immisreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_0 (int VAR_5)
{
  if (VAR_4.operands[VAR_5].shift_kind == VAR_3)
    VAR_4.instruction |= VAR_2 << 5;
  else
    {
      VAR_4.instruction |= VAR_4.operands[VAR_5].shift_kind << 5;
      if (VAR_4.operands[VAR_5].immisreg)
 {
   VAR_4.instruction |= VAR_1;
   VAR_4.instruction |= VAR_4.operands[VAR_5].imm << 8;
 }
      else
 VAR_4.reloc.type = VAR_0;
    }
}
