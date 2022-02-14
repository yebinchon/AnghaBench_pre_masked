
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_uar {int index; int bf_map; int map; } ;
struct TYPE_2__ {scalar_t__ bf_mapping; } ;
struct mlx5_core_dev {TYPE_1__ priv; int pdev; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int*) ;
 int FUNC_3 (struct mlx5_core_dev*,int) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct mlx5_core_dev *VAR_3, struct mlx5_uar *VAR_4)
{
 phys_addr_t VAR_5;
 phys_addr_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_4->index);
 if (VAR_7) {
  FUNC_4(VAR_3, "mlx5_cmd_alloc_uar() failed, %d\n", VAR_7);
  return VAR_7;
 }

 VAR_6 = FUNC_5(VAR_3->pdev, 0);
 VAR_5 = (VAR_6 >> VAR_1) + VAR_4->index;
 VAR_4->map = FUNC_1(VAR_5 << VAR_1, VAR_2);
 if (!VAR_4->map) {
  FUNC_4(VAR_3, "ioremap() failed, %d\n", VAR_7);
  VAR_7 = -VAR_0;
  goto err_free_uar;
 }

 if (VAR_3->priv.bf_mapping)
  VAR_4->bf_map = FUNC_0(VAR_3->priv.bf_mapping,
      VAR_4->index << VAR_1,
      VAR_2);

 return 0;

err_free_uar:
 FUNC_3(VAR_3, VAR_4->index);

 return VAR_7;
}
