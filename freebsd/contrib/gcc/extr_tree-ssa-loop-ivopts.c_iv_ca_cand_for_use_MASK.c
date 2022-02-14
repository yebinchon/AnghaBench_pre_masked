
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_use {size_t id; } ;
struct iv_ca {struct cost_pair** cand_for_use; } ;
struct cost_pair {int dummy; } ;



__attribute__((used)) static struct cost_pair *
FUNC_0 (struct iv_ca *VAR_0, struct iv_use *VAR_1)
{
  return VAR_0->cand_for_use[VAR_1->id];
}
