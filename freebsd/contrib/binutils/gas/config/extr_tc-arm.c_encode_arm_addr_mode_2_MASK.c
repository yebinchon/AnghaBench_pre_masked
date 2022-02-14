
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {int instruction; TYPE_2__ reloc; TYPE_1__* operands; } ;
struct TYPE_4__ {int imm; int shift_kind; scalar_t__ shifted; int negative; scalar_t__ immisreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static void
FUNC_1 (int VAR_8, bfd_boolean VAR_9)
{
  FUNC_0 (VAR_8, VAR_9);

  if (VAR_7.operands[VAR_8].immisreg)
    {
      VAR_7.instruction |= VAR_4;
      VAR_7.instruction |= VAR_7.operands[VAR_8].imm;
      if (!VAR_7.operands[VAR_8].negative)
 VAR_7.instruction |= VAR_3;
      if (VAR_7.operands[VAR_8].shifted)
 {
   if (VAR_7.operands[VAR_8].shift_kind == VAR_6)
     VAR_7.instruction |= VAR_5 << 5;
   else
     {
       VAR_7.instruction |= VAR_7.operands[VAR_8].shift_kind << 5;
       VAR_7.reloc.type = VAR_1;
     }
 }
    }
  else
    {
      if (VAR_7.reloc.type == VAR_2)
 VAR_7.reloc.type = VAR_0;
    }
}
