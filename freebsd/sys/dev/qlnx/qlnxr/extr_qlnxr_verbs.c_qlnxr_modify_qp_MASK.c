
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct qlnxr_qp {scalar_t__ state; scalar_t__ qp_type; int ecore_qp; int dest_qp_num; int sq_psn; int rq_psn; void* mtu; int sgid_idx; int qkey; int qp_id; TYPE_5__* dev; } ;
struct qlnxr_dev {int rdma_ctx; TYPE_6__* ha; } ;
struct ib_udata {int dummy; } ;
struct TYPE_9__ {int sgid_index; int hop_limit; int flow_label; int traffic_class; } ;
struct TYPE_15__ {TYPE_1__ grh; } ;
struct ib_qp_attr {int qp_state; scalar_t__ pkey_index; int qp_access_flags; int timeout; int dest_qp_num; int max_dest_rd_atomic; int sq_psn; int min_rnr_timer; int max_rd_atomic; int rq_psn; int rnr_retry; int retry_cnt; TYPE_7__ ah_attr; int path_mtu; int qkey; } ;
struct ib_qp {int qp_type; } ;
struct TYPE_11__ {int * dwords; } ;
struct TYPE_10__ {int * dwords; } ;
struct ecore_rdma_modify_qp_in_params {scalar_t__ new_state; int sqd_async; int incoming_rdma_read_en; int incoming_rdma_write_en; int incoming_atomic_en; int use_local_mac; int ack_timeout; int dest_qp; int modify_flags; int max_rd_atomic_resp; int sq_psn; int min_rnr_nak_timer; int max_rd_atomic_req; int rq_psn; int rnr_retry_cnt; int retry_cnt; void* mtu; int * remote_mac_addr; TYPE_3__ sgid; TYPE_2__ dgid; int local_mac_addr; int hop_limit_ttl; int flow_label; int traffic_class_tos; int pkey; int member_0; } ;
struct ecore_rdma_device {int max_qp_resp_rd_atomic_resc; int max_qp_req_rd_atomic_resc; } ;
struct TYPE_14__ {TYPE_4__* ifp; int primary_mac; } ;
typedef TYPE_6__ qlnx_host_t ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_13__ {int ibdev; } ;
struct TYPE_12__ {int if_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_6__*,char*,...) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,struct ecore_rdma_modify_qp_in_params*) ;
 struct ecore_rdma_device* FUNC_4 (int ) ;
 int FUNC_5 (struct ib_qp*,struct ib_qp_attr*,int,struct qlnxr_dev*,struct qlnxr_qp*,struct ecore_rdma_modify_qp_in_params*) ;
 struct qlnxr_dev* FUNC_6 (int *) ;
 struct qlnxr_qp* FUNC_7 (struct ib_qp*) ;
 int FUNC_8 (int,int,int ,int,...) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 void* FUNC_12 (void*,void*) ;
 int FUNC_13 (struct qlnxr_dev*,TYPE_7__*,int *) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct qlnxr_dev*,struct qlnxr_qp*,scalar_t__) ;

int
FUNC_17(struct ib_qp *VAR_41,
 struct ib_qp_attr *VAR_42,
 int VAR_43,
 struct ib_udata *VAR_44)
{
 int VAR_45 = 0;
 struct qlnxr_qp *VAR_46 = FUNC_7(VAR_41);
 struct qlnxr_dev *VAR_47 = FUNC_6(&VAR_46->dev->ibdev);
 struct ecore_rdma_modify_qp_in_params VAR_48 = { 0 };
 enum ib_qp_state VAR_49, VAR_50;
 struct ecore_rdma_device *VAR_51 = FUNC_4(VAR_47->rdma_ctx);
 qlnx_host_t *VAR_52;

 VAR_52 = VAR_47->ha;

 FUNC_1(VAR_52,
  "enter qp = %p attr_mask = 0x%x, state = %d udata = %p\n",
  VAR_46, VAR_43, VAR_42->qp_state, VAR_44);

 VAR_49 = FUNC_14(VAR_46->state);
 if (VAR_43 & VAR_37)
  VAR_50 = VAR_42->qp_state;
 else
  VAR_50 = VAR_49;

