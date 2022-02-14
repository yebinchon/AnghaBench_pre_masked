
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int ucmd ;
typedef int u32 ;
struct mlx5_ib_resources {int s1; int x1; int x0; int s0; int c0; struct ib_pd* p0; } ;
struct TYPE_23__ {int event; } ;
struct mlx5_ib_qp_base {TYPE_16__ mqp; struct mlx5_ib_qp* container_mibqp; } ;
struct TYPE_32__ {int buf_addr; } ;
struct TYPE_17__ {TYPE_9__ ubuffer; } ;
struct TYPE_24__ {struct mlx5_ib_qp_base base; } ;
struct TYPE_22__ {TYPE_10__ sq; TYPE_1__ rq; } ;
struct TYPE_31__ {int dma; } ;
struct TYPE_28__ {scalar_t__ wqe_cnt; int lock; } ;
struct TYPE_27__ {int wqe_shift; scalar_t__ wqe_cnt; int lock; } ;
struct TYPE_25__ {struct mlx5_ib_qp_base base; } ;
struct mlx5_ib_qp {int flags; int wq_sig; int scat_cqe; scalar_t__ create_type; int cq_recv_list; int cq_send_list; int qps_list; TYPE_15__ raw_packet_qp; TYPE_8__ db; TYPE_5__ sq; TYPE_4__ rq; int port; int has_rq; int sq_signal_bits; int mutex; TYPE_2__ trans_qp; } ;
struct mlx5_ib_dev {int reset_flow_resource_lock; int qp_list; struct mlx5_core_dev* mdev; struct mlx5_ib_resources devr; } ;
struct mlx5_ib_create_qp_resp {int dummy; } ;
struct mlx5_ib_create_qp {int flags; scalar_t__ sq_wqe_count; int rq_wqe_shift; scalar_t__ rq_wqe_count; int sq_buf_addr; } ;
struct mlx5_ib_cq {int list_recv_qp; int list_send_qp; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_udata {int inlen; } ;
struct ib_qp_init_attr {int qp_type; int create_flags; scalar_t__ sq_sig_type; int recv_cq; int send_cq; int srq; int xrcd; int port_num; int cap; scalar_t__ rwq_ind_tbl; } ;
struct ib_pd {TYPE_3__* uobject; } ;
typedef scalar_t__ __u32 ;
struct TYPE_30__ {int cqn; } ;
struct TYPE_29__ {int srqn; } ;
struct TYPE_26__ {int context; } ;
struct TYPE_21__ {TYPE_7__ mcq; } ;
struct TYPE_20__ {int pdn; } ;
struct TYPE_19__ {TYPE_6__ msrq; } ;
struct TYPE_18__ {int xrcdn; } ;


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
 void* FUNC_0 (int ,int*,void*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,struct ib_pd*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (void*,void*,struct ib_pd*,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_33 ;
 struct ib_pd* VAR_34 ;
 struct ib_pd* VAR_35 ;
 struct ib_pd* VAR_36 ;
 struct ib_pd* VAR_37 ;
 struct ib_pd* VAR_38 ;
 struct ib_pd* VAR_39 ;
 struct ib_pd* VAR_40 ;
 struct ib_pd* VAR_41 ;
 int FUNC_6 (struct mlx5_ib_dev*,struct ib_qp_init_attr*,struct mlx5_ib_qp*,int**,int*,struct mlx5_ib_qp_base*) ;
 int VAR_42 ;
 int FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,int*,struct ib_pd*) ;
 int FUNC_8 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct ib_pd*,struct ib_qp_init_attr*,struct ib_udata*) ;
 int FUNC_9 (struct mlx5_ib_dev*,struct ib_pd*,struct mlx5_ib_qp*,struct ib_udata*,struct ib_qp_init_attr*,int**,struct mlx5_ib_create_qp_resp*,int*,struct mlx5_ib_qp_base*) ;
 struct ib_pd* VAR_43 ;
 struct ib_pd* VAR_44 ;
 int VAR_45 ;
 int FUNC_10 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_11 (struct ib_pd*,struct mlx5_ib_qp*,struct mlx5_ib_qp_base*) ;
 struct ib_pd* VAR_46 ;
 int FUNC_12 (int,int ,int ,struct mlx5_ib_cq**,struct mlx5_ib_cq**) ;
 int FUNC_13 (int ,struct mlx5_ib_create_qp*,int ,int*) ;
 int FUNC_14 (struct mlx5_ib_qp*,struct ib_qp_init_attr*) ;
 scalar_t__ FUNC_15 (struct mlx5_ib_create_qp*,struct ib_udata*,int) ;
 int FUNC_16 (scalar_t__) ;
 struct ib_pd* VAR_47 ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int*) ;
 struct ib_pd* VAR_48 ;
 int FUNC_20 (int *,int *) ;
 struct ib_pd* VAR_49 ;
 struct ib_pd* VAR_50 ;
 struct ib_pd* VAR_51 ;
 struct ib_pd* VAR_52 ;
 int FUNC_21 (struct mlx5_core_dev*,TYPE_16__*,int*,int) ;
 int FUNC_22 () ;
 int FUNC_23 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_24 (struct mlx5_ib_dev*,int ) ;
 int FUNC_25 (struct mlx5_ib_cq*,struct mlx5_ib_cq*) ;
 int FUNC_26 (struct mlx5_ib_qp*) ;
 int VAR_53 ;
 int FUNC_27 (struct mlx5_ib_cq*,struct mlx5_ib_cq*) ;
 int* FUNC_28 (int) ;
 int FUNC_29 (int *) ;
 struct ib_pd* VAR_54 ;
 struct ib_pd* VAR_55 ;
 int FUNC_30 (struct ib_qp_init_attr*) ;
 int FUNC_31 (struct mlx5_ib_qp*,TYPE_15__*) ;
 struct ib_pd* VAR_56 ;
 int VAR_57 ;
 int FUNC_32 (struct mlx5_ib_dev*,int *,int ,struct mlx5_ib_qp*,struct mlx5_ib_create_qp*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *,unsigned long) ;
 int FUNC_35 (int *,unsigned long) ;
 struct ib_pd* VAR_58 ;
 struct ib_pd* VAR_59 ;
 TYPE_14__* FUNC_36 (int ) ;
 int FUNC_37 (int) ;
 TYPE_13__* FUNC_38 (struct ib_pd*) ;
 TYPE_12__* FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 TYPE_11__* FUNC_41 (int ) ;
 struct ib_pd* VAR_60 ;
 struct ib_pd* VAR_61 ;
 struct ib_pd* VAR_62 ;
 struct ib_pd* VAR_63 ;

