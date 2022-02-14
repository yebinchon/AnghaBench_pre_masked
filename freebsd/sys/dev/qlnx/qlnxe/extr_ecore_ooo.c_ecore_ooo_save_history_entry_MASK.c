
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ooo_opaque {int dummy; } ;
struct ecore_ooo_history {size_t head_idx; size_t num_of_cqes; struct ooo_opaque* p_cqes; } ;
struct ecore_ooo_info {struct ecore_ooo_history ooo_history; } ;



void FUNC_0(struct ecore_ooo_info *VAR_0,
      struct ooo_opaque *VAR_1)
{
 struct ecore_ooo_history *VAR_2 = &VAR_0->ooo_history;

 if (VAR_2->head_idx == VAR_2->num_of_cqes)
   VAR_2->head_idx = 0;
 VAR_2->p_cqes[VAR_2->head_idx] = *VAR_1;
 VAR_2->head_idx++;
}
