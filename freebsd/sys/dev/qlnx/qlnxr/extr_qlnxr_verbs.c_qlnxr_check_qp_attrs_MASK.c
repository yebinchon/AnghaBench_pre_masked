
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlnxr_dev {scalar_t__ gsi_qp_created; int * ha; int rdma_ctx; } ;
struct qlnxr_cq {scalar_t__ cq_type; } ;
struct ib_udata {int dummy; } ;
struct TYPE_4__ {int max_recv_sge; int max_send_sge; int max_inline_data; int max_recv_wr; int max_send_wr; int qpg_tss_mask_sz; } ;
struct ib_qp_init_attr {int recv_cq; int send_cq; int qp_type; TYPE_2__ cap; scalar_t__ srq; int port_num; int qpg_type; int create_flags; int sq_sig_type; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct ecore_rdma_device {int max_sge; int max_inline; int max_wqe; int bad_pkey_counter; int reserved_lkey; int dev_ack_delay; scalar_t__ page_size_caps; int max_stats_queues; int max_srq_wr; int max_pkey; int max_ah; int max_pd; scalar_t__ max_mr_mw_fmr_size; int max_mr_mw_fmr_pbl; int max_fmr; int max_mw; int max_cqe; scalar_t__ max_mr_size; int max_mr; int max_srq; int max_qp; int max_cq; int max_dev_resp_rd_atomic_resc; int max_qp_req_rd_atomic_resc; int max_qp_resp_rd_atomic_resc; int max_srq_wqe; int max_srq_sge; int max_cnq; scalar_t__ sys_image_guid; scalar_t__ node_guid; scalar_t__ fw_ver; int hw_ver; int vendor_part_id; int vendor_id; } ;
typedef int qlnx_host_t ;
struct TYPE_3__ {scalar_t__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 struct ecore_rdma_device* FUNC_2 (int ) ;
 struct qlnxr_cq* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ib_pd *VAR_4,
 struct qlnxr_dev *VAR_5,
 struct ib_qp_init_attr *VAR_6,
 struct ib_udata *VAR_7)
{
 struct ecore_rdma_device *VAR_8;
 qlnx_host_t *VAR_9;

 VAR_8 = FUNC_2(VAR_5->rdma_ctx);
 VAR_9 = VAR_5->ha;

 FUNC_1(VAR_9, "enter\n");

 FUNC_1(VAR_9, "attrs->sq_sig_type = %d\n", VAR_6->sq_sig_type);
 FUNC_1(VAR_9, "attrs->qp_type = %d\n", VAR_6->qp_type);
 FUNC_1(VAR_9, "attrs->create_flags = %d\n", VAR_6->create_flags);


 FUNC_1(VAR_9, "attrs->qpg_type = %d\n", VAR_6->qpg_type);


 FUNC_1(VAR_9, "attrs->port_num = %d\n", VAR_6->port_num);
 FUNC_1(VAR_9, "attrs->cap.max_send_wr = 0x%x\n", VAR_6->cap.max_send_wr);
 FUNC_1(VAR_9, "attrs->cap.max_recv_wr = 0x%x\n", VAR_6->cap.max_recv_wr);
 FUNC_1(VAR_9, "attrs->cap.max_send_sge = 0x%x\n", VAR_6->cap.max_send_sge);
 FUNC_1(VAR_9, "attrs->cap.max_recv_sge = 0x%x\n", VAR_6->cap.max_recv_sge);
 FUNC_1(VAR_9, "attrs->cap.max_inline_data = 0x%x\n",
  VAR_6->cap.max_inline_data);


 FUNC_1(VAR_9, "attrs->cap.qpg_tss_mask_sz = 0x%x\n",
  VAR_6->cap.qpg_tss_mask_sz);


