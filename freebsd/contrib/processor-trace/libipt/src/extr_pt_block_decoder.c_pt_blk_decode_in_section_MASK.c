
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {scalar_t__ size; int ip; int raw; } ;


 int FUNC_0 (struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_1 (struct pt_mapped_section const*,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_insn *VAR_1,
        struct pt_insn_ext *VAR_2,
        const struct pt_mapped_section *VAR_3)
{
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;





 VAR_4 = FUNC_1(VAR_3, VAR_1->raw, sizeof(VAR_1->raw), VAR_1->ip);
 if (VAR_4 < 0)
  return VAR_4;




 VAR_1->size = (uint8_t) VAR_4;

 return FUNC_0(VAR_1, VAR_2);
}
