
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df_scan_problem_data {int mw_link_pool; int mw_reg_pool; int reg_pool; int insn_pool; int ref_pool; } ;
struct df_ref_info {int dummy; } ;
struct TYPE_2__ {int * refs; int * regs; } ;
struct df {int exit_block_uses; int entry_block_defs; int hardware_regs_used; scalar_t__ insns_size; int * insns; TYPE_1__ use_info; TYPE_1__ def_info; } ;
struct dataflow {int block_pool; scalar_t__ block_info_size; int * block_info; scalar_t__ problem_data; struct df* df; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_4 (struct dataflow *VAR_0)
{
  struct df *VAR_1 = VAR_0->df;
  struct df_scan_problem_data *VAR_2
    = (struct df_scan_problem_data *) VAR_0->problem_data;

  FUNC_1 (VAR_1->def_info.regs);
  FUNC_1 (VAR_1->def_info.refs);
  FUNC_3 (&VAR_1->def_info, 0, (sizeof (struct df_ref_info)));

  FUNC_1 (VAR_1->use_info.regs);
  FUNC_1 (VAR_1->use_info.refs);
  FUNC_3 (&VAR_1->use_info, 0, (sizeof (struct df_ref_info)));

  FUNC_1 (VAR_1->insns);
  VAR_1->insns = ((void*)0);
  VAR_1->insns_size = 0;

  FUNC_1 (VAR_0->block_info);
  VAR_0->block_info = ((void*)0);
  VAR_0->block_info_size = 0;

  FUNC_0 (VAR_1->hardware_regs_used);
  FUNC_0 (VAR_1->entry_block_defs);
  FUNC_0 (VAR_1->exit_block_uses);

  FUNC_2 (VAR_0->block_pool);
  FUNC_2 (VAR_2->ref_pool);
  FUNC_2 (VAR_2->insn_pool);
  FUNC_2 (VAR_2->reg_pool);
  FUNC_2 (VAR_2->mw_reg_pool);
  FUNC_2 (VAR_2->mw_link_pool);
}
