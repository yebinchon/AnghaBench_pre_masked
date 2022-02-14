
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neon_type_el {int size; } ;
typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;
struct TYPE_4__ {int instruction; TYPE_1__* operands; } ;
struct TYPE_3__ {int imm; int reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 TYPE_2__ VAR_9 ;
 struct neon_type_el FUNC_4 (int,int,int ,int ,int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  enum neon_shape VAR_10 = FUNC_7 (VAR_0, VAR_2, VAR_1);
  struct neon_type_el VAR_11 = FUNC_4 (3, VAR_10,
    VAR_7, VAR_7, VAR_6 | VAR_3 | VAR_4 | VAR_5 | VAR_8);
  unsigned VAR_12 = (VAR_9.operands[3].imm * VAR_11.size) / 8;
  FUNC_3 (VAR_12 >= (FUNC_6 (VAR_10) ? 16 : 8), FUNC_2("shift out of range"));
  VAR_9.instruction |= FUNC_1 (VAR_9.operands[0].reg) << 12;
  VAR_9.instruction |= FUNC_0 (VAR_9.operands[0].reg) << 22;
  VAR_9.instruction |= FUNC_1 (VAR_9.operands[1].reg) << 16;
  VAR_9.instruction |= FUNC_0 (VAR_9.operands[1].reg) << 7;
  VAR_9.instruction |= FUNC_1 (VAR_9.operands[2].reg);
  VAR_9.instruction |= FUNC_0 (VAR_9.operands[2].reg) << 5;
  VAR_9.instruction |= FUNC_6 (VAR_10) << 6;
  VAR_9.instruction |= VAR_12 << 8;

  VAR_9.instruction = FUNC_5 (VAR_9.instruction);
}