 if (FUNC_0(VAR_47)) {
  if (!FUNC_8(VAR_49,
     VAR_50,
     VAR_41->qp_type,
     VAR_43 )) {
   FUNC_1(VAR_52,
    "invalid attribute mask=0x%x"
    " specified for qpn=0x%x of type=0x%x \n"
    " old_qp_state=0x%x, new_qp_state=0x%x\n",
    VAR_43, VAR_46->qp_id, VAR_41->qp_type,
    VAR_49, VAR_50);
   VAR_45 = -VAR_14;
   goto err;
  }


 }

 if (VAR_43 & VAR_37) {
  FUNC_2(VAR_48.modify_flags,
     VAR_2, 1);
  VAR_48.new_state = FUNC_15(VAR_42->qp_state);
 }


 if (VAR_43 & VAR_26)
  VAR_48.sqd_async = 1;

 if (VAR_43 & VAR_31) {
  FUNC_2(VAR_48.modify_flags,
     VAR_8,
     1);
  if (VAR_42->pkey_index >= VAR_40) {
   VAR_45 = -VAR_14;
   goto err;
  }

  VAR_48.pkey = VAR_39;
 }

 if (VAR_43 & VAR_32) {
  VAR_46->qkey = VAR_42->qkey;
 }


 if (VAR_43 & VAR_23) {
  FUNC_2(VAR_48.modify_flags,
     VAR_3, 1);
  VAR_48.incoming_rdma_read_en =
   VAR_42->qp_access_flags & VAR_17;
  VAR_48.incoming_rdma_write_en =
   VAR_42->qp_access_flags & VAR_18;
  VAR_48.incoming_atomic_en =
   VAR_42->qp_access_flags & VAR_16;
 }

 if (VAR_43 & (VAR_24 | VAR_30)) {
  if (VAR_43 & VAR_30) {
   if (VAR_42->path_mtu < VAR_20 ||
       VAR_42->path_mtu > VAR_21) {

    FUNC_1(VAR_52,
     "Only MTU sizes of 256, 512, 1024,"
     " 2048 and 4096 are supported "
     " attr->path_mtu = [%d]\n",
     VAR_42->path_mtu);

    VAR_45 = -VAR_14;
    goto err;
   }
   VAR_46->mtu = FUNC_12(FUNC_9(VAR_42->path_mtu),
          FUNC_9(
      FUNC_10(VAR_47->ha->ifp->if_mtu)));
  }

  if (VAR_46->mtu == 0) {
   VAR_46->mtu = FUNC_9(
     FUNC_10(VAR_47->ha->ifp->if_mtu));
   FUNC_1(VAR_52, "fixing zetoed MTU to qp->mtu = %d\n",
    VAR_46->mtu);
  }

  FUNC_2(VAR_48.modify_flags,
     VAR_5,
     1);

  VAR_48.traffic_class_tos = VAR_42->ah_attr.grh.traffic_class;
  VAR_48.flow_label = VAR_42->ah_attr.grh.flow_label;
  VAR_48.hop_limit_ttl = VAR_42->ah_attr.grh.hop_limit;

  VAR_46->sgid_idx = VAR_42->ah_attr.grh.sgid_index;

  FUNC_5(VAR_41, VAR_42, VAR_43, VAR_47, VAR_46, &VAR_48);

  VAR_45 = FUNC_13(VAR_47, &VAR_42->ah_attr, VAR_48.remote_mac_addr);
  if (VAR_45)
   return VAR_45;

  VAR_48.use_local_mac = 1;
  FUNC_11(VAR_48.local_mac_addr, VAR_47->ha->primary_mac, VAR_15);

  FUNC_1(VAR_52, "dgid=0x%x:0x%x:0x%x:0x%x\n",
         VAR_48.dgid.dwords[0], VAR_48.dgid.dwords[1],
         VAR_48.dgid.dwords[2], VAR_48.dgid.dwords[3]);
  FUNC_1(VAR_52, "sgid=0x%x:0x%x:0x%x:0x%x\n",
         VAR_48.sgid.dwords[0], VAR_48.sgid.dwords[1],
         VAR_48.sgid.dwords[2], VAR_48.sgid.dwords[3]);
  FUNC_1(VAR_52,
   "remote_mac=[0x%x:0x%x:0x%x:0x%x:0x%x:0x%x]\n",
   VAR_48.remote_mac_addr[0],
   VAR_48.remote_mac_addr[1],
   VAR_48.remote_mac_addr[2],
   VAR_48.remote_mac_addr[3],
   VAR_48.remote_mac_addr[4],
   VAR_48.remote_mac_addr[5]);

  VAR_48.mtu = VAR_46->mtu;
 }

