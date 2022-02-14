
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int list_entry; } ;
struct ecore_hwfn {TYPE_1__* p_ptt_pool; } ;
struct TYPE_2__ {int lock; int free_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ecore_hwfn *VAR_0,
         struct ecore_ptt *VAR_1) {



 FUNC_1(&VAR_0->p_ptt_pool->lock);
 FUNC_0(&VAR_1->list_entry, &VAR_0->p_ptt_pool->free_list);
 FUNC_2(&VAR_0->p_ptt_pool->lock);
}
