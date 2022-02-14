
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int dummy; } ;
struct pt_insn {int dummy; } ;
struct pt_block_decoder {int process_insn; struct pt_insn_ext iext; struct pt_insn insn; } ;


 int FUNC_0 (struct pt_block_decoder*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_block_decoder *VAR_2,
    const struct pt_insn *VAR_3,
    const struct pt_insn_ext *VAR_4)
{
 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_0;


 if (VAR_2->process_insn)
  return -VAR_0;

 VAR_2->process_insn = 1;
 VAR_2->insn = *VAR_3;
 VAR_2->iext = *VAR_4;

 return FUNC_0(VAR_2, VAR_1);
}
