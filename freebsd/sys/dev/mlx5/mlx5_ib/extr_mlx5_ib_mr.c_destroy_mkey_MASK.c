
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_mr {int mmkey; } ;
struct mlx5_ib_dev {int mr_srcu; int mdev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_mr *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->mdev, &VAR_1->mmkey);






 return VAR_2;
}
