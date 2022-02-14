
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int qpn; } ;
struct TYPE_4__ {TYPE_3__ mqp; } ;
struct mlx5_fpga_conn {TYPE_1__ qp; TYPE_2__* fdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_5__ {struct mlx5_core_dev* mdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ,int ,int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct mlx5_fpga_conn *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->fdev->mdev;

 FUNC_1(VAR_1->fdev, "Modifying QP %u to RST\n", VAR_1->qp.mqp.qpn);

 return FUNC_0(VAR_2, VAR_0, 0, ((void*)0),
       &VAR_1->qp.mqp);
}
