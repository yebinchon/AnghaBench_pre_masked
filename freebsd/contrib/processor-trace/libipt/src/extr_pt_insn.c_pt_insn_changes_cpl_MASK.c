
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int iclass; } ;
struct pt_insn {int dummy; } ;
int FUNC_0(const struct pt_insn *VAR_0,
   const struct pt_insn_ext *VAR_1)
{
 (void) VAR_0;

 if (!VAR_1)
  return 0;

 switch (VAR_1->iclass) {
 default:
  return 0;

 case 136:
 case 134:
 case 135:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  return 1;
 }
}
