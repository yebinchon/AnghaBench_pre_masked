
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ecore_iwarp_ep {scalar_t__ tcp_cid; int cm_info; TYPE_3__* qp; int state; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_6__ {void* ep; } ;
struct TYPE_4__ {int ep_free_list; } ;
struct TYPE_5__ {TYPE_1__ iwarp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 void* VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__*) ;
 int FUNC_2 (struct ecore_hwfn*,int *,struct ecore_iwarp_ep*) ;

__attribute__((used)) static void
FUNC_3(struct ecore_hwfn *VAR_3,
        struct ecore_iwarp_ep *VAR_4)
{
 VAR_4->state = VAR_0;
 if (VAR_4->qp)
  VAR_4->qp->ep = VAR_2;
 VAR_4->qp = VAR_2;
 FUNC_0(&VAR_4->cm_info, 0, sizeof(VAR_4->cm_info));

 if (VAR_4->tcp_cid == VAR_1) {



  FUNC_1(VAR_3, &VAR_4->tcp_cid);
 }

 FUNC_2(VAR_3,
        &VAR_3->p_rdma_info->iwarp.ep_free_list,
        VAR_4);
}
