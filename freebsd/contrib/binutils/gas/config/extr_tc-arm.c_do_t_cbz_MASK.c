
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pc_rel; int type; } ;
struct TYPE_6__ {int instruction; TYPE_2__ reloc; TYPE_1__* operands; } ;
struct TYPE_4__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_3, VAR_1);
  FUNC_0 (VAR_4.operands[0].reg > 7, VAR_0);
  VAR_4.instruction |= VAR_4.operands[0].reg;
  VAR_4.reloc.pc_rel = 1;
  VAR_4.reloc.type = VAR_2;
}
