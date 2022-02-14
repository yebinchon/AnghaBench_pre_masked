
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_pd {int pdn; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (struct mlx5_ib_pd*) ;
 int FUNC_1 (int ,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;
 struct mlx5_ib_pd* FUNC_3 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_4(struct ib_pd *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_2(VAR_0->device);
 struct mlx5_ib_pd *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->mdev, VAR_2->pdn);
 FUNC_0(VAR_2);

 return 0;
}