__attribute__((used)) static int FUNC_42(struct mlx5_ib_dev *VAR_64, struct ib_pd *VAR_65,
       struct ib_qp_init_attr *VAR_66,
       struct ib_udata *VAR_67, struct mlx5_ib_qp *VAR_68)
{
 struct mlx5_ib_resources *VAR_69 = &VAR_64->devr;
 int VAR_70 = FUNC_5(VAR_42);
 struct mlx5_core_dev *VAR_71 = VAR_64->mdev;
 struct mlx5_ib_create_qp_resp VAR_72;
 struct mlx5_ib_cq *VAR_73;
 struct mlx5_ib_cq *VAR_74;
 unsigned long VAR_75;
 u32 VAR_76 = VAR_15;
 struct mlx5_ib_create_qp VAR_77;
 struct mlx5_ib_qp_base *VAR_78;
 void *VAR_79;
 u32 *VAR_80;
 int VAR_81;

 VAR_78 = VAR_66->qp_type == VAR_5 ?
        &VAR_68->raw_packet_qp.rq.base :
        &VAR_68->trans_qp.base;

 if (VAR_66->qp_type != VAR_5)
  FUNC_26(VAR_68);

 FUNC_29(&VAR_68->mutex);
 FUNC_33(&VAR_68->sq.lock);
 FUNC_33(&VAR_68->rq.lock);

