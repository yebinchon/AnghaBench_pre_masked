
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_scan_problem_data {int reg_pool; } ;
struct df_reg_info {int dummy; } ;
struct df_ref_info {unsigned int regs_size; unsigned int regs_inited; struct df_reg_info** regs; } ;
struct dataflow {scalar_t__ problem_data; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (struct df_reg_info*,int ,int) ;
 struct df_reg_info* FUNC_2 (int ) ;
 struct df_reg_info** FUNC_3 (struct df_reg_info**,unsigned int) ;

__attribute__((used)) static void
FUNC_4 (struct dataflow *VAR_0, struct df_ref_info *VAR_1)
{
  unsigned int VAR_2 = FUNC_0 ();
  unsigned int VAR_3 = VAR_2;
  struct df_scan_problem_data *VAR_4
    = (struct df_scan_problem_data *) VAR_0->problem_data;
  unsigned int VAR_5;

  if (VAR_1->regs_size < VAR_3)
    {
      VAR_3 += VAR_3 / 4;
      VAR_1->regs = FUNC_3 (VAR_1->regs,
     VAR_3 *sizeof (struct df_reg_info*));
      VAR_1->regs_size = VAR_3;
    }

  for (VAR_5 = VAR_1->regs_inited; VAR_5 < VAR_2; VAR_5++)
    {
      struct df_reg_info *VAR_6 = FUNC_2 (VAR_4->reg_pool);
      FUNC_1 (VAR_6, 0, sizeof (struct df_reg_info));
      VAR_1->regs[VAR_5] = VAR_6;
    }

  VAR_1->regs_inited = VAR_2;
}
