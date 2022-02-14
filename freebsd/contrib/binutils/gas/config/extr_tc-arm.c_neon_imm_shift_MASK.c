
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_1, int VAR_2, int VAR_3, struct neon_type_el VAR_4,
                unsigned VAR_5)
{
  unsigned VAR_6 = VAR_4.size >> 3;
  VAR_0.instruction |= FUNC_1 (VAR_0.operands[0].reg) << 12;
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[0].reg) << 22;
  VAR_0.instruction |= FUNC_1 (VAR_0.operands[1].reg);
  VAR_0.instruction |= FUNC_0 (VAR_0.operands[1].reg) << 5;
  VAR_0.instruction |= (VAR_3 != 0) << 6;
  VAR_0.instruction |= VAR_5 << 16;
  VAR_0.instruction |= (VAR_6 >> 3) << 7;
  VAR_0.instruction |= (VAR_6 & 0x7) << 19;
  if (VAR_1)
    VAR_0.instruction |= (VAR_2 != 0) << 24;

  VAR_0.instruction = FUNC_2 (VAR_0.instruction);
}
