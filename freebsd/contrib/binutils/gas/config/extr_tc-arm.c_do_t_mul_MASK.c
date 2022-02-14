
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  if (!VAR_4.operands[2].present)
    VAR_4.operands[2].reg = VAR_4.operands[0].reg;


  if (VAR_5 && VAR_4.instruction == VAR_2)
    {
      VAR_4.instruction = FUNC_1 (VAR_4.instruction);
      VAR_4.instruction |= VAR_4.operands[0].reg << 8;
      VAR_4.instruction |= VAR_4.operands[1].reg << 16;
      VAR_4.instruction |= VAR_4.operands[2].reg << 0;
    }
  else
    {
      FUNC_3 (!VAR_5
    && VAR_4.instruction == VAR_3, VAR_1);
      FUNC_3 (VAR_4.operands[0].reg > 7 || VAR_4.operands[1].reg > 7,
    VAR_0);

      VAR_4.instruction = FUNC_0 (VAR_4.instruction);
      VAR_4.instruction |= VAR_4.operands[0].reg;

      if (VAR_4.operands[0].reg == VAR_4.operands[1].reg)
 VAR_4.instruction |= VAR_4.operands[2].reg << 3;
      else if (VAR_4.operands[0].reg == VAR_4.operands[2].reg)
 VAR_4.instruction |= VAR_4.operands[1].reg << 3;
      else
 FUNC_3 (1, FUNC_2("dest must overlap one source register"));
    }
}
