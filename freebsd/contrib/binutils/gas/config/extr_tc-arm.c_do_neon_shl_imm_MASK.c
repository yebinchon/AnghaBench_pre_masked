
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {scalar_t__ type; int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {unsigned int reg; int imm; int isreg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 struct neon_type_el FUNC_2 (int,int,int,int,...) ;
 int FUNC_3 (int ,int ,int ,struct neon_type_el,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  if (!VAR_12.operands[2].isreg)
    {
      enum neon_shape VAR_13 = FUNC_5 (VAR_2, VAR_4, VAR_3);
      struct neon_type_el VAR_14 = FUNC_2 (2, VAR_13, VAR_7, VAR_9 | VAR_8);
      VAR_12.instruction = FUNC_0 (VAR_12.instruction);
      FUNC_3 (VAR_0, 0, FUNC_4 (VAR_13), VAR_14, VAR_12.operands[2].imm);
    }
  else
    {
      enum neon_shape VAR_15 = FUNC_5 (VAR_1, VAR_5, VAR_3);
      struct neon_type_el VAR_16 = FUNC_2 (3, VAR_15,
        VAR_7, VAR_11 | VAR_9, VAR_7 | VAR_10);
      unsigned int VAR_17;
      VAR_17 = VAR_12.operands[2].reg;
      VAR_12.operands[2].reg = VAR_12.operands[1].reg;
      VAR_12.operands[1].reg = VAR_17;
      VAR_12.instruction = FUNC_1 (VAR_12.instruction);
      FUNC_6 (FUNC_4 (VAR_15), VAR_16.type == VAR_6, VAR_16.size);
    }
}
