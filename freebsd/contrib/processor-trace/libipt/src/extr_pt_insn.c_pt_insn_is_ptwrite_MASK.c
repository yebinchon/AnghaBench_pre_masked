
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int dummy; } ;
struct pt_insn {int iclass; } ;




int FUNC_0(const struct pt_insn *VAR_0,
         const struct pt_insn_ext *VAR_1)
{
 (void) VAR_1;

 if (!VAR_0)
  return 0;

 switch (VAR_0->iclass) {
 default:
  return 0;

 case 128:
  return 1;
 }
}
