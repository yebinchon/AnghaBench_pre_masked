
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_opcode {int match; } ;
struct mips_cl_insn {int fixed_p; int noreorder_p; scalar_t__ mips16_absolute_jump_p; int ** fixp; scalar_t__ where; int * frag; int insn_opcode; scalar_t__ extend; int use_extend; struct mips_opcode const* insn_mo; } ;
struct TYPE_2__ {scalar_t__ noreorder; } ;


 size_t FUNC_0 (int **) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (struct mips_cl_insn *VAR_2, const struct mips_opcode *VAR_3)
{
  size_t VAR_4;

  VAR_2->insn_mo = VAR_3;
  VAR_2->use_extend = VAR_0;
  VAR_2->extend = 0;
  VAR_2->insn_opcode = VAR_3->match;
  VAR_2->frag = ((void*)0);
  VAR_2->where = 0;
  for (VAR_4 = 0; VAR_4 < FUNC_0 (VAR_2->fixp); VAR_4++)
    VAR_2->fixp[VAR_4] = ((void*)0);
  VAR_2->fixed_p = (VAR_1.noreorder > 0);
  VAR_2->noreorder_p = (VAR_1.noreorder > 0);
  VAR_2->mips16_absolute_jump_p = 0;
}
