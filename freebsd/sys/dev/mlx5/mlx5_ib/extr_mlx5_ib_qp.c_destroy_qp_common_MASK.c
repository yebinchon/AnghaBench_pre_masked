
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx5_modify_raw_qp_param {int operation; } ;
struct TYPE_12__ {int qpn; } ;
struct mlx5_ib_qp_base {TYPE_5__ mqp; } ;
struct TYPE_11__ {scalar_t__ qp_type; scalar_t__ srq; int recv_cq; int send_cq; scalar_t__ rwq_ind_tbl; } ;
struct TYPE_10__ {struct mlx5_ib_qp_base base; } ;
struct TYPE_8__ {struct mlx5_ib_qp_base base; } ;
struct TYPE_9__ {TYPE_1__ rq; } ;
struct mlx5_ib_qp {scalar_t__ state; scalar_t__ create_type; TYPE_4__ ibqp; int cq_recv_list; int cq_send_list; int qps_list; TYPE_3__ trans_qp; TYPE_2__ raw_packet_qp; } ;
struct mlx5_ib_dev {int mdev; int reset_flow_resource_lock; } ;
struct mlx5_ib_cq {int dummy; } ;
struct TYPE_13__ {int ibpd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx5_ib_cq*,int ,int *) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_2 (int *,struct mlx5_ib_qp*,struct mlx5_ib_qp_base*) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_5 (scalar_t__,int ,int ,struct mlx5_ib_cq**,struct mlx5_ib_cq**) ;
 TYPE_7__* FUNC_6 (struct mlx5_ib_qp*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_5__*) ;
 int FUNC_9 (int ,int ,int ,int *,TYPE_5__*) ;
 int FUNC_10 (struct mlx5_ib_cq*,struct mlx5_ib_cq*) ;
 int FUNC_11 (struct mlx5_ib_qp*) ;
 int FUNC_12 (struct mlx5_ib_cq*,struct mlx5_ib_cq*) ;
 int FUNC_13 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_14 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct mlx5_modify_raw_qp_param*,int ) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int * FUNC_17 (scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct mlx5_ib_dev *VAR_5, struct mlx5_ib_qp *VAR_6)
{
 struct mlx5_ib_cq *VAR_7, *VAR_8;
 struct mlx5_ib_qp_base *VAR_9 = &VAR_6->trans_qp.base;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_6->ibqp.rwq_ind_tbl) {
  FUNC_4(VAR_5, VAR_6);
  return;
 }

 VAR_9 = VAR_6->ibqp.qp_type == VAR_1 ?
        &VAR_6->raw_packet_qp.rq.base :
        &VAR_6->trans_qp.base;

 if (VAR_6->state != VAR_0) {
  if (VAR_6->ibqp.qp_type != VAR_1) {
   FUNC_11(VAR_6);
   VAR_11 = FUNC_9(VAR_5->mdev,
        VAR_2, 0,
        ((void*)0), &VAR_9->mqp);
  } else {
   struct mlx5_modify_raw_qp_param VAR_12 = {
    .operation = VAR_2
   };

   VAR_11 = FUNC_14(VAR_5, VAR_6, &VAR_12, 0);
  }
  if (VAR_11)
   FUNC_13(VAR_5, "mlx5_ib: modify QP 0x%06x to RESET failed\n",
         VAR_9->mqp.qpn);
 }

 FUNC_5(VAR_6->ibqp.qp_type, VAR_6->ibqp.send_cq, VAR_6->ibqp.recv_cq,
  &VAR_7, &VAR_8);

 FUNC_15(&VAR_5->reset_flow_resource_lock, VAR_10);
 FUNC_10(VAR_7, VAR_8);

 FUNC_7(&VAR_6->qps_list);
 if (VAR_7)
  FUNC_7(&VAR_6->cq_send_list);

 if (VAR_8)
  FUNC_7(&VAR_6->cq_recv_list);

 if (VAR_6->create_type == VAR_3) {
  FUNC_0(VAR_8, VAR_9->mqp.qpn,
       VAR_6->ibqp.srq ? FUNC_17(VAR_6->ibqp.srq) : ((void*)0));
  if (VAR_7 != VAR_8)
   FUNC_0(VAR_7, VAR_9->mqp.qpn,
        ((void*)0));
 }
 FUNC_12(VAR_7, VAR_8);
 FUNC_16(&VAR_5->reset_flow_resource_lock, VAR_10);

 if (VAR_6->ibqp.qp_type == VAR_1) {
  FUNC_3(VAR_5, VAR_6);
 } else {
  VAR_11 = FUNC_8(VAR_5->mdev, &VAR_9->mqp);
  if (VAR_11)
   FUNC_13(VAR_5, "failed to destroy QP 0x%x\n",
         VAR_9->mqp.qpn);
 }

 if (VAR_6->create_type == VAR_3)
  FUNC_1(VAR_5, VAR_6);
 else if (VAR_6->create_type == VAR_4)
  FUNC_2(&FUNC_6(VAR_6)->ibpd, VAR_6, VAR_9);
}
