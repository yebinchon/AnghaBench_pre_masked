
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; int p_dev; } ;
struct TYPE_2__ {void* dev; void* port; int xrc_srq_map; int srq_map; int tid_map; int toggle_bits; int cq_map; int dpi_map; int xrcd_map; int pd_map; int qp_map; int cid_map; } ;


 scalar_t__ FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (int ,void*) ;
 void* VAR_0 ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,int *,int) ;

void FUNC_4(struct ecore_hwfn *VAR_1)
{
 if (FUNC_0(VAR_1))
  FUNC_2(VAR_1);

 FUNC_3(VAR_1, &VAR_1->p_rdma_info->cid_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->qp_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->pd_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->xrcd_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->dpi_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->cq_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->toggle_bits, 0);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->tid_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->srq_map, 1);
 FUNC_3(VAR_1, &VAR_1->p_rdma_info->xrc_srq_map, 1);

 FUNC_1(VAR_1->p_dev, VAR_1->p_rdma_info->port);
 VAR_1->p_rdma_info->port = VAR_0;

 FUNC_1(VAR_1->p_dev, VAR_1->p_rdma_info->dev);
 VAR_1->p_rdma_info->dev = VAR_0;
}
