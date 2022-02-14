
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {int vsc_addr; TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (struct mlx5_core_dev*,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int ,int) ;

int FUNC_5(struct mlx5_core_dev *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 device_t VAR_7 = VAR_4->pdev->dev.bsddev;
 int VAR_8 = VAR_4->vsc_addr;
 int VAR_9;
 u32 VAR_10;

 if (!VAR_8) {
  FUNC_1(VAR_4, "Unable to call vsc read, vsc_addr not initialized\n");
  return VAR_0;
 }

 FUNC_0(VAR_8, &VAR_10, VAR_3, VAR_5);
 FUNC_4(VAR_7, VAR_8 + VAR_1, VAR_10, 4);

 VAR_9 = FUNC_2(VAR_4, 1);
 if (VAR_9) {
  FUNC_1(VAR_4, "Failed waiting for read complete flag!\n");
  return VAR_9;
 }

 *VAR_6 = FUNC_3(VAR_7, VAR_8 + VAR_2, 4);

 return 0;
}
