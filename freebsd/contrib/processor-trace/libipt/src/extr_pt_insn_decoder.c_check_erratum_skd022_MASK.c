
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int iclass; } ;
struct pt_insn_decoder {int asid; int image; int ip; int mode; } ;
struct pt_insn {int ip; int mode; } ;




 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_insn_decoder *VAR_1)
{
 struct pt_insn_ext VAR_2;
 struct pt_insn VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_3.mode = VAR_1->mode;
 VAR_3.ip = VAR_1->ip;

 VAR_4 = FUNC_0(&VAR_3, &VAR_2, VAR_1->image, &VAR_1->asid);
 if (VAR_4 < 0)
  return 0;

 switch (VAR_2.iclass) {
 default:
  return 0;

 case 129:
 case 128:
  return 1;
 }
}
