
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int reg; scalar_t__ isreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  if (VAR_3.operands[1].isreg)
    {
      enum neon_shape VAR_4 = FUNC_7 (VAR_0, VAR_2, VAR_1);

      VAR_3.instruction = FUNC_3 (VAR_3.instruction);
      VAR_3.instruction |= FUNC_1 (VAR_3.operands[0].reg) << 12;
      VAR_3.instruction |= FUNC_0 (VAR_3.operands[0].reg) << 22;
      VAR_3.instruction |= FUNC_1 (VAR_3.operands[1].reg);
      VAR_3.instruction |= FUNC_0 (VAR_3.operands[1].reg) << 5;
      VAR_3.instruction |= FUNC_6 (VAR_4) << 6;
    }
  else
    {
      VAR_3.instruction = FUNC_2 (VAR_3.instruction);
      FUNC_5 ();
    }

  VAR_3.instruction = FUNC_4 (VAR_3.instruction);
}
