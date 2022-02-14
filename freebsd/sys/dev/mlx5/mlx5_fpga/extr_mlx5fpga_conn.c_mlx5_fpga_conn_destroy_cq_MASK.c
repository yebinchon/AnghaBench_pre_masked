
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wq_ctrl; int mcq; int tasklet; } ;
struct mlx5_fpga_conn {TYPE_2__ cq; TYPE_1__* fdev; } ;
struct TYPE_3__ {int mdev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlx5_fpga_conn *VAR_0)
{
 FUNC_2(&VAR_0->cq.tasklet);
 FUNC_3(&VAR_0->cq.tasklet);
 FUNC_0(VAR_0->fdev->mdev, &VAR_0->cq.mcq);
 FUNC_1(&VAR_0->cq.wq_ctrl);
}
