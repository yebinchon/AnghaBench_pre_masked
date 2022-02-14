
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pc_rel; int type; } ;
struct TYPE_6__ {int instruction; TYPE_1__ reloc; TYPE_2__* operands; } ;
struct TYPE_5__ {int reg; scalar_t__ isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_1 (VAR_4 && VAR_4 != 0x10, VAR_0);
  if (VAR_5.operands[0].isreg)

    VAR_5.instruction |= VAR_5.operands[0].reg << 3;
  else
    {

      VAR_5.instruction = 0xf000e800;





 VAR_5.reloc.type = VAR_1;
      VAR_5.reloc.pc_rel = 1;
    }
}
