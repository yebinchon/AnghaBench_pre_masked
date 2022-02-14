
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_block_decoder {unsigned long long ip; int asid; int retstack; int event; scalar_t__ bound_ptwrite; scalar_t__ bound_vmcs; scalar_t__ bound_paging; scalar_t__ process_insn; scalar_t__ speculative; scalar_t__ process_event; scalar_t__ enabled; scalar_t__ status; int mode; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct pt_block_decoder *VAR_1)
{
 if (!VAR_1)
  return;

 VAR_1->mode = VAR_0;
 VAR_1->ip = 0ull;
 VAR_1->status = 0;
 VAR_1->enabled = 0;
 VAR_1->process_event = 0;
 VAR_1->speculative = 0;
 VAR_1->process_insn = 0;
 VAR_1->bound_paging = 0;
 VAR_1->bound_vmcs = 0;
 VAR_1->bound_ptwrite = 0;

 FUNC_0(&VAR_1->event, 0, sizeof(VAR_1->event));
 FUNC_2(&VAR_1->retstack);
 FUNC_1(&VAR_1->asid);
}
