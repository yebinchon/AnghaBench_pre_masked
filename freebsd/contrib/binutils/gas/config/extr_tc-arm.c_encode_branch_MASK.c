
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int pc_rel; } ;
struct TYPE_6__ {TYPE_2__ reloc; TYPE_1__* operands; } ;
struct TYPE_4__ {scalar_t__ imm; scalar_t__ hasreloc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (int VAR_2)
{
  if (VAR_1.operands[0].hasreloc)
    {
      FUNC_1 (VAR_1.operands[0].imm != VAR_0,
    FUNC_0("the only suffix valid here is '(plt)'"));
      VAR_1.reloc.type = VAR_0;
    }
  else
    {
      VAR_1.reloc.type = VAR_2;
    }
  VAR_1.reloc.pc_rel = 1;
}
