
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_cl_insn {int where; int insn_opcode; int extend; scalar_t__ use_extend; scalar_t__ mips16_absolute_jump_p; TYPE_1__* frag; } ;
struct TYPE_4__ {int mips16; } ;
struct TYPE_3__ {char* fr_literal; } ;


 int FUNC_0 (char*,int,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (const struct mips_cl_insn *VAR_1)
{
  char *VAR_2 = VAR_1->frag->fr_literal + VAR_1->where;
  if (!VAR_0.mips16)
    FUNC_0 (VAR_2, VAR_1->insn_opcode, 4);
  else if (VAR_1->mips16_absolute_jump_p)
    {
      FUNC_0 (VAR_2, VAR_1->insn_opcode >> 16, 2);
      FUNC_0 (VAR_2 + 2, VAR_1->insn_opcode & 0xffff, 2);
    }
  else
    {
      if (VAR_1->use_extend)
 {
   FUNC_0 (VAR_2, 0xf000 | VAR_1->extend, 2);
   VAR_2 += 2;
 }
      FUNC_0 (VAR_2, VAR_1->insn_opcode, 2);
    }
}
