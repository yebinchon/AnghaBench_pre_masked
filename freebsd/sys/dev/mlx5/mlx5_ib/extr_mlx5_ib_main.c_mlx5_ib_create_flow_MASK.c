
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tirn; } ;
struct TYPE_7__ {TYPE_2__ rq; } ;
struct TYPE_5__ {int tirn; } ;
struct mlx5_ib_qp {int flags; TYPE_3__ raw_packet_qp; TYPE_1__ rss_qp; } ;
struct ib_flow {int dummy; } ;
struct mlx5_ib_flow_prio {struct ib_flow ibflow; int tir_num; int type; } ;
struct mlx5_ib_flow_handler {struct ib_flow ibflow; int tir_num; int type; } ;
struct TYPE_8__ {int lock; } ;
struct mlx5_ib_dev {TYPE_4__ flow_db; int mdev; } ;
struct mlx5_flow_destination {struct ib_flow ibflow; int tir_num; int type; } ;
struct ib_qp {int device; } ;
struct ib_flow_attr {scalar_t__ priority; scalar_t__ port; int flags; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_flow* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct mlx5_ib_flow_prio*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct ib_flow_attr*,struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_5 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct ib_flow_attr*,struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct ib_flow_attr*,struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct mlx5_ib_flow_prio*,struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_8 (struct mlx5_ib_dev*,struct ib_flow_attr*,int ) ;
 int FUNC_9 (struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_15 ;
 int FUNC_13 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,int) ;
 struct mlx5_ib_dev* FUNC_14 (int ) ;
 struct mlx5_ib_qp* FUNC_15 (struct ib_qp*) ;

__attribute__((used)) static struct ib_flow *FUNC_16(struct ib_qp *VAR_16,
        struct ib_flow_attr *VAR_17,
        int VAR_18)
{
 struct mlx5_ib_dev *VAR_19 = FUNC_14(VAR_16->device);
 struct mlx5_ib_qp *VAR_20 = FUNC_15(VAR_16);
 struct mlx5_ib_flow_handler *VAR_21 = ((void*)0);
 struct mlx5_flow_destination *VAR_22 = ((void*)0);
 struct mlx5_ib_flow_prio *VAR_23 = ((void*)0);
 struct mlx5_ib_flow_prio *VAR_24;
 int VAR_25;

 if (VAR_17->priority > VAR_11)
  return FUNC_0(-VAR_2);

 if (VAR_18 != VAR_9 ||
     VAR_17->port > FUNC_2(VAR_19->mdev, VAR_15) ||
     (VAR_17->flags & ~VAR_5))
  return FUNC_0(-VAR_0);

 VAR_22 = FUNC_10(sizeof(*VAR_22), VAR_3);
 if (!VAR_22)
  return FUNC_0(-VAR_1);

 FUNC_11(&VAR_19->flow_db.lock);

 VAR_24 = FUNC_8(VAR_19, VAR_17, VAR_12);
 if (FUNC_1(VAR_24)) {
  VAR_25 = FUNC_3(VAR_24);
  goto unlock;
 }
 if (VAR_17->type == VAR_8) {
  VAR_23 = FUNC_8(VAR_19, VAR_17, VAR_13);
  if (FUNC_1(VAR_23)) {
   VAR_25 = FUNC_3(VAR_23);
   VAR_23 = ((void*)0);
   goto destroy_ft;
  }
 }

 VAR_22->type = VAR_10;
 if (VAR_20->flags & VAR_14)
  VAR_22->tir_num = VAR_20->rss_qp.tirn;
 else
  VAR_22->tir_num = VAR_20->raw_packet_qp.rq.tirn;

 if (VAR_17->type == VAR_7) {
  if (VAR_17->flags & VAR_5) {
   VAR_21 = FUNC_4(VAR_19, VAR_24,
       VAR_17, VAR_22);
  } else {
   VAR_21 = FUNC_5(VAR_19, VAR_24, VAR_17,
         VAR_22);
  }
 } else if (VAR_17->type == VAR_4 ||
     VAR_17->type == VAR_6) {
  VAR_21 = FUNC_6(VAR_19, VAR_24, VAR_17,
      VAR_22);
 } else if (VAR_17->type == VAR_8) {
  VAR_21 = FUNC_7(VAR_19, VAR_24, VAR_23, VAR_22);
 } else {
  VAR_25 = -VAR_0;
  goto destroy_ft;
 }

 if (FUNC_1(VAR_21)) {
  VAR_25 = FUNC_3(VAR_21);
  VAR_21 = ((void*)0);
  goto destroy_ft;
 }

 FUNC_12(&VAR_19->flow_db.lock);
 FUNC_9(VAR_22);

 return &VAR_21->ibflow;

destroy_ft:
 FUNC_13(VAR_19, VAR_24, 0);
 if (VAR_23)
  FUNC_13(VAR_19, VAR_23, 0);
unlock:
 FUNC_12(&VAR_19->flow_db.lock);
 FUNC_9(VAR_22);
 FUNC_9(VAR_21);
 return FUNC_0(VAR_25);
}
