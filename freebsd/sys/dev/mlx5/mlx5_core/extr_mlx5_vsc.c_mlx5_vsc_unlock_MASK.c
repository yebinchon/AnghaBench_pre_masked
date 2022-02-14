
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {int vsc_addr; TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;

void FUNC_2(struct mlx5_core_dev *VAR_1)
{
 device_t VAR_2 = VAR_1->pdev->dev.bsddev;
 int VAR_3 = VAR_1->vsc_addr;

 if (!VAR_3) {
  FUNC_0(VAR_1, "Unable to release vsc lock, vsc_addr not initialized\n");
  return;
 }

 FUNC_1(VAR_2, VAR_3 + VAR_0, 0, 4);
}