 if (VAR_66->rwq_ind_tbl) {
  if (!VAR_67)
   return -VAR_3;

  VAR_81 = FUNC_8(VAR_64, VAR_68, VAR_65, VAR_66, VAR_67);
  return VAR_81;
 }

 if (VAR_66->create_flags & VAR_7) {
  if (!FUNC_2(VAR_71, VAR_34)) {
   FUNC_23(VAR_64, "block multicast loopback isn't supported\n");
   return -VAR_1;
  } else {
   VAR_68->flags |= VAR_17;
  }
 }

 if (VAR_66->create_flags &
   (VAR_8 |
    VAR_11 |
    VAR_10)) {
  if (!FUNC_2(VAR_71, VAR_35)) {
   FUNC_23(VAR_64, "cross-channel isn't supported\n");
   return -VAR_1;
  }
  if (VAR_66->create_flags & VAR_8)
   VAR_68->flags |= VAR_19;
  if (VAR_66->create_flags & VAR_11)
   VAR_68->flags |= VAR_22;
  if (VAR_66->create_flags & VAR_10)
   VAR_68->flags |= VAR_21;
 }

 if (VAR_66->qp_type == VAR_6 &&
     (VAR_66->create_flags & VAR_9))
  if (!FUNC_2(VAR_71, VAR_47)) {
   FUNC_23(VAR_64, "ipoib UD lso qp isn't supported\n");
   return -VAR_4;
  }

 if (VAR_66->create_flags & VAR_12) {
  if (VAR_66->qp_type != VAR_5) {
   FUNC_23(VAR_64, "Scatter FCS is supported only for Raw Packet QPs");
   return -VAR_4;
  }
  if (!FUNC_2(VAR_64->mdev, VAR_46) ||
      !FUNC_1(VAR_64->mdev, VAR_57)) {
   FUNC_23(VAR_64, "Scatter FCS isn't supported\n");
   return -VAR_4;
  }
  VAR_68->flags |= VAR_18;
 }

 if (VAR_66->sq_sig_type == VAR_13)
  VAR_68->sq_signal_bits = VAR_33;

 if (VAR_65 && VAR_65->uobject) {
  if (FUNC_15(&VAR_77, VAR_67, sizeof(VAR_77))) {
   FUNC_23(VAR_64, "copy failed\n");
   return -VAR_0;
  }

  VAR_81 = FUNC_13(FUNC_40(VAR_65->uobject->context),
     &VAR_77, VAR_67->inlen, &VAR_76);
  if (VAR_81)
   return VAR_81;

  VAR_68->wq_sig = !!(VAR_77.flags & VAR_25);
  VAR_68->scat_cqe = !!(VAR_77.flags & VAR_24);
 } else {
  VAR_68->wq_sig = !!VAR_62;
 }

 VAR_68->has_rq = FUNC_30(VAR_66);
 VAR_81 = FUNC_32(VAR_64, &VAR_66->cap, VAR_68->has_rq,
     VAR_68, (VAR_65 && VAR_65->uobject) ? &VAR_77 : ((void*)0));
 if (VAR_81) {
  FUNC_23(VAR_64, "err %d\n", VAR_81);
  return VAR_81;
 }

