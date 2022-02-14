
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_cl_insn {scalar_t__ use_extend; scalar_t__ mips16_absolute_jump_p; } ;
struct TYPE_2__ {int mips16; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline unsigned int
FUNC_0 (const struct mips_cl_insn *VAR_1)
{
  if (!VAR_0.mips16)
    return 4;
  return VAR_1->mips16_absolute_jump_p || VAR_1->use_extend ? 4 : 2;
}
