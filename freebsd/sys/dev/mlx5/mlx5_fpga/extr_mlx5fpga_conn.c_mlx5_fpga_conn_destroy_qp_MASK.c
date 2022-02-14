
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bufs; } ;
struct TYPE_6__ {int bufs; } ;
struct TYPE_8__ {int wq_ctrl; TYPE_3__ rq; TYPE_2__ sq; int mqp; } ;
struct mlx5_fpga_conn {TYPE_4__ qp; TYPE_1__* fdev; } ;
struct TYPE_5__ {int mdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mlx5_fpga_conn*) ;
 int FUNC_3 (struct mlx5_fpga_conn*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_fpga_conn *VAR_0)
{
 FUNC_1(VAR_0->fdev->mdev, &VAR_0->qp.mqp);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->qp.sq.bufs);
 FUNC_0(VAR_0->qp.rq.bufs);
 FUNC_4(&VAR_0->qp.wq_ctrl);
}
