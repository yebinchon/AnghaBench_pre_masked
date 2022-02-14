
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wqe_cnt; } ;
struct mlx4_qp {int qp_cap_cache; scalar_t__* db; TYPE_1__ rq; int link_layer; } ;
struct ibv_qp_attr {scalar_t__ qp_state; int port_num; } ;
struct ibv_qp {int qp_type; scalar_t__ state; scalar_t__ recv_cq; scalar_t__ send_cq; int qp_num; scalar_t__ srq; int context; } ;
struct ibv_port_attr {int link_layer; } ;
struct ibv_modify_qp {int dummy; } ;
struct ibv_device_attr {int device_cap_flags; } ;
typedef int device_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_modify_qp*,int) ;
 int FUNC_1 (int ,struct ibv_device_attr*) ;
 int FUNC_2 (int ,int ,struct ibv_port_attr*) ;
 int FUNC_3 (struct ibv_device_attr*,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct mlx4_qp*) ;
 int FUNC_6 (struct mlx4_qp*) ;
 int FUNC_7 (scalar_t__) ;
 struct mlx4_qp* FUNC_8 (struct ibv_qp*) ;
 int * FUNC_9 (scalar_t__) ;

int FUNC_10(struct ibv_qp *VAR_11, struct ibv_qp_attr *VAR_12,
      int VAR_13)
{
 struct ibv_modify_qp VAR_14 = {};
 struct ibv_port_attr VAR_15;
 struct mlx4_qp *VAR_16 = FUNC_8(VAR_11);
 struct ibv_device_attr VAR_17;
 int VAR_18;

 FUNC_3(&VAR_17, 0, sizeof(VAR_17));
 if (VAR_13 & VAR_6) {
  VAR_18 = FUNC_2(VAR_11->context, VAR_12->port_num,
         &VAR_15);
  if (VAR_18)
   return VAR_18;
  VAR_16->link_layer = VAR_15.link_layer;

  VAR_18 = FUNC_1(VAR_11->context, &VAR_17);
  if (VAR_18)
   return VAR_18;

  switch(VAR_11->qp_type) {
  case 128:
   if ((VAR_16->link_layer == VAR_3) &&
       (VAR_17.device_cap_flags & VAR_1))
    VAR_16->qp_cap_cache |= VAR_9 |
      VAR_10;
   break;
  case 129:
   if ((VAR_16->link_layer == VAR_2) &&
       (VAR_17.device_cap_flags & VAR_0))
    VAR_16->qp_cap_cache |= VAR_8 |
      VAR_10;
   break;
  default:
   break;
  }

 }

 if (VAR_11->state == VAR_5 &&
     VAR_13 & VAR_7 &&
     VAR_12->qp_state == VAR_4) {
  FUNC_6(FUNC_8(VAR_11));
 }

 VAR_18 = FUNC_0(VAR_11, VAR_12, VAR_13, &VAR_14, sizeof VAR_14);

 if (!VAR_18 &&
     (VAR_13 & VAR_7) &&
     VAR_12->qp_state == VAR_5) {
  if (VAR_11->recv_cq)
   FUNC_4(FUNC_7(VAR_11->recv_cq), VAR_11->qp_num,
          VAR_11->srq ? FUNC_9(VAR_11->srq) : ((void*)0));
  if (VAR_11->send_cq && VAR_11->send_cq != VAR_11->recv_cq)
   FUNC_4(FUNC_7(VAR_11->send_cq), VAR_11->qp_num, ((void*)0));

  FUNC_5(FUNC_8(VAR_11));
  if (FUNC_8(VAR_11)->rq.wqe_cnt)
   *FUNC_8(VAR_11)->db = 0;
 }

 return VAR_18;
}
