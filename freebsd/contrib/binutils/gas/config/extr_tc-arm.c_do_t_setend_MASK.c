
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ imm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_1, VAR_0);
  if (VAR_2.operands[0].imm)
    VAR_2.instruction |= 0x8;
}
