
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_1 (VAR_1.operands[0].imm != 2,
       FUNC_0("only two consecutive VFP SP registers allowed here"));
  FUNC_2 (VAR_1.operands[0].reg, VAR_0);
  VAR_1.instruction |= VAR_1.operands[1].reg << 12;
  VAR_1.instruction |= VAR_1.operands[2].reg << 16;
}
