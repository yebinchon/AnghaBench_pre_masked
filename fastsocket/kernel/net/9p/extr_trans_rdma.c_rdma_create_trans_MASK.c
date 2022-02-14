
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


struct sockaddr {int dummy; } ;
struct TYPE_22__ {int max_recv_sge; int max_send_sge; scalar_t__ max_recv_wr; scalar_t__ max_send_wr; } ;
struct rdma_conn_param {int initiator_depth; int responder_resources; scalar_t__ private_data_len; int * private_data; TYPE_4__* recv_cq; TYPE_4__* send_cq; int qp_type; int sq_sig_type; TYPE_3__ cap; struct p9_client* qp_context; int event_handler; } ;
struct TYPE_20__ {int s_addr; } ;
struct TYPE_21__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct p9_trans_rdma {scalar_t__ state; int cm_done; TYPE_4__* cm_id; int qp; TYPE_4__* pd; TYPE_4__* cq; TYPE_4__* dma_mr; int lkey; int timeout; TYPE_2__ addr; } ;
struct p9_rdma_opts {scalar_t__ rq_depth; scalar_t__ sq_depth; int port; } ;
struct p9_client {int status; struct p9_trans_rdma* trans; } ;
struct ib_qp_init_attr {int initiator_depth; int responder_resources; scalar_t__ private_data_len; int * private_data; TYPE_4__* recv_cq; TYPE_4__* send_cq; int qp_type; int sq_sig_type; TYPE_3__ cap; struct p9_client* qp_context; int event_handler; } ;
struct ib_device_attr {int device_cap_flags; } ;
typedef int conn_param ;
struct TYPE_23__ {int qp; int lkey; TYPE_11__* device; } ;
struct TYPE_19__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct p9_trans_rdma* FUNC_1 (struct p9_rdma_opts*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_11__*) ;
 TYPE_4__* FUNC_4 (TYPE_11__*,int ,int ,struct p9_client*,scalar_t__,int ) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_11__*,struct ib_device_attr*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct rdma_conn_param*,int ,int) ;
 int VAR_19 ;
 int FUNC_10 (char*,struct p9_rdma_opts*) ;
 int VAR_20 ;
 int FUNC_11 (TYPE_4__*,struct rdma_conn_param*) ;
 TYPE_4__* FUNC_12 (int ,struct p9_client*,int ,int ) ;
 int FUNC_13 (TYPE_4__*,TYPE_4__*,struct rdma_conn_param*) ;
 int FUNC_14 (struct p9_trans_rdma*) ;
 int FUNC_15 (TYPE_4__*,int *,struct sockaddr*,int ) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct p9_client *VAR_21, const char *VAR_22, char *VAR_23)
{
 int VAR_24;
 struct p9_rdma_opts VAR_25;
 struct p9_trans_rdma *VAR_26;
 struct rdma_conn_param VAR_27;
 struct ib_qp_init_attr VAR_28;
 struct ib_device_attr VAR_29;


 VAR_24 = FUNC_10(VAR_23, &VAR_25);
 if (VAR_24 < 0)
  return VAR_24;


 VAR_26 = FUNC_1(&VAR_25);
 if (!VAR_26)
  return -VAR_2;


 VAR_26->cm_id = FUNC_12(VAR_19, VAR_21, VAR_16,
         VAR_7);
 if (FUNC_0(VAR_26->cm_id))
  goto error;


 VAR_21->trans = VAR_26;


 VAR_26->addr.sin_family = VAR_0;
 VAR_26->addr.sin_addr.s_addr = FUNC_8(VAR_22);
 VAR_26->addr.sin_port = FUNC_2(VAR_25.port);
 VAR_24 = FUNC_15(VAR_26->cm_id, ((void*)0),
    (struct sockaddr *)&VAR_26->addr,
    VAR_26->timeout);
 if (VAR_24)
  goto error;
 VAR_24 = FUNC_17(&VAR_26->cm_done);
 if (VAR_24 || (VAR_26->state != VAR_9))
  goto error;


 VAR_24 = FUNC_16(VAR_26->cm_id, VAR_26->timeout);
 if (VAR_24)
  goto error;
 VAR_24 = FUNC_17(&VAR_26->cm_done);
 if (VAR_24 || (VAR_26->state != VAR_14))
  goto error;


 VAR_24 = FUNC_6(VAR_26->cm_id->device, &VAR_29);
 if (VAR_24)
  goto error;


 VAR_26->cq = FUNC_4(VAR_26->cm_id->device, VAR_17,
    VAR_18, VAR_21,
    VAR_25.sq_depth + VAR_25.rq_depth + 1, 0);
 if (FUNC_0(VAR_26->cq))
  goto error;
 FUNC_7(VAR_26->cq, VAR_5);


 VAR_26->pd = FUNC_3(VAR_26->cm_id->device);
 if (FUNC_0(VAR_26->pd))
  goto error;


 VAR_26->dma_mr = ((void*)0);
 if (VAR_29.device_cap_flags & VAR_6)
  VAR_26->lkey = VAR_26->cm_id->device->local_dma_lkey;
 else {
  VAR_26->dma_mr = FUNC_5(VAR_26->pd, VAR_4);
  if (FUNC_0(VAR_26->dma_mr))
   goto error;
  VAR_26->lkey = VAR_26->dma_mr->lkey;
 }


 FUNC_9(&VAR_28, 0, sizeof VAR_28);
 VAR_28.event_handler = VAR_20;
 VAR_28.qp_context = VAR_21;
 VAR_28.cap.max_send_wr = VAR_25.sq_depth;
 VAR_28.cap.max_recv_wr = VAR_25.rq_depth;
 VAR_28.cap.max_send_sge = VAR_15;
 VAR_28.cap.max_recv_sge = VAR_13;
 VAR_28.sq_sig_type = VAR_8;
 VAR_28.qp_type = VAR_7;
 VAR_28.send_cq = VAR_26->cq;
 VAR_28.recv_cq = VAR_26->cq;
 VAR_24 = FUNC_13(VAR_26->cm_id, VAR_26->pd, &VAR_28);
 if (VAR_24)
  goto error;
 VAR_26->qp = VAR_26->cm_id->qp;


 FUNC_9(&VAR_27, 0, sizeof(VAR_27));
 VAR_27.private_data = ((void*)0);
 VAR_27.private_data_len = 0;
 VAR_27.responder_resources = VAR_11;
 VAR_27.initiator_depth = VAR_12;
 VAR_24 = FUNC_11(VAR_26->cm_id, &VAR_27);
 if (VAR_24)
  goto error;
 VAR_24 = FUNC_17(&VAR_26->cm_done);
 if (VAR_24 || (VAR_26->state != VAR_10))
  goto error;

 VAR_21->status = VAR_1;

 return 0;

error:
 FUNC_14(VAR_26);
 return -VAR_3;
}