 if (VAR_65) {
  if (VAR_65->uobject) {
   __u32 VAR_82 =
    1 << FUNC_2(VAR_71, VAR_49);
   FUNC_23(VAR_64, "requested sq_wqe_count (%d)\n", VAR_77.sq_wqe_count);
   if (VAR_77.rq_wqe_shift != VAR_68->rq.wqe_shift ||
       VAR_77.rq_wqe_count != VAR_68->rq.wqe_cnt) {
    FUNC_23(VAR_64, "invalid rq params\n");
    return -VAR_1;
   }
   if (VAR_77.sq_wqe_count > VAR_82) {
    FUNC_23(VAR_64, "requested sq_wqe_count (%d) > max allowed (%d)\n",
         VAR_77.sq_wqe_count, VAR_82);
    return -VAR_1;
   }
   if (VAR_66->create_flags &
       FUNC_22()) {
    FUNC_23(VAR_64, "user-space is not allowed to create UD QPs spoofing as QP1\n");
    return -VAR_1;
   }
   VAR_81 = FUNC_9(VAR_64, VAR_65, VAR_68, VAR_67, VAR_66, &VAR_80,
          &VAR_72, &VAR_70, VAR_78);
   if (VAR_81)
    FUNC_23(VAR_64, "err %d\n", VAR_81);
  } else {
   VAR_81 = FUNC_6(VAR_64, VAR_66, VAR_68, &VAR_80, &VAR_70,
            VAR_78);
   if (VAR_81)
    FUNC_23(VAR_64, "err %d\n", VAR_81);
  }

  if (VAR_81)
   return VAR_81;
 } else {
  VAR_80 = FUNC_28(VAR_70);
  if (!VAR_80)
   return -VAR_2;

  VAR_68->create_type = VAR_23;
 }

 if (FUNC_18(VAR_66->qp_type))
  VAR_68->port = VAR_66->port_num;

 VAR_79 = FUNC_0(VAR_42, VAR_80, VAR_79);

 FUNC_3(VAR_79, VAR_79, VAR_59, FUNC_37(VAR_66->qp_type));
 FUNC_3(VAR_79, VAR_79, VAR_55, VAR_27);

 if (VAR_66->qp_type != VAR_16)
  FUNC_3(VAR_79, VAR_79, VAR_65, FUNC_38(VAR_65 ? VAR_65 : VAR_69->p0)->pdn);
 else
  FUNC_3(VAR_79, VAR_79, VAR_48, 1);


 if (VAR_68->wq_sig)
  FUNC_3(VAR_79, VAR_79, VAR_62, 1);

 if (VAR_68->flags & VAR_17)
  FUNC_3(VAR_79, VAR_79, VAR_34, 1);

 if (VAR_68->flags & VAR_19)
  FUNC_3(VAR_79, VAR_79, VAR_36, 1);
 if (VAR_68->flags & VAR_22)
  FUNC_3(VAR_79, VAR_79, VAR_38, 1);
 if (VAR_68->flags & VAR_21)
  FUNC_3(VAR_79, VAR_79, VAR_37, 1);

 if (VAR_68->scat_cqe && FUNC_17(VAR_66->qp_type)) {
  int VAR_83;
  int VAR_84;

  VAR_83 = FUNC_24(VAR_64, VAR_66->recv_cq);
  VAR_84 = FUNC_24(VAR_64, VAR_66->send_cq);

  if (VAR_83 == 128)
   FUNC_3(VAR_79, VAR_79, VAR_44, VAR_32);
  else
   FUNC_3(VAR_79, VAR_79, VAR_44, VAR_31);

  if (VAR_66->sq_sig_type == VAR_13) {
   if (VAR_84 == 128)
    FUNC_3(VAR_79, VAR_79, VAR_43, VAR_30);
   else
    FUNC_3(VAR_79, VAR_79, VAR_43, VAR_29);
  }
 }

 if (VAR_68->rq.wqe_cnt) {
  FUNC_3(VAR_79, VAR_79, VAR_51, VAR_68->rq.wqe_shift - 4);
  FUNC_3(VAR_79, VAR_79, VAR_50, FUNC_16(VAR_68->rq.wqe_cnt));
 }

 FUNC_3(VAR_79, VAR_79, VAR_56, FUNC_14(VAR_68, VAR_66));

 if (VAR_68->sq.wqe_cnt)
  FUNC_3(VAR_79, VAR_79, VAR_52, FUNC_16(VAR_68->sq.wqe_cnt));
 else
  FUNC_3(VAR_79, VAR_79, VAR_54, 1);


