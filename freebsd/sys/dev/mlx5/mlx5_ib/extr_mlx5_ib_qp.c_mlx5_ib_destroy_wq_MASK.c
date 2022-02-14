
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_rwq {int core_qp; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_wq {int pd; int device; } ;


 int FUNC_0 (int ,struct mlx5_ib_rwq*) ;
 int FUNC_1 (struct mlx5_ib_rwq*) ;
 int FUNC_2 (int ,int *) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 struct mlx5_ib_rwq* FUNC_4 (struct ib_wq*) ;

int FUNC_5(struct ib_wq *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_3(VAR_0->device);
 struct mlx5_ib_rwq *VAR_2 = FUNC_4(VAR_0);

 FUNC_2(VAR_1->mdev, &VAR_2->core_qp);
 FUNC_0(VAR_0->pd, VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
