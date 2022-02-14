
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivopts_data {int dummy; } ;
struct iv_use {unsigned int id; } ;
struct iv_ca {scalar_t__* n_cand_uses; int cand_use_cost; int cand_cost; int n_cands; int n_regs; int cands; struct cost_pair** cand_for_use; int bad_uses; } ;
struct cost_pair {int depends_on; scalar_t__ cost; TYPE_1__* cand; } ;
struct TYPE_2__ {unsigned int id; int depends_on; scalar_t__ cost; scalar_t__ iv; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct ivopts_data*,struct iv_ca*) ;
 int FUNC_2 (struct iv_ca*,int ) ;

__attribute__((used)) static void
FUNC_3 (struct ivopts_data *VAR_0, struct iv_ca *VAR_1,
   struct iv_use *VAR_2)
{
  unsigned VAR_3 = VAR_2->id, VAR_4;
  struct cost_pair *VAR_5;

  VAR_5 = VAR_1->cand_for_use[VAR_3];
  if (!VAR_5)
    return;
  VAR_4 = VAR_5->cand->id;

  VAR_1->bad_uses++;
  VAR_1->cand_for_use[VAR_3] = ((void*)0);
  VAR_1->n_cand_uses[VAR_4]--;

  if (VAR_1->n_cand_uses[VAR_4] == 0)
    {
      FUNC_0 (VAR_1->cands, VAR_4);

      if (VAR_5->cand->iv)
 VAR_1->n_regs--;
      VAR_1->n_cands--;
      VAR_1->cand_cost -= VAR_5->cand->cost;

      FUNC_2 (VAR_1, VAR_5->cand->depends_on);
    }

  VAR_1->cand_use_cost -= VAR_5->cost;

  FUNC_2 (VAR_1, VAR_5->depends_on);
  FUNC_1 (VAR_0, VAR_1);
}
