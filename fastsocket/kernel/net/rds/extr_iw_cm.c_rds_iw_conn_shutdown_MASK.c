
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int w_nr; } ;
struct rds_iw_connection {int * i_recvs; int * i_sends; TYPE_1__* i_iwinc; TYPE_2__ i_recv_ring; TYPE_2__ i_send_ring; int i_credits; scalar_t__ i_flowctl; scalar_t__ i_ack_recv; scalar_t__ i_ack_next; int i_ack_flags; int * i_rm; scalar_t__ rds_iwdev; int * i_ack; int * i_recv_hdrs; int * i_send_hdrs; int * i_recv_cq; int * i_send_cq; int * i_mr; int * i_pd; TYPE_4__* i_cm_id; int i_ack_dma; int i_recv_hdrs_dma; int i_send_hdrs_dma; } ;
struct rds_header {int dummy; } ;
struct rds_connection {struct rds_iw_connection* c_transport_data; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_device {int dummy; } ;
struct TYPE_9__ {int * qp; struct ib_device* device; } ;
struct TYPE_7__ {int ii_inc; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_device*,int,int *,int ) ;
 int FUNC_6 (int *,struct ib_qp_attr*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct rds_iw_connection*) ;
 int FUNC_12 (scalar_t__,struct rds_connection*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (struct rds_iw_connection*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int) ;

void FUNC_20(struct rds_connection *VAR_6)
{
 struct rds_iw_connection *VAR_7 = VAR_6->c_transport_data;
 int VAR_8 = 0;
 struct ib_qp_attr VAR_9;

 FUNC_17("cm %p pd %p cq %p %p qp %p\n", VAR_7->i_cm_id,
   VAR_7->i_pd, VAR_7->i_send_cq, VAR_7->i_recv_cq,
   VAR_7->i_cm_id ? VAR_7->i_cm_id->qp : ((void*)0));

 if (VAR_7->i_cm_id) {
  struct ib_device *VAR_10 = VAR_7->i_cm_id->device;

  FUNC_17("disconnecting cm %p\n", VAR_7->i_cm_id);
  VAR_8 = FUNC_9(VAR_7->i_cm_id);
  if (VAR_8) {



   FUNC_17("rds_iw_conn_shutdown: failed to disconnect,"
       " cm: %p err %d\n", VAR_7->i_cm_id, VAR_8);
  }

  if (VAR_7->i_cm_id->qp) {
   VAR_9.qp_state = VAR_1;
   FUNC_6(VAR_7->i_cm_id->qp, &VAR_9, VAR_2);
  }

  FUNC_19(VAR_3,
   FUNC_13(&VAR_7->i_send_ring) &&
   FUNC_13(&VAR_7->i_recv_ring));

  if (VAR_7->i_send_hdrs)
   FUNC_5(VAR_10,
        VAR_7->i_send_ring.w_nr *
      sizeof(struct rds_header),
        VAR_7->i_send_hdrs,
        VAR_7->i_send_hdrs_dma);

  if (VAR_7->i_recv_hdrs)
   FUNC_5(VAR_10,
        VAR_7->i_recv_ring.w_nr *
      sizeof(struct rds_header),
        VAR_7->i_recv_hdrs,
        VAR_7->i_recv_hdrs_dma);

  if (VAR_7->i_ack)
   FUNC_5(VAR_10, sizeof(struct rds_header),
          VAR_7->i_ack, VAR_7->i_ack_dma);

  if (VAR_7->i_sends)
   FUNC_15(VAR_7);
  if (VAR_7->i_recvs)
   FUNC_11(VAR_7);

  if (VAR_7->i_cm_id->qp)
   FUNC_8(VAR_7->i_cm_id);
  if (VAR_7->i_send_cq)
   FUNC_4(VAR_7->i_send_cq);
  if (VAR_7->i_recv_cq)
   FUNC_4(VAR_7->i_recv_cq);






  if (VAR_7->rds_iwdev)
   FUNC_12(VAR_7->rds_iwdev, VAR_6);

  FUNC_7(VAR_7->i_cm_id);

  VAR_7->i_cm_id = ((void*)0);
  VAR_7->i_pd = ((void*)0);
  VAR_7->i_mr = ((void*)0);
  VAR_7->i_send_cq = ((void*)0);
  VAR_7->i_recv_cq = ((void*)0);
  VAR_7->i_send_hdrs = ((void*)0);
  VAR_7->i_recv_hdrs = ((void*)0);
  VAR_7->i_ack = ((void*)0);
 }
 FUNC_0(VAR_7->rds_iwdev);


 if (VAR_7->i_rm) {
  FUNC_16(VAR_7->i_rm);
  VAR_7->i_rm = ((void*)0);
 }


 FUNC_3(VAR_0, &VAR_7->i_ack_flags);



 VAR_7->i_ack_next = 0;

 VAR_7->i_ack_recv = 0;


 VAR_7->i_flowctl = 0;
 FUNC_2(&VAR_7->i_credits, 0);

 FUNC_14(&VAR_7->i_send_ring, VAR_5);
 FUNC_14(&VAR_7->i_recv_ring, VAR_4);

 if (VAR_7->i_iwinc) {
  FUNC_10(&VAR_7->i_iwinc->ii_inc);
  VAR_7->i_iwinc = ((void*)0);
 }

 FUNC_18(VAR_7->i_sends);
 VAR_7->i_sends = ((void*)0);
 FUNC_18(VAR_7->i_recvs);
 VAR_7->i_recvs = ((void*)0);
 FUNC_17("shutdown complete\n");
}
