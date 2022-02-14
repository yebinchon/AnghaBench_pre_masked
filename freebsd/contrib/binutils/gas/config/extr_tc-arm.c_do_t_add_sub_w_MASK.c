
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {int instruction; TYPE_2__ reloc; TYPE_1__* operands; } ;
struct TYPE_4__ {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_2, VAR_3;

  VAR_2 = VAR_1.operands[0].reg;
  VAR_3 = VAR_1.operands[1].reg;

  FUNC_1 (VAR_2 == 15, FUNC_0("PC not allowed as destination"));
  VAR_1.instruction |= (VAR_3 << 16) | (VAR_2 << 8);
  VAR_1.reloc.type = VAR_0;
}
