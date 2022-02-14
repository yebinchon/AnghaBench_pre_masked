
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_direct; } ;
struct TYPE_4__ {TYPE_1__ branch; } ;
struct pt_insn_ext {TYPE_2__ variant; } ;
struct pt_insn {int iclass; } ;


 int FUNC_0 (struct pt_insn const*,struct pt_insn_ext const*) ;




__attribute__((used)) static int FUNC_1(const struct pt_insn *VAR_0,
     const struct pt_insn_ext *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return 0;

 switch (VAR_0->iclass) {
 default:
  return 0;

 case 130:
 case 129:
  return VAR_1->variant.branch.is_direct;

 case 128:
  return FUNC_0(VAR_0, VAR_1);
 }
}