 FUNC_1(VAR_9, "\n\nqattr->vendor_id = 0x%x\n", VAR_8->vendor_id);
 FUNC_1(VAR_9, "qattr->vendor_part_id = 0x%x\n", VAR_8->vendor_part_id);
 FUNC_1(VAR_9, "qattr->hw_ver = 0x%x\n", VAR_8->hw_ver);
 FUNC_1(VAR_9, "qattr->fw_ver = %p\n", (void *)VAR_8->fw_ver);
 FUNC_1(VAR_9, "qattr->node_guid = %p\n", (void *)VAR_8->node_guid);
 FUNC_1(VAR_9, "qattr->sys_image_guid = %p\n",
  (void *)VAR_8->sys_image_guid);
 FUNC_1(VAR_9, "qattr->max_cnq = 0x%x\n", VAR_8->max_cnq);
 FUNC_1(VAR_9, "qattr->max_sge = 0x%x\n", VAR_8->max_sge);
 FUNC_1(VAR_9, "qattr->max_srq_sge = 0x%x\n", VAR_8->max_srq_sge);
 FUNC_1(VAR_9, "qattr->max_inline = 0x%x\n", VAR_8->max_inline);
 FUNC_1(VAR_9, "qattr->max_wqe = 0x%x\n", VAR_8->max_wqe);
 FUNC_1(VAR_9, "qattr->max_srq_wqe = 0x%x\n", VAR_8->max_srq_wqe);
 FUNC_1(VAR_9, "qattr->max_qp_resp_rd_atomic_resc = 0x%x\n",
  VAR_8->max_qp_resp_rd_atomic_resc);
 FUNC_1(VAR_9, "qattr->max_qp_req_rd_atomic_resc = 0x%x\n",
  VAR_8->max_qp_req_rd_atomic_resc);
 FUNC_1(VAR_9, "qattr->max_dev_resp_rd_atomic_resc = 0x%x\n",
  VAR_8->max_dev_resp_rd_atomic_resc);
 FUNC_1(VAR_9, "qattr->max_cq = 0x%x\n", VAR_8->max_cq);
 FUNC_1(VAR_9, "qattr->max_qp = 0x%x\n", VAR_8->max_qp);
 FUNC_1(VAR_9, "qattr->max_srq = 0x%x\n", VAR_8->max_srq);
 FUNC_1(VAR_9, "qattr->max_mr = 0x%x\n", VAR_8->max_mr);
 FUNC_1(VAR_9, "qattr->max_mr_size = %p\n", (void *)VAR_8->max_mr_size);
 FUNC_1(VAR_9, "qattr->max_cqe = 0x%x\n", VAR_8->max_cqe);
 FUNC_1(VAR_9, "qattr->max_mw = 0x%x\n", VAR_8->max_mw);
 FUNC_1(VAR_9, "qattr->max_fmr = 0x%x\n", VAR_8->max_fmr);
 FUNC_1(VAR_9, "qattr->max_mr_mw_fmr_pbl = 0x%x\n",
  VAR_8->max_mr_mw_fmr_pbl);
 FUNC_1(VAR_9, "qattr->max_mr_mw_fmr_size = %p\n",
  (void *)VAR_8->max_mr_mw_fmr_size);
 FUNC_1(VAR_9, "qattr->max_pd = 0x%x\n", VAR_8->max_pd);
 FUNC_1(VAR_9, "qattr->max_ah = 0x%x\n", VAR_8->max_ah);
 FUNC_1(VAR_9, "qattr->max_pkey = 0x%x\n", VAR_8->max_pkey);
 FUNC_1(VAR_9, "qattr->max_srq_wr = 0x%x\n", VAR_8->max_srq_wr);
 FUNC_1(VAR_9, "qattr->max_stats_queues = 0x%x\n",
  VAR_8->max_stats_queues);

