
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ia64_insn ;
struct TYPE_2__ {int mask; int bits; int offset; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static ia64_insn
FUNC_0 (ia64_insn VAR_1, int VAR_2)
{
  ia64_insn VAR_3 = VAR_0[VAR_2].mask;
  ia64_insn VAR_4 = VAR_0[VAR_2].bits;
  int VAR_5 = (VAR_0[VAR_2].offset & 63);

  VAR_3 = VAR_3 << VAR_5;
  VAR_4 = VAR_4 << VAR_5;
  VAR_1 = (VAR_1 & ~VAR_3) | VAR_4;
  return VAR_1;
}
