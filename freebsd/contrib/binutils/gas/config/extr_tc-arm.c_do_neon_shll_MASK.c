
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {unsigned int size; scalar_t__ type; } ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int imm; int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 struct neon_type_el FUNC_4 (int,int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ,struct neon_type_el,unsigned int) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static void
FUNC_8 (void)
{

  struct neon_type_el VAR_11 = FUNC_4 (2, VAR_0,
    VAR_3 | VAR_2, VAR_6 | VAR_4 | VAR_5 | VAR_7);
  unsigned VAR_12 = VAR_10.operands[2].imm;

  if (VAR_12 == VAR_11.size)
    {

      VAR_10.instruction = FUNC_3 (VAR_10.instruction);
      VAR_10.instruction |= FUNC_1 (VAR_10.operands[0].reg) << 12;
      VAR_10.instruction |= FUNC_0 (VAR_10.operands[0].reg) << 22;
      VAR_10.instruction |= FUNC_1 (VAR_10.operands[1].reg);
      VAR_10.instruction |= FUNC_0 (VAR_10.operands[1].reg) << 5;
      VAR_10.instruction |= FUNC_7 (VAR_11.size) << 18;

      VAR_10.instruction = FUNC_5 (VAR_10.instruction);
    }
  else
    {

      VAR_11 = FUNC_4 (2, VAR_0,
        VAR_3 | VAR_2, VAR_8 | VAR_7);
      VAR_10.instruction = FUNC_2 (VAR_10.instruction);
      FUNC_6 (VAR_9, VAR_11.type == VAR_1, 0, VAR_11, VAR_12);
    }
}
