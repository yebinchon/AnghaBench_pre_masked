
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_scan_problem_data {int insn_pool; } ;
struct df_insn_info {int dummy; } ;
struct df {int dummy; } ;
struct dataflow {scalar_t__ problem_data; struct df* df; } ;
typedef int rtx ;


 struct df_insn_info* FUNC_0 (struct df*,int ) ;
 int FUNC_1 (struct df*,int ,struct df_insn_info*) ;
 int FUNC_2 (struct df_insn_info*,int ,int) ;
 struct df_insn_info* FUNC_3 (int ) ;

__attribute__((used)) static struct df_insn_info *
FUNC_4 (struct dataflow *VAR_0, rtx VAR_1)
{
  struct df *VAR_2 = VAR_0->df;
  struct df_scan_problem_data *VAR_3
    = (struct df_scan_problem_data *) VAR_0->problem_data;

  struct df_insn_info *VAR_4 = FUNC_0 (VAR_2, VAR_1);
  if (!VAR_4)
    {
      VAR_4 = FUNC_3 (VAR_3->insn_pool);
      FUNC_1 (VAR_2, VAR_1, VAR_4);
    }
  FUNC_2 (VAR_4, 0, sizeof (struct df_insn_info));

  return VAR_4;
}
