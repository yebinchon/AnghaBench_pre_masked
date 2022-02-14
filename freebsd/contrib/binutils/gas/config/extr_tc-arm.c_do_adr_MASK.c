
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int X_add_number; } ;
struct TYPE_7__ {int pc_rel; TYPE_2__ exp; int type; } ;
struct TYPE_8__ {int instruction; TYPE_3__ reloc; TYPE_1__* operands; } ;
struct TYPE_5__ {int reg; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_1.instruction |= (VAR_1.operands[0].reg << 12);



  VAR_1.reloc.type = VAR_0;
  VAR_1.reloc.pc_rel = 1;
  VAR_1.reloc.exp.X_add_number -= 8;
}
