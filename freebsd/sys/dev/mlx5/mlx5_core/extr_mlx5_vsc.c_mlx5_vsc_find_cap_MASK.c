
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {int vsc_addr; TYPE_2__* pdev; } ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

int FUNC_1(struct mlx5_core_dev *VAR_1)
{
 int *VAR_2 = &VAR_1->vsc_addr;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->pdev->dev.bsddev, VAR_0, VAR_2);

 if (VAR_3)
  *VAR_2 = 0;

 return VAR_3;
}
