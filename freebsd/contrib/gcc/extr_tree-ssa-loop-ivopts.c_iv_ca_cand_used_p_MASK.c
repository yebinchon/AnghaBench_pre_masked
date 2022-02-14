
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_cand {size_t id; } ;
struct iv_ca {scalar_t__* n_cand_uses; } ;



__attribute__((used)) static bool
FUNC_0 (struct iv_ca *VAR_0, struct iv_cand *VAR_1)
{
  return VAR_0->n_cand_uses[VAR_1->id] > 0;
}
