
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_gsi_qp {int mutex; int rx_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int device; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct mlx5_ib_gsi_qp* FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (int ,struct ib_qp_attr*,int) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_ib_gsi_qp*) ;
 struct mlx5_ib_dev* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;

int FUNC_9(struct ib_qp *VAR_1, struct ib_qp_attr *VAR_2,
     int VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = FUNC_7(VAR_1->device);
 struct mlx5_ib_gsi_qp *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 FUNC_2(VAR_4, "modifying GSI QP to state %d\n", VAR_2->qp_state);

 FUNC_4(&VAR_5->mutex);
 VAR_6 = FUNC_1(VAR_5->rx_qp, VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_3(VAR_4, "unable to modify GSI rx QP: %d\n", VAR_6);
  goto unlock;
 }

 if (FUNC_8(VAR_5->rx_qp)->state == VAR_0)
  FUNC_6(VAR_5);

unlock:
 FUNC_5(&VAR_5->mutex);

 return VAR_6;
}
