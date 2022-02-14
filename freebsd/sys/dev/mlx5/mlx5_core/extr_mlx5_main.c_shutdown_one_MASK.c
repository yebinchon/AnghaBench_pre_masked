
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx5_priv {int dummy; } ;
struct mlx5_core_dev {struct mlx5_priv priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_priv*,int) ;
 struct mlx5_core_dev* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = FUNC_5(VAR_0);
 struct mlx5_priv *VAR_2 = &VAR_1->priv;
 int VAR_3;


 FUNC_0(VAR_1);


 FUNC_1(VAR_1);

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
         FUNC_4(VAR_1, VAR_2, 0);
 FUNC_2(VAR_1);
}
