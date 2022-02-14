
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {int dummy; } ;
struct pt_block_decoder {int dummy; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,int ) ;
 int FUNC_1 (struct pt_block_decoder*,struct pt_insn*,struct pt_insn_ext*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_block_decoder *VAR_1,
        struct pt_block *VAR_2,
        uint64_t VAR_3)
{
 struct pt_insn_ext VAR_4;
 struct pt_insn VAR_5;
 int VAR_6;






 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_4, VAR_3);
 if (VAR_6 != -VAR_0)
  return VAR_6;




 return FUNC_1(VAR_1, &VAR_5, &VAR_4);
}
