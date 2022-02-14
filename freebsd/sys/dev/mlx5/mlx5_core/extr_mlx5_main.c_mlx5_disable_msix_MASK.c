
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_priv {int msix_arr; } ;
struct mlx5_core_dev {int pdev; struct mlx5_priv priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_priv *VAR_1 = &VAR_0->priv;

 FUNC_1(VAR_0->pdev);
 FUNC_0(VAR_1->msix_arr);
}