 if (VAR_48.mtu == 0) {

  if (VAR_46->mtu) {
   VAR_48.mtu = VAR_46->mtu;
  } else {
   VAR_48.mtu = FUNC_9(
      FUNC_10(VAR_47->ha->ifp->if_mtu));
  }
 }

 if (VAR_43 & VAR_38) {
  FUNC_2(VAR_48.modify_flags, VAR_4, 1);


  VAR_48.ack_timeout = VAR_42->timeout;
  if (VAR_42->timeout) {
   u32 VAR_53;
   VAR_53 = 4096 * (1UL << VAR_42->timeout) / 1000 / 1000;
   VAR_48.ack_timeout = VAR_53;
  }
  else
   VAR_48.ack_timeout = 0;
 }
 if (VAR_43 & VAR_33) {
  FUNC_2(VAR_48.modify_flags, VAR_9, 1);

  VAR_48.retry_cnt = VAR_42->retry_cnt;
 }

 if (VAR_43 & VAR_34) {
  FUNC_2(VAR_48.modify_flags,
     VAR_10,
     1);
  VAR_48.rnr_retry_cnt = VAR_42->rnr_retry;
 }

 if (VAR_43 & VAR_35) {
  FUNC_2(VAR_48.modify_flags,
     VAR_11,
     1);
  VAR_48.rq_psn = VAR_42->rq_psn;
  VAR_46->rq_psn = VAR_42->rq_psn;
 }

 if (VAR_43 & VAR_28) {
  if (VAR_42->max_rd_atomic > VAR_51->max_qp_req_rd_atomic_resc) {
   VAR_45 = -VAR_14;
   FUNC_1(VAR_52,
    "unsupported  max_rd_atomic=%d, supported=%d\n",
    VAR_42->max_rd_atomic,
    VAR_51->max_qp_req_rd_atomic_resc);
   goto err;
  }

  FUNC_2(VAR_48.modify_flags,
     VAR_0,
     1);
  VAR_48.max_rd_atomic_req = VAR_42->max_rd_atomic;
 }

 if (VAR_43 & VAR_29) {
  FUNC_2(VAR_48.modify_flags,
     VAR_7,
     1);
  VAR_48.min_rnr_nak_timer = VAR_42->min_rnr_timer;
 }

 if (VAR_43 & VAR_36) {
  FUNC_2(VAR_48.modify_flags,
     VAR_12,
     1);
  VAR_48.sq_psn = VAR_42->sq_psn;
  VAR_46->sq_psn = VAR_42->sq_psn;
 }

 if (VAR_43 & VAR_27) {
  if (VAR_42->max_dest_rd_atomic >
      VAR_51->max_qp_resp_rd_atomic_resc) {
   FUNC_1(VAR_52,
    "unsupported max_dest_rd_atomic=%d, "
    "supported=%d\n",
    VAR_42->max_dest_rd_atomic,
    VAR_51->max_qp_resp_rd_atomic_resc);

   VAR_45 = -VAR_14;
   goto err;
  }

  FUNC_2(VAR_48.modify_flags,
     VAR_1,
     1);
  VAR_48.max_rd_atomic_resp = VAR_42->max_dest_rd_atomic;
 }

  if (VAR_43 & VAR_25) {
  FUNC_2(VAR_48.modify_flags,
     VAR_6,
     1);

  VAR_48.dest_qp = VAR_42->dest_qp_num;
  VAR_46->dest_qp_num = VAR_42->dest_qp_num;
 }







 if ((VAR_43 & VAR_37) && (VAR_46->qp_type != VAR_22) &&
  (!VAR_44) && (VAR_48.new_state == VAR_13))
  VAR_46->state = VAR_13;

 if (VAR_46->qp_type != VAR_22)
  VAR_45 = FUNC_3(VAR_47->rdma_ctx, VAR_46->ecore_qp, &VAR_48);

 if (VAR_43 & VAR_37) {
  if ((VAR_46->qp_type != VAR_22) && (!VAR_44))
   VAR_45 = FUNC_16(VAR_47, VAR_46, VAR_48.new_state);
  VAR_46->state = VAR_48.new_state;
 }

err:
 FUNC_1(VAR_52, "exit\n");
 return VAR_45;
}
