
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_spq_entry {int list; } ;
struct ecore_hwfn {TYPE_1__* p_spq; } ;
struct TYPE_2__ {int free_pool; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_0,
         struct ecore_spq_entry *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->p_spq->free_pool);
}
