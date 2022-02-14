
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int ackto_lt; int port; int pkey_index; } ;
struct mlx5_qp_context {int mtu_msgmax; TYPE_5__ alt_path; int params1; TYPE_5__ pri_path; int rnr_nextrecvpsn; int params2; int log_pg_sz_remote_qpn; int next_send_psn; int qkey; int flags; } ;
struct TYPE_8__ {scalar_t__ qp_type; } ;
struct TYPE_6__ {int mqp; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct mlx5_ib_qp {TYPE_3__ ibqp; int state; TYPE_2__ trans_qp; } ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_9__ {int port_num; } ;
struct ib_qp_attr {int path_mtu; int qkey; int rq_psn; int sq_psn; int dest_qp_num; int sq_draining; int max_rd_atomic; int max_dest_rd_atomic; int min_rnr_timer; int timeout; int retry_cnt; int rnr_retry; int alt_timeout; int port_num; void* pkey_index; TYPE_4__ alt_ah_attr; int alt_port_num; void* alt_pkey_index; TYPE_4__ ah_attr; int qp_access_flags; int path_mig_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct mlx5_ib_dev*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct mlx5_ib_dev *VAR_7, struct mlx5_ib_qp *VAR_8,
    struct ib_qp_attr *VAR_9)
{
 int VAR_10 = FUNC_1(VAR_6);
 struct mlx5_qp_context *VAR_11;
 int VAR_12;
 u32 *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_5(VAR_10, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_6(VAR_7->mdev, &VAR_8->trans_qp.base.mqp, VAR_13,
     VAR_10);
 if (VAR_14)
  goto out;


 VAR_11 = (struct mlx5_qp_context *)FUNC_0(VAR_6, VAR_13, VAR_5);

 VAR_12 = FUNC_3(VAR_11->flags) >> 28;

 VAR_8->state = FUNC_10(VAR_12);
 VAR_9->path_mtu = VAR_11->mtu_msgmax >> 5;
 VAR_9->path_mig_state =
  FUNC_8((FUNC_3(VAR_11->flags) >> 11) & 0x3);
 VAR_9->qkey = FUNC_3(VAR_11->qkey);
 VAR_9->rq_psn = FUNC_3(VAR_11->rnr_nextrecvpsn) & 0xffffff;
 VAR_9->sq_psn = FUNC_3(VAR_11->next_send_psn) & 0xffffff;
 VAR_9->dest_qp_num = FUNC_3(VAR_11->log_pg_sz_remote_qpn) & 0xffffff;
 VAR_9->qp_access_flags =
  FUNC_9(FUNC_3(VAR_11->params2));

 if (VAR_8->ibqp.qp_type == VAR_2 || VAR_8->ibqp.qp_type == VAR_3) {
  FUNC_7(VAR_7, &VAR_9->ah_attr, &VAR_11->pri_path);
  FUNC_7(VAR_7, &VAR_9->alt_ah_attr, &VAR_11->alt_path);
  VAR_9->alt_pkey_index =
   FUNC_2(VAR_11->alt_path.pkey_index);
  VAR_9->alt_port_num = VAR_9->alt_ah_attr.port_num;
 }

 VAR_9->pkey_index = FUNC_2(VAR_11->pri_path.pkey_index);
 VAR_9->port_num = VAR_11->pri_path.port;


 VAR_9->sq_draining = VAR_12 == VAR_4;

 VAR_9->max_rd_atomic = 1 << ((FUNC_3(VAR_11->params1) >> 21) & 0x7);

 VAR_9->max_dest_rd_atomic =
  1 << ((FUNC_3(VAR_11->params2) >> 21) & 0x7);
 VAR_9->min_rnr_timer =
  (FUNC_3(VAR_11->rnr_nextrecvpsn) >> 24) & 0x1f;
 VAR_9->timeout = VAR_11->pri_path.ackto_lt >> 3;
 VAR_9->retry_cnt = (FUNC_3(VAR_11->params1) >> 16) & 0x7;
 VAR_9->rnr_retry = (FUNC_3(VAR_11->params1) >> 13) & 0x7;
 VAR_9->alt_timeout = VAR_11->alt_path.ackto_lt >> 3;

out:
 FUNC_4(VAR_13);
 return VAR_14;
}
