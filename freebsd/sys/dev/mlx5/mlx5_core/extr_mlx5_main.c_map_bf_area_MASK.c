
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bf_mapping; } ;
struct mlx5_core_dev {TYPE_1__ priv; int pdev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_1)
{
 resource_size_t VAR_2 = FUNC_2(VAR_1->pdev, 0);
 resource_size_t VAR_3 = FUNC_1(VAR_1->pdev, 0);

 VAR_1->priv.bf_mapping = FUNC_0(VAR_2, VAR_3);

 return VAR_1->priv.bf_mapping ? 0 : -VAR_0;
}
