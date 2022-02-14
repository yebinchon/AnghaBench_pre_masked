
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
struct ivopts_data {scalar_t__ consider_all_candidates; } ;
struct iv_use {int n_map_members; TYPE_1__* cost_map; } ;
struct iv_cand {size_t id; } ;
typedef void* bitmap ;
struct TYPE_2__ {unsigned int cost; void* value; void* depends_on; struct iv_cand* cand; } ;


 int FUNC_0 (void*) ;
 unsigned int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2 (struct ivopts_data *VAR_1,
   struct iv_use *VAR_2, struct iv_cand *VAR_3, unsigned VAR_4,
   bitmap VAR_5, tree VAR_6)
{
  unsigned VAR_7, VAR_8;

  if (VAR_4 == VAR_0)
    {
      FUNC_0 (VAR_5);
      return;
    }

  if (VAR_1->consider_all_candidates)
    {
      VAR_2->cost_map[VAR_3->id].cand = VAR_3;
      VAR_2->cost_map[VAR_3->id].cost = VAR_4;
      VAR_2->cost_map[VAR_3->id].depends_on = VAR_5;
      VAR_2->cost_map[VAR_3->id].value = VAR_6;
      return;
    }


  VAR_8 = VAR_3->id & (VAR_2->n_map_members - 1);
  for (VAR_7 = VAR_8; VAR_7 < VAR_2->n_map_members; VAR_7++)
    if (!VAR_2->cost_map[VAR_7].cand)
      goto found;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    if (!VAR_2->cost_map[VAR_7].cand)
      goto found;

  FUNC_1 ();

found:
  VAR_2->cost_map[VAR_7].cand = VAR_3;
  VAR_2->cost_map[VAR_7].cost = VAR_4;
  VAR_2->cost_map[VAR_7].depends_on = VAR_5;
  VAR_2->cost_map[VAR_7].value = VAR_6;
}
