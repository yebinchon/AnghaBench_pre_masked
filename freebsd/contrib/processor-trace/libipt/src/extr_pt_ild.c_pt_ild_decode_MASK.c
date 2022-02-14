
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {int size; int raw; int mode; } ;
struct pt_ild {int max_bytes; int itext; int mode; } ;


 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*,struct pt_ild*) ;
 int FUNC_1 (struct pt_ild*) ;
 int VAR_0 ;

int FUNC_2(struct pt_insn *VAR_1, struct pt_insn_ext *VAR_2)
{
 struct pt_ild VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3.mode = VAR_1->mode;
 VAR_3.itext = VAR_1->raw;
 VAR_3.max_bytes = VAR_1->size;

 VAR_4 = FUNC_1(&VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->size = (uint8_t) VAR_4;

 return FUNC_0(VAR_1, VAR_2, &VAR_3);
}