 switch (VAR_66->qp_type) {
 case 128:
  FUNC_3(VAR_79, VAR_79, VAR_40, FUNC_36(VAR_69->c0)->mcq.cqn);
  FUNC_3(VAR_79, VAR_79, VAR_41, FUNC_36(VAR_69->c0)->mcq.cqn);
  FUNC_3(VAR_79, VAR_79, VAR_58, FUNC_39(VAR_69->s0)->msrq.srqn);
  FUNC_3(VAR_79, VAR_79, VAR_63, FUNC_41(VAR_66->xrcd)->xrcdn);
  break;
 case 129:
  FUNC_3(VAR_79, VAR_79, VAR_40, FUNC_36(VAR_69->c0)->mcq.cqn);
  FUNC_3(VAR_79, VAR_79, VAR_63, FUNC_41(VAR_69->x1)->xrcdn);
  FUNC_3(VAR_79, VAR_79, VAR_58, FUNC_39(VAR_69->s0)->msrq.srqn);
  break;
 default:
  if (VAR_66->srq) {
   FUNC_3(VAR_79, VAR_79, VAR_63, FUNC_41(VAR_69->x0)->xrcdn);
   FUNC_3(VAR_79, VAR_79, VAR_58, FUNC_39(VAR_66->srq)->msrq.srqn);
  } else {
   FUNC_3(VAR_79, VAR_79, VAR_63, FUNC_41(VAR_69->x1)->xrcdn);
   FUNC_3(VAR_79, VAR_79, VAR_58, FUNC_39(VAR_69->s1)->msrq.srqn);
  }
 }

 if (VAR_66->send_cq)
  FUNC_3(VAR_79, VAR_79, VAR_41, FUNC_36(VAR_66->send_cq)->mcq.cqn);

 if (VAR_66->recv_cq)
  FUNC_3(VAR_79, VAR_79, VAR_40, FUNC_36(VAR_66->recv_cq)->mcq.cqn);

 FUNC_4(VAR_79, VAR_79, VAR_45, VAR_68->db.dma);


 if (FUNC_2(VAR_71, VAR_39) == VAR_14)
  FUNC_3(VAR_79, VAR_79, VAR_61, VAR_76);


 if (VAR_66->qp_type == VAR_6 &&
     (VAR_66->create_flags & VAR_9)) {
  FUNC_3(VAR_79, VAR_79, VAR_60, 1);
  VAR_68->flags |= VAR_20;
 }

 if (VAR_66->qp_type == VAR_5) {
  VAR_68->raw_packet_qp.sq.ubuffer.buf_addr = VAR_77.sq_buf_addr;
  FUNC_31(VAR_68, &VAR_68->raw_packet_qp);
  VAR_81 = FUNC_7(VAR_64, VAR_68, VAR_80, VAR_65);
 } else {
  VAR_81 = FUNC_21(VAR_64->mdev, &VAR_78->mqp, VAR_80, VAR_70);
 }

 if (VAR_81) {
  FUNC_23(VAR_64, "create qp failed\n");
  goto err_create;
 }

 FUNC_19(VAR_80);

 VAR_78->container_mibqp = VAR_68;
 VAR_78->mqp.event = VAR_53;

 FUNC_12(VAR_66->qp_type, VAR_66->send_cq, VAR_66->recv_cq,
  &VAR_73, &VAR_74);
 FUNC_34(&VAR_64->reset_flow_resource_lock, VAR_75);
 FUNC_25(VAR_73, VAR_74);



 FUNC_20(&VAR_68->qps_list, &VAR_64->qp_list);


 if (VAR_73)
  FUNC_20(&VAR_68->cq_send_list, &VAR_73->list_send_qp);
 if (VAR_74)
  FUNC_20(&VAR_68->cq_recv_list, &VAR_74->list_recv_qp);
 FUNC_27(VAR_73, VAR_74);
 FUNC_35(&VAR_64->reset_flow_resource_lock, VAR_75);

 return 0;

err_create:
 if (VAR_68->create_type == VAR_28)
  FUNC_11(VAR_65, VAR_68, VAR_78);
 else if (VAR_68->create_type == VAR_26)
  FUNC_10(VAR_64, VAR_68);

 FUNC_19(VAR_80);
 return VAR_81;
}
