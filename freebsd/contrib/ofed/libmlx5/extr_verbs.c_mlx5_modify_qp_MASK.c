
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int head; int lock; } ;
struct TYPE_5__ {int rsn; } ;
struct mlx5_qp {int qp_cap_cache; TYPE_3__ rq; scalar_t__* db; TYPE_2__ rsc; int max_tso; scalar_t__ rss_qp; } ;
struct TYPE_4__ {int max_tso; int supported_qpts; } ;
struct mlx5_context {int cached_device_cap_flags; TYPE_1__ cached_tso_caps; int * cached_link_layer; } ;
struct ibv_qp_attr {scalar_t__ qp_state; int port_num; } ;
struct ibv_qp {int qp_type; scalar_t__ recv_cq; scalar_t__ send_cq; scalar_t__ srq; int context; } ;
struct ibv_modify_qp_resp_ex {int dummy; } ;
struct ibv_modify_qp_ex {int dummy; } ;
struct ibv_modify_qp {int dummy; } ;
typedef int resp ;
typedef int cmd_ex ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_modify_qp*,int) ;
 int FUNC_2 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_modify_qp_ex*,int,int,struct ibv_modify_qp_resp_ex*,int,int) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct mlx5_qp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 struct mlx5_context* FUNC_9 (int ) ;
 struct mlx5_qp* FUNC_10 (struct ibv_qp*) ;
 int * FUNC_11 (scalar_t__) ;

int FUNC_12(struct ibv_qp *VAR_12, struct ibv_qp_attr *VAR_13,
     int VAR_14)
{
 struct ibv_modify_qp VAR_15 = {};
 struct ibv_modify_qp_ex VAR_16 = {};
 struct ibv_modify_qp_resp_ex VAR_17 = {};
 struct mlx5_qp *VAR_18 = FUNC_10(VAR_12);
 struct mlx5_context *VAR_19 = FUNC_9(VAR_12->context);
 int VAR_20;
 uint32_t *VAR_21;

 if (VAR_18->rss_qp)
  return VAR_0;

 if (VAR_14 & VAR_5) {
  switch (VAR_12->qp_type) {
  case 128:
   if (VAR_19->cached_link_layer[VAR_13->port_num - 1] ==
        VAR_2) {
    if (VAR_19->cached_device_cap_flags &
        VAR_1)
     VAR_18->qp_cap_cache |=
      VAR_7 |
      VAR_10;

    if (FUNC_3(
     VAR_19->cached_tso_caps.supported_qpts,
     128))
     VAR_18->max_tso =
          VAR_19->cached_tso_caps.max_tso;
   }
   break;
  default:
   break;
  }
 }

 if (VAR_14 & VAR_8)
  VAR_20 = FUNC_2(VAR_12, VAR_13, VAR_14,
        &VAR_16,
        sizeof(VAR_16), sizeof(VAR_16),
        &VAR_17,
        sizeof(VAR_17), sizeof(VAR_17));
 else
  VAR_20 = FUNC_1(VAR_12, VAR_13, VAR_14,
     &VAR_15, sizeof(VAR_15));

 if (!VAR_20 &&
     (VAR_14 & VAR_6) &&
     VAR_13->qp_state == VAR_3) {
  if (VAR_12->recv_cq) {
   FUNC_4(FUNC_8(VAR_12->recv_cq), VAR_18->rsc.rsn,
          VAR_12->srq ? FUNC_11(VAR_12->srq) : ((void*)0));
  }
  if (VAR_12->send_cq != VAR_12->recv_cq && VAR_12->send_cq)
   FUNC_4(FUNC_8(VAR_12->send_cq),
          FUNC_10(VAR_12)->rsc.rsn, ((void*)0));

  FUNC_5(VAR_18);
  VAR_21 = VAR_18->db;
  VAR_21[VAR_9] = 0;
  VAR_21[VAR_11] = 0;
 }
 if (!VAR_20 &&
     (VAR_14 & VAR_6) &&
     VAR_13->qp_state == VAR_4 &&
     VAR_12->qp_type == 128) {
  FUNC_6(&VAR_18->rq.lock);
  VAR_18->db[VAR_9] = FUNC_0(VAR_18->rq.head & 0xffff);
  FUNC_7(&VAR_18->rq.lock);
 }

 return VAR_20;
}
