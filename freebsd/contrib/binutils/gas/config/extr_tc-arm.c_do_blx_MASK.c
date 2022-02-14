
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; scalar_t__ cond; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ isreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  if (VAR_6.operands[0].isreg)
    {


      if (VAR_6.operands[0].reg == VAR_5)
 FUNC_2 (FUNC_1("use of r15 in blx in ARM mode is not really useful"));

      VAR_6.instruction |= VAR_6.operands[0].reg;
    }
  else
    {


      FUNC_3 (VAR_6.cond != VAR_3, VAR_0);
      VAR_6.instruction = 0xfa000000;





 FUNC_4 (VAR_1);
    }
}
