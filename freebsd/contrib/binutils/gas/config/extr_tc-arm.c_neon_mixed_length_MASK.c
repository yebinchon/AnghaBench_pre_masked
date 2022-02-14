
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void
FUNC_4 (struct neon_type_el VAR_2, unsigned VAR_3)
{
  VAR_1.instruction |= FUNC_1 (VAR_1.operands[0].reg) << 12;
  VAR_1.instruction |= FUNC_0 (VAR_1.operands[0].reg) << 22;
  VAR_1.instruction |= FUNC_1 (VAR_1.operands[1].reg) << 16;
  VAR_1.instruction |= FUNC_0 (VAR_1.operands[1].reg) << 7;
  VAR_1.instruction |= FUNC_1 (VAR_1.operands[2].reg);
  VAR_1.instruction |= FUNC_0 (VAR_1.operands[2].reg) << 5;
  VAR_1.instruction |= (VAR_2.type == VAR_0) << 24;
  VAR_1.instruction |= FUNC_3 (VAR_3) << 20;

  VAR_1.instruction = FUNC_2 (VAR_1.instruction);
}