 FUNC_1(VAR_9, "qattr->page_size_caps = %p\n",
  (void *)VAR_8->page_size_caps);
 FUNC_1(VAR_9, "qattr->dev_ack_delay = 0x%x\n", VAR_8->dev_ack_delay);
 FUNC_1(VAR_9, "qattr->reserved_lkey = 0x%x\n", VAR_8->reserved_lkey);
 FUNC_1(VAR_9, "qattr->bad_pkey_counter = 0x%x\n",
  VAR_8->bad_pkey_counter);

 if ((VAR_6->qp_type == VAR_1) && VAR_7) {
  FUNC_1(VAR_9, "unexpected udata when creating GSI QP\n");
  return -VAR_0;
 }

 if (VAR_7 && !(VAR_4->uobject && VAR_4->uobject->context)) {
  FUNC_1(VAR_9, "called from user without context\n");
  return -VAR_0;
 }


 if (VAR_6->qp_type != VAR_2 && VAR_6->qp_type != VAR_1) {
  FUNC_1(VAR_9, "unsupported qp type=0x%x requested\n",
      VAR_6->qp_type);
  return -VAR_0;
 }
 if (VAR_6->qp_type == VAR_1 && VAR_6->srq) {
  FUNC_1(VAR_9, "cannot create GSI qp with SRQ\n");
  return -VAR_0;
 }

 if (VAR_6->cap.max_send_wr > VAR_8->max_wqe) {
  FUNC_1(VAR_9, "cannot create a SQ with %d elements "
   " (max_send_wr=0x%x)\n",
   VAR_6->cap.max_send_wr, VAR_8->max_wqe);
  return -VAR_0;
 }
 if (!VAR_6->srq && (VAR_6->cap.max_recv_wr > VAR_8->max_wqe)) {
  FUNC_1(VAR_9, "cannot create a RQ with %d elements"
   " (max_recv_wr=0x%x)\n",
   VAR_6->cap.max_recv_wr, VAR_8->max_wqe);
  return -VAR_0;
 }
 if (VAR_6->cap.max_inline_data > VAR_8->max_inline) {
  FUNC_1(VAR_9,
   "unsupported inline data size=0x%x "
   "requested (max_inline=0x%x)\n",
   VAR_6->cap.max_inline_data, VAR_8->max_inline);
  return -VAR_0;
 }
 if (VAR_6->cap.max_send_sge > VAR_8->max_sge) {
  FUNC_1(VAR_9,
   "unsupported send_sge=0x%x "
   "requested (max_send_sge=0x%x)\n",
   VAR_6->cap.max_send_sge, VAR_8->max_sge);
  return -VAR_0;
 }
 if (VAR_6->cap.max_recv_sge > VAR_8->max_sge) {
  FUNC_1(VAR_9,
   "unsupported recv_sge=0x%x requested "
   " (max_recv_sge=0x%x)\n",
   VAR_6->cap.max_recv_sge, VAR_8->max_sge);
  return -VAR_0;
 }

 if (VAR_4->uobject && VAR_6->qp_type == VAR_1) {
  FUNC_1(VAR_9,
   "userspace can't create special QPs of type=0x%x\n",
   VAR_6->qp_type);
  return -VAR_0;
 }

 if (VAR_6->qp_type == VAR_1 && VAR_5->gsi_qp_created) {
  FUNC_1(VAR_9,
   "create qp: GSI special QPs already created.\n");
  return -VAR_0;
 }


 if ((VAR_6->qp_type != VAR_1) && (VAR_5->gsi_qp_created)) {
  struct qlnxr_cq *VAR_10 = FUNC_3(VAR_6->send_cq);
  struct qlnxr_cq *VAR_11 = FUNC_3(VAR_6->recv_cq);

  if ((VAR_10->cq_type == VAR_3) ||
      (VAR_11->cq_type == VAR_3)) {
   FUNC_0(VAR_9, "consumer QP cannot use GSI CQs.\n");
   return -VAR_0;
  }
 }
 FUNC_1(VAR_9, "exit\n");
 return 0;
}
