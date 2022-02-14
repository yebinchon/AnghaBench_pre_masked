
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {scalar_t__ bound_ptwrite; scalar_t__ bound_vmcs; scalar_t__ bound_paging; scalar_t__ process_insn; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pt_block_decoder *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->process_insn = 0;
 VAR_1->bound_paging = 0;
 VAR_1->bound_vmcs = 0;
 VAR_1->bound_ptwrite = 0;

 return 0;
}
