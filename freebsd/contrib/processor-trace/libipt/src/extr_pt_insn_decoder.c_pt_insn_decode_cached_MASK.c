
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn_decoder {int asid; int image; } ;
struct pt_insn {scalar_t__ size; int ip; int raw; } ;


 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_1 (struct pt_insn*,struct pt_insn_ext*,int ,int *) ;
 int FUNC_2 (struct pt_mapped_section const*,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pt_insn_decoder *VAR_3,
     const struct pt_mapped_section *VAR_4,
     struct pt_insn *VAR_5, struct pt_insn_ext *VAR_6)
{
 int VAR_7;

 if (!VAR_3 || !VAR_5 || !VAR_6)
  return -VAR_1;
 if (!VAR_4)
  return FUNC_1(VAR_5, VAR_6, VAR_3->image,
          &VAR_3->asid);

 VAR_7 = FUNC_2(VAR_4, VAR_5->raw, sizeof(VAR_5->raw), VAR_5->ip);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_2)
   return VAR_7;

  return FUNC_1(VAR_5, VAR_6, VAR_3->image,
          &VAR_3->asid);
 }




 VAR_5->size = (uint8_t) VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_0)
   return VAR_7;

  return FUNC_1(VAR_5, VAR_6, VAR_3->image,
          &VAR_3->asid);
 }

 return VAR_7;
}
