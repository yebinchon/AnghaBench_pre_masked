
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ reloc; int instruction; TYPE_2__* operands; int error; } ;
struct TYPE_5__ {int negative; int imm; scalar_t__ immisreg; scalar_t__ shifted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (int VAR_5, bfd_boolean VAR_6)
{
  if (VAR_4.operands[VAR_5].immisreg && VAR_4.operands[VAR_5].shifted)
    {
      VAR_4.error = FUNC_0("instruction does not accept scaled register index");
      return;
    }

  FUNC_1 (VAR_5, VAR_6);

  if (VAR_4.operands[VAR_5].immisreg)
    {
      VAR_4.instruction |= VAR_4.operands[VAR_5].imm;
      if (!VAR_4.operands[VAR_5].negative)
 VAR_4.instruction |= VAR_3;
    }
  else
    {
      VAR_4.instruction |= VAR_2;
      if (VAR_4.reloc.type == VAR_1)
 VAR_4.reloc.type = VAR_0;
    }
}
