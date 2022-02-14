
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ecore_rdma_counters_out_params {unsigned int max_pd; unsigned int max_dpi; unsigned int max_cq; unsigned int max_qp; unsigned int max_tid; unsigned int max_srq; unsigned int max_xrc_srq; unsigned int max_xrcd; void* xrcd_count; void* xrc_srq_count; void* srq_count; void* tid_count; void* qp_count; void* cq_count; void* dpi_count; void* pd_count; } ;
struct ecore_hwfn {TYPE_9__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_17__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_16__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_15__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_14__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_13__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_12__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_11__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_10__ {unsigned long* bitmap; unsigned int max_count; } ;
struct TYPE_18__ {TYPE_8__ xrcd_map; TYPE_7__ xrc_srq_map; TYPE_6__ srq_map; TYPE_5__ tid_map; TYPE_4__ qp_map; TYPE_3__ cq_map; TYPE_2__ dpi_map; TYPE_1__ pd_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long*,unsigned int) ;
 int FUNC_1 (struct ecore_rdma_counters_out_params*,int ,int) ;

enum _ecore_status_t
FUNC_2(void *VAR_2,
     struct ecore_rdma_counters_out_params *VAR_3)
{
 struct ecore_hwfn *VAR_4 = (struct ecore_hwfn *)VAR_2;
 unsigned long *VAR_5;
 unsigned int VAR_6;

 if (!VAR_4->p_rdma_info)
  return VAR_0;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_5 = VAR_4->p_rdma_info->pd_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->pd_map.max_count;
 VAR_3->pd_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_pd = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->dpi_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->dpi_map.max_count;
 VAR_3->dpi_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_dpi = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->cq_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->cq_map.max_count;
 VAR_3->cq_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_cq = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->qp_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->qp_map.max_count;
 VAR_3->qp_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_qp = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->tid_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->tid_map.max_count;
 VAR_3->tid_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_tid = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->srq_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->srq_map.max_count;
 VAR_3->srq_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_srq = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->xrc_srq_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->xrc_srq_map.max_count;
 VAR_3->xrc_srq_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_xrc_srq = VAR_6;

 VAR_5 = VAR_4->p_rdma_info->xrcd_map.bitmap;
 VAR_6 = VAR_4->p_rdma_info->xrcd_map.max_count;
 VAR_3->xrcd_count = FUNC_0(VAR_5, VAR_6);
 VAR_3->max_xrcd = VAR_6;

 return VAR_1;
}
