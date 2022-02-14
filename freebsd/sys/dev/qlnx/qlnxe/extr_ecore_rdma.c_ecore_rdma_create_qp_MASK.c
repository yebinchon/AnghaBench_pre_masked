
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct regpair {int dummy; } ;
struct TYPE_8__ {void* lo; void* hi; } ;
struct TYPE_7__ {void* lo; void* hi; } ;
struct ecore_rdma_qp {int sq_num_pages; int rq_num_pages; int req_offloaded; int resp_offloaded; int e2e_flow_control_en; int qpid; int icid; int qp_idx; int xrcd_id; int qp_type; int stats_queue; scalar_t__ use_srq; int srq_id; int rq_pbl_ptr; int rq_cq_id; int sq_pbl_ptr; int sq_cq_id; int dpi; int pd; int fmr_and_reserved_lkey; int signal_all; TYPE_4__ qp_handle_async; TYPE_3__ qp_handle; int iwarp_state; int cur_state; } ;
struct ecore_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct ecore_rdma_create_qp_in_params {int sq_num_pages; int rq_num_pages; int xrcd_id; int qp_type; int stats_queue; int srq_id; int rq_pbl_ptr; int rq_cq_id; int sq_pbl_ptr; int sq_cq_id; int dpi; int pd; int fmr_and_reserved_lkey; int signal_all; scalar_t__ use_srq; int qp_handle_async_lo; int qp_handle_async_hi; int qp_handle_lo; int qp_handle_hi; } ;
struct ecore_hwfn {int p_dev; TYPE_2__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int max_stats_queues; } ;


 int FUNC_0 (int ,char*,void*,struct ecore_rdma_create_qp_in_params*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,...) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct ecore_rdma_qp*) ;
 struct ecore_rdma_qp* VAR_7 ;
 struct ecore_rdma_qp* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_rdma_qp*,struct ecore_rdma_create_qp_out_params*) ;
 int FUNC_9 (struct ecore_hwfn*,int *) ;

struct ecore_rdma_qp *FUNC_10(void *VAR_8,
   struct ecore_rdma_create_qp_in_params *VAR_9,
   struct ecore_rdma_create_qp_out_params *VAR_10)
{
 struct ecore_hwfn *VAR_11 = (struct ecore_hwfn *)VAR_8;
 struct ecore_rdma_qp *VAR_12;
 u8 VAR_13;
 enum _ecore_status_t VAR_14 = 0;

 if (!VAR_8 || !VAR_9 || !VAR_10 || !VAR_11->p_rdma_info) {
  FUNC_0(VAR_11->p_dev,
         "ecore roce create qp failed due to NULL entry (rdma_cxt=%p, in=%p, out=%p, roce_info=?\n",
         VAR_8,
         VAR_9,
         VAR_10);
  return VAR_7;
 }


 VAR_13 = VAR_11->p_rdma_info->dev->max_stats_queues;
 if (VAR_9->stats_queue >= VAR_13) {
  FUNC_0(VAR_11->p_dev,
         "ecore rdma create qp failed due to invalid statistics queue %d. maximum is %d\n",
         VAR_9->stats_queue, VAR_13);
  return VAR_7;
 }

 if (FUNC_4(VAR_11)) {
  if (VAR_9->sq_num_pages*sizeof(struct regpair) >
      VAR_6) {
   FUNC_1(VAR_11->p_dev, 1, "Sq num pages: %d exceeds maximum\n",
      VAR_9->sq_num_pages);
   return VAR_7;
  }
  if (VAR_9->rq_num_pages*sizeof(struct regpair) >
      VAR_5) {
   FUNC_1(VAR_11->p_dev, 1,
      "Rq num pages: %d exceeds maximum\n",
      VAR_9->rq_num_pages);
   return VAR_7;
  }
 }

 VAR_12 = FUNC_7(VAR_11->p_dev,
    VAR_4,
    sizeof(struct ecore_rdma_qp));
 if (!VAR_12)
 {
  FUNC_1(VAR_11, 0, "Failed to allocate ecore_rdma_qp\n");
  return VAR_7;
 }

 VAR_12->cur_state = VAR_2;



 VAR_12->qp_handle.hi = FUNC_5(VAR_9->qp_handle_hi);
 VAR_12->qp_handle.lo = FUNC_5(VAR_9->qp_handle_lo);
 VAR_12->qp_handle_async.hi = FUNC_5(VAR_9->qp_handle_async_hi);
 VAR_12->qp_handle_async.lo = FUNC_5(VAR_9->qp_handle_async_lo);
 VAR_12->use_srq = VAR_9->use_srq;
 VAR_12->signal_all = VAR_9->signal_all;
 VAR_12->fmr_and_reserved_lkey = VAR_9->fmr_and_reserved_lkey;
 VAR_12->pd = VAR_9->pd;
 VAR_12->dpi = VAR_9->dpi;
 VAR_12->sq_cq_id = VAR_9->sq_cq_id;
 VAR_12->sq_num_pages = VAR_9->sq_num_pages;
 VAR_12->sq_pbl_ptr = VAR_9->sq_pbl_ptr;
 VAR_12->rq_cq_id = VAR_9->rq_cq_id;
 VAR_12->rq_num_pages = VAR_9->rq_num_pages;
 VAR_12->rq_pbl_ptr = VAR_9->rq_pbl_ptr;
 VAR_12->srq_id = VAR_9->srq_id;
 VAR_12->req_offloaded = 0;
 VAR_12->resp_offloaded = 0;



 VAR_12->e2e_flow_control_en = VAR_12->use_srq ? 0 : 1;
 VAR_12->stats_queue = VAR_9->stats_queue;
 VAR_12->qp_type = VAR_9->qp_type;
 VAR_12->xrcd_id = VAR_9->xrcd_id;

 if (FUNC_4(VAR_11)) {
  VAR_14 = FUNC_8(VAR_11, VAR_12, VAR_10);
  VAR_12->qpid = VAR_12->icid;
 } else {
  VAR_14 = FUNC_9(VAR_11, &VAR_12->qp_idx);
  VAR_12->icid = FUNC_3(VAR_12->qp_idx);
  VAR_12->qpid = ((0xFF << 16) | VAR_12->icid);
 }

 if (VAR_14 != VAR_3) {
  FUNC_6(VAR_11->p_dev, VAR_12);
  return VAR_7;
 }

 VAR_10->icid = VAR_12->icid;
 VAR_10->qp_id = VAR_12->qpid;



 FUNC_2(VAR_11, VAR_1, "Create QP, rc = %d\n", VAR_14);
 return VAR_12;
}
