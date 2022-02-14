
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (FUNC_2 () == VAR_5)
    return;


  FUNC_1 ((VAR_6.operands[1].imm & (VAR_0|VAR_3|VAR_2|VAR_1))
       != (VAR_0|VAR_1),
       FUNC_0("'CPSR' or 'SPSR' expected"));
  VAR_6.instruction |= VAR_6.operands[0].reg << 12;
  VAR_6.instruction |= (VAR_6.operands[1].imm & VAR_4);
}
