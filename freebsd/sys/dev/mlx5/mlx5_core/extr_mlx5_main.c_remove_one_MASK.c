
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx5_priv {int dummy; } ;
struct mlx5_core_dev {int sysctl_ctx; int dump_lock; struct mlx5_priv priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_priv*) ;
 scalar_t__ FUNC_6 (struct mlx5_core_dev*,struct mlx5_priv*,int) ;
 int FUNC_7 (int *) ;
 struct mlx5_core_dev* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = FUNC_8(VAR_0);
 struct mlx5_priv *VAR_2 = &VAR_1->priv;

 if (FUNC_6(VAR_1, VAR_2, 1)) {
  FUNC_1(VAR_1, "mlx5_unload_one failed\n");
  FUNC_3(VAR_1);
  return;
 }

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1, VAR_2);
 FUNC_7(&VAR_1->dump_lock);
 FUNC_9(VAR_0, ((void*)0));
 FUNC_10(&VAR_1->sysctl_ctx);
 FUNC_0(VAR_1);
}
