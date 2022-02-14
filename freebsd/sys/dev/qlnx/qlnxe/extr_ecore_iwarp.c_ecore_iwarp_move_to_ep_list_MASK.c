
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ecore_iwarp_ep {int list_entry; TYPE_3__* listener; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef int osal_list_t ;
struct TYPE_6__ {int lock; int ep_list; } ;
struct TYPE_4__ {int iw_lock; } ;
struct TYPE_5__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_0,
       osal_list_t *VAR_1, struct ecore_iwarp_ep *VAR_2)
{
 FUNC_2(&VAR_2->listener->lock);
 FUNC_1(&VAR_2->list_entry, &VAR_2->listener->ep_list);
 FUNC_3(&VAR_2->listener->lock);
 FUNC_2(&VAR_0->p_rdma_info->iwarp.iw_lock);
 FUNC_0(&VAR_2->list_entry, VAR_1);
 FUNC_3(&VAR_0->p_rdma_info->iwarp.iw_lock);
}
