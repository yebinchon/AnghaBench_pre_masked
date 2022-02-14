
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_fpga_device {struct mlx5_core_dev* mdev; } ;
struct TYPE_6__ {int active; int sgid_index; int mqp; } ;
struct TYPE_4__ {int irqn; } ;
struct TYPE_5__ {TYPE_1__ mcq; int tasklet; } ;
struct mlx5_fpga_conn {TYPE_3__ qp; struct mlx5_fpga_device* fdev; int fpga_qpn; TYPE_2__ cq; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_fpga_conn*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,int *,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int ,int ,int *,int *,int,int ) ;
 int FUNC_4 (struct mlx5_fpga_conn*) ;
 int FUNC_5 (struct mlx5_fpga_conn*) ;
 int FUNC_6 (struct mlx5_core_dev*,int ) ;
 int FUNC_7 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct mlx5_fpga_conn *VAR_1)
{
 struct mlx5_fpga_device *VAR_2 = VAR_1->fdev;
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;
 int VAR_4 = 0;

 VAR_1->qp.active = 0;
 FUNC_9(&VAR_1->cq.tasklet);
 FUNC_8(VAR_1->cq.mcq.irqn);

 FUNC_6(VAR_1->fdev->mdev, VAR_1->fpga_qpn);
 VAR_4 = FUNC_1(VAR_3, VAR_0, 0, ((void*)0),
      &VAR_1->qp.mqp);
 if (VAR_4)
  FUNC_7(VAR_2, "qp_modify 2ERR failed: %d\n", VAR_4);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);

 FUNC_3(VAR_1->fdev->mdev, VAR_1->qp.sgid_index, 0, 0,
          ((void*)0), ((void*)0), 0, 0);
 FUNC_2(VAR_1->fdev->mdev, VAR_1->qp.sgid_index);
 FUNC_0(VAR_1);
}
