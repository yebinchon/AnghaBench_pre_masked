
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int iclass; } ;
struct pt_insn {int dummy; } ;





 int FUNC_0 (struct pt_insn const*,struct pt_insn_ext const*) ;

int FUNC_1(const struct pt_insn *VAR_0,
    const struct pt_insn_ext *VAR_1)
{
 if (!VAR_1)
  return 0;

 switch (VAR_1->iclass) {
 default:
  return FUNC_0(VAR_0, VAR_1);

 case 130:
 case 129:
 case 128:
  return 1;
 }
}
