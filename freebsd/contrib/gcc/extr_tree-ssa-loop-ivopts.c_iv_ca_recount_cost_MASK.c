
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_ca {unsigned int cost; int n_regs; scalar_t__ cand_cost; scalar_t__ cand_use_cost; } ;


 scalar_t__ FUNC_0 (struct ivopts_data*,int ) ;

__attribute__((used)) static void
FUNC_1 (struct ivopts_data *VAR_0, struct iv_ca *VAR_1)
{
  unsigned VAR_2 = 0;

  VAR_2 += VAR_1->cand_use_cost;
  VAR_2 += VAR_1->cand_cost;
  VAR_2 += FUNC_0 (VAR_0, VAR_1->n_regs);

  VAR_1->cost = VAR_2;
}
