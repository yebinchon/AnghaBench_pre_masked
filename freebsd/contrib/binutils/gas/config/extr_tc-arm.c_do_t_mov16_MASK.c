
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_6__ {int X_add_number; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__ reloc; TYPE_1__* operands; } ;
struct TYPE_5__ {int reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  bfd_vma VAR_6;
  bfd_boolean VAR_7;

  VAR_7 = (VAR_5.instruction & 0x00800000) != 0;
  if (VAR_5.reloc.type == VAR_1)
    {
      FUNC_1 (VAR_7, FUNC_0(":lower16: not allowed this instruction"));
      VAR_5.reloc.type = VAR_3;
    }
  else if (VAR_5.reloc.type == VAR_0)
    {
      FUNC_1 (!VAR_7, FUNC_0(":upper16: not allowed this instruction"));
      VAR_5.reloc.type = VAR_2;
    }

  VAR_5.instruction |= VAR_5.operands[0].reg << 8;
  if (VAR_5.reloc.type == VAR_4)
    {
      VAR_6 = VAR_5.reloc.exp.X_add_number;
      VAR_5.instruction |= (VAR_6 & 0xf000) << 4;
      VAR_5.instruction |= (VAR_6 & 0x0800) << 15;
      VAR_5.instruction |= (VAR_6 & 0x0700) << 4;
      VAR_5.instruction |= (VAR_6 & 0x00ff);
    }
}
