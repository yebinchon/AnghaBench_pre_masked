
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  VAR_1.instruction |= VAR_1.operands[0].reg << 12;
  VAR_1.instruction |= VAR_1.operands[1].reg << 16;
  VAR_1.instruction |= VAR_1.operands[2].reg;
  VAR_1.instruction |= VAR_1.operands[3].reg << 8;


  if (VAR_1.operands[0].reg == VAR_1.operands[1].reg
      || ((VAR_1.operands[0].reg == VAR_1.operands[2].reg
      || VAR_1.operands[1].reg == VAR_1.operands[2].reg)
      && !FUNC_0 (VAR_2, VAR_0)))
    FUNC_2 (FUNC_1("rdhi, rdlo and rm must all be different"));
}
