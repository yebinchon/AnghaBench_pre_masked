
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int ib_dev; int port; int devr; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_ib_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_ib_dev*) ;
 int FUNC_6 (struct mlx5_ib_dev*) ;
 int FUNC_7 (struct mlx5_ib_dev*) ;
 int FUNC_8 (struct mlx5_ib_dev*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct mlx5_ib_dev*) ;

__attribute__((used)) static void FUNC_11(struct mlx5_core_dev *VAR_1, void *VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = VAR_2;
 enum rdma_link_layer VAR_4 = FUNC_9(&VAR_3->ib_dev, 1);

 FUNC_6(VAR_3);
 FUNC_10(VAR_3);
 FUNC_3(&VAR_3->ib_dev);
 FUNC_7(VAR_3);
 FUNC_1(VAR_3);
 FUNC_8(VAR_3);
 FUNC_0(&VAR_3->devr);
 if (VAR_4 == VAR_0)
  FUNC_5(VAR_3);
 FUNC_4(VAR_3->port);
 FUNC_2(&VAR_3->ib_dev);
}
