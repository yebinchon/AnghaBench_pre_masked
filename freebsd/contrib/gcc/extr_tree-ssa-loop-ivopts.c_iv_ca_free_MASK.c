
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_ca {struct iv_ca* n_invariant_uses; int cands; struct iv_ca* n_cand_uses; struct iv_ca* cand_for_use; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iv_ca*) ;

__attribute__((used)) static void
FUNC_2 (struct iv_ca **VAR_0)
{
  FUNC_1 ((*VAR_0)->cand_for_use);
  FUNC_1 ((*VAR_0)->n_cand_uses);
  FUNC_0 ((*VAR_0)->cands);
  FUNC_1 ((*VAR_0)->n_invariant_uses);
  FUNC_1 (*VAR_0);
  *VAR_0 = ((void*)0);
}
