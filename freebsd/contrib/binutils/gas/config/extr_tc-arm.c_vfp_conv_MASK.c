
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (int VAR_1)
{
  unsigned VAR_2 = VAR_1 - VAR_0.operands[1].imm;
  VAR_0.instruction |= (VAR_2 & 1) << 5;
  VAR_0.instruction |= (VAR_2 >> 1);
}
