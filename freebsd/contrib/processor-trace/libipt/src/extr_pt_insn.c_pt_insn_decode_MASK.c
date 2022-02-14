
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {int size; int ip; int raw; int isid; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_1 (struct pt_image*,int *,int ,int,struct pt_asid const*,int ) ;
 int FUNC_2 (struct pt_insn*,struct pt_insn_ext*,struct pt_image*,struct pt_asid const*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(struct pt_insn *VAR_2, struct pt_insn_ext *VAR_3,
     struct pt_image *VAR_4, const struct pt_asid *VAR_5)
{
 int VAR_6, VAR_7;

 if (!VAR_2)
  return -VAR_1;


 VAR_6 = FUNC_1(VAR_4, &VAR_2->isid, VAR_2->raw, sizeof(VAR_2->raw),
        VAR_5, VAR_2->ip);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_2->size = (uint8_t) VAR_6;

 VAR_7 = FUNC_0(VAR_2, VAR_3);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_0)
   return VAR_7;




  if (VAR_2->size != (uint8_t) VAR_6)
   return VAR_7;

  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return VAR_7;
}
