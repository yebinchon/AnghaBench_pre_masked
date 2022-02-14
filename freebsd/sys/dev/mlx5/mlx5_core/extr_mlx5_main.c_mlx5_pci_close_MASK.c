
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_priv {int dummy; } ;
struct mlx5_core_dev {int pdev; int iseg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_0, struct mlx5_priv *VAR_1)
{
 FUNC_0(VAR_0->iseg);
 FUNC_2(VAR_0->pdev);
 FUNC_1(VAR_0);
}
