
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {scalar_t__ consider_all_candidates; } ;
struct iv_use {int n_map_members; struct cost_pair* cost_map; } ;
struct iv_cand {int id; } ;
struct cost_pair {struct iv_cand* cand; } ;



__attribute__((used)) static struct cost_pair *
FUNC_0 (struct ivopts_data *VAR_0, struct iv_use *VAR_1,
   struct iv_cand *VAR_2)
{
  unsigned VAR_3, VAR_4;
  struct cost_pair *VAR_5;

  if (!VAR_2)
    return ((void*)0);

  if (VAR_0->consider_all_candidates)
    {
      VAR_5 = VAR_1->cost_map + VAR_2->id;
      if (!VAR_5->cand)
 return ((void*)0);

      return VAR_5;
    }


  VAR_4 = VAR_2->id & (VAR_1->n_map_members - 1);
  for (VAR_3 = VAR_4; VAR_3 < VAR_1->n_map_members; VAR_3++)
    if (VAR_1->cost_map[VAR_3].cand == VAR_2)
      return VAR_1->cost_map + VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (VAR_1->cost_map[VAR_3].cand == VAR_2)
      return VAR_1->cost_map + VAR_3;

  return ((void*)0);
}
