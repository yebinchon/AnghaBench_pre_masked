
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wq_param {int db_numa_node; int buf_numa_node; } ;
struct mlx5_fpga_device {struct mlx5_core_dev* mdev; } ;
struct TYPE_3__ {int wq_ctrl; int wq; } ;
struct mlx5_fpga_conn {TYPE_1__ qp; struct mlx5_fpga_device* fdev; } ;
struct TYPE_4__ {int numa_node; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_wq_param*,void*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct mlx5_fpga_conn *VAR_0, void *VAR_1)
{
 struct mlx5_fpga_device *VAR_2 = VAR_0->fdev;
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;
 struct mlx5_wq_param VAR_4;

 VAR_4.buf_numa_node = VAR_3->priv.numa_node;
 VAR_4.db_numa_node = VAR_3->priv.numa_node;

 return FUNC_0(VAR_3, &VAR_4, VAR_1, &VAR_0->qp.wq,
     &VAR_0->qp.wq_ctrl);
}
