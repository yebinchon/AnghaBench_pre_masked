
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_ib_send_work {int dummy; } ;
struct rds_ib_recv_work {int dummy; } ;
struct rds_ib_device {int max_wrs; int max_sge; int mr; int pd; } ;
struct TYPE_5__ {int w_nr; } ;
struct rds_ib_connection {int * i_recv_cq; int * i_send_cq; int i_mr; int i_pd; void* i_recvs; TYPE_2__ i_recv_ring; void* i_sends; TYPE_2__ i_send_ring; void* i_ack; int i_ack_dma; void* i_recv_hdrs; int i_recv_hdrs_dma; void* i_send_hdrs; int i_send_hdrs_dma; TYPE_3__* i_cm_id; } ;
struct rds_header {int dummy; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;
struct TYPE_4__ {int max_send_wr; int max_recv_wr; int max_recv_sge; int max_send_sge; } ;
struct ib_qp_init_attr {int * recv_cq; int * send_cq; int qp_type; int sq_sig_type; TYPE_1__ cap; struct rds_connection* qp_context; int event_handler; } ;
struct ib_device {int dummy; } ;
typedef int attr ;
struct TYPE_6__ {struct ib_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 void* FUNC_2 (struct ib_device*,int ,int ,struct rds_connection*,int,int ) ;
 void* FUNC_3 (struct ib_device*,int,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ib_device*) ;
 int FUNC_6 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_7 (TYPE_3__*,int ,struct ib_qp_init_attr*) ;
 int FUNC_8 (struct rds_ib_device*,struct rds_connection*) ;
 int VAR_8 ;
 int FUNC_9 (struct rds_ib_device*) ;
 struct rds_ib_device* FUNC_10 (struct ib_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (struct rds_ib_connection*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int VAR_11 ;
 int FUNC_13 (char*,...) ;
 void* FUNC_14 (int,int ) ;

__attribute__((used)) static int FUNC_15(struct rds_connection *VAR_12)
{
 struct rds_ib_connection *VAR_13 = VAR_12->c_transport_data;
 struct ib_device *VAR_14 = VAR_13->i_cm_id->device;
 struct ib_qp_init_attr VAR_15;
 struct rds_ib_device *VAR_16;
 int VAR_17;





 VAR_16 = FUNC_10(VAR_14);
 if (!VAR_16)
  return -VAR_1;


 FUNC_8(VAR_16, VAR_12);

 if (VAR_16->max_wrs < VAR_13->i_send_ring.w_nr + 1)
  FUNC_12(&VAR_13->i_send_ring, VAR_16->max_wrs - 1);
 if (VAR_16->max_wrs < VAR_13->i_recv_ring.w_nr + 1)
  FUNC_12(&VAR_13->i_recv_ring, VAR_16->max_wrs - 1);


 VAR_13->i_pd = VAR_16->pd;
 VAR_13->i_mr = VAR_16->mr;

 VAR_13->i_send_cq = FUNC_2(VAR_14, VAR_11,
         VAR_8, VAR_12,
         VAR_13->i_send_ring.w_nr + 1, 0);
 if (FUNC_0(VAR_13->i_send_cq)) {
  VAR_17 = FUNC_1(VAR_13->i_send_cq);
  VAR_13->i_send_cq = ((void*)0);
  FUNC_13("ib_create_cq send failed: %d\n", VAR_17);
  goto out;
 }

 VAR_13->i_recv_cq = FUNC_2(VAR_14, VAR_10,
         VAR_8, VAR_12,
         VAR_13->i_recv_ring.w_nr, 0);
 if (FUNC_0(VAR_13->i_recv_cq)) {
  VAR_17 = FUNC_1(VAR_13->i_recv_cq);
  VAR_13->i_recv_cq = ((void*)0);
  FUNC_13("ib_create_cq recv failed: %d\n", VAR_17);
  goto out;
 }

 VAR_17 = FUNC_4(VAR_13->i_send_cq, VAR_3);
 if (VAR_17) {
  FUNC_13("ib_req_notify_cq send failed: %d\n", VAR_17);
  goto out;
 }

 VAR_17 = FUNC_4(VAR_13->i_recv_cq, VAR_4);
 if (VAR_17) {
  FUNC_13("ib_req_notify_cq recv failed: %d\n", VAR_17);
  goto out;
 }


 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.event_handler = VAR_9;
 VAR_15.qp_context = VAR_12;

 VAR_15.cap.max_send_wr = VAR_13->i_send_ring.w_nr + 1;
 VAR_15.cap.max_recv_wr = VAR_13->i_recv_ring.w_nr + 1;
 VAR_15.cap.max_send_sge = VAR_16->max_sge;
 VAR_15.cap.max_recv_sge = VAR_7;
 VAR_15.sq_sig_type = VAR_6;
 VAR_15.qp_type = VAR_5;
 VAR_15.send_cq = VAR_13->i_send_cq;
 VAR_15.recv_cq = VAR_13->i_recv_cq;





 VAR_17 = FUNC_7(VAR_13->i_cm_id, VAR_13->i_pd, &VAR_15);
 if (VAR_17) {
  FUNC_13("rdma_create_qp failed: %d\n", VAR_17);
  goto out;
 }

 VAR_13->i_send_hdrs = FUNC_3(VAR_14,
        VAR_13->i_send_ring.w_nr *
      sizeof(struct rds_header),
        &VAR_13->i_send_hdrs_dma, VAR_2);
 if (!VAR_13->i_send_hdrs) {
  VAR_17 = -VAR_0;
  FUNC_13("ib_dma_alloc_coherent send failed\n");
  goto out;
 }

 VAR_13->i_recv_hdrs = FUNC_3(VAR_14,
        VAR_13->i_recv_ring.w_nr *
      sizeof(struct rds_header),
        &VAR_13->i_recv_hdrs_dma, VAR_2);
 if (!VAR_13->i_recv_hdrs) {
  VAR_17 = -VAR_0;
  FUNC_13("ib_dma_alloc_coherent recv failed\n");
  goto out;
 }

 VAR_13->i_ack = FUNC_3(VAR_14, sizeof(struct rds_header),
           &VAR_13->i_ack_dma, VAR_2);
 if (!VAR_13->i_ack) {
  VAR_17 = -VAR_0;
  FUNC_13("ib_dma_alloc_coherent ack failed\n");
  goto out;
 }

 VAR_13->i_sends = FUNC_14(VAR_13->i_send_ring.w_nr * sizeof(struct rds_ib_send_work),
       FUNC_5(VAR_14));
 if (!VAR_13->i_sends) {
  VAR_17 = -VAR_0;
  FUNC_13("send allocation failed\n");
  goto out;
 }

 VAR_13->i_recvs = FUNC_14(VAR_13->i_recv_ring.w_nr * sizeof(struct rds_ib_recv_work),
       FUNC_5(VAR_14));
 if (!VAR_13->i_recvs) {
  VAR_17 = -VAR_0;
  FUNC_13("recv allocation failed\n");
  goto out;
 }

 FUNC_11(VAR_13);

 FUNC_13("conn %p pd %p mr %p cq %p %p\n", VAR_12, VAR_13->i_pd, VAR_13->i_mr,
   VAR_13->i_send_cq, VAR_13->i_recv_cq);

out:
 FUNC_9(VAR_16);
 return VAR_17;
}
