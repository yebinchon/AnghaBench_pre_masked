
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_rwq_ind_table {int rqtn; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_rwq_ind_table {int device; } ;


 int FUNC_0 (struct mlx5_ib_rwq_ind_table*) ;
 int FUNC_1 (int ,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;
 struct mlx5_ib_rwq_ind_table* FUNC_3 (struct ib_rwq_ind_table*) ;

int FUNC_4(struct ib_rwq_ind_table *VAR_0)
{
 struct mlx5_ib_rwq_ind_table *VAR_1 = FUNC_3(VAR_0);
 struct mlx5_ib_dev *VAR_2 = FUNC_2(VAR_0->device);

 FUNC_1(VAR_2->mdev, VAR_1->rqtn);

 FUNC_0(VAR_1);
 return 0;
}
