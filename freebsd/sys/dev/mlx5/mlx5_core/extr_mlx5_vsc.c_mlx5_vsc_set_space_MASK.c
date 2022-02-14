
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int vsc_addr; TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int ,int) ;
 int VAR_4 ;

int FUNC_5(struct mlx5_core_dev *VAR_5, u16 VAR_6)
{
 device_t VAR_7 = VAR_5->pdev->dev.bsddev;
 int VAR_8 = VAR_5->vsc_addr;
 u32 VAR_9 = 0;

 if (!VAR_8) {
  FUNC_2(VAR_5, "Unable to set vsc space, vsc_addr not initialized\n");
  return VAR_0;
 }

 FUNC_1(VAR_9, &VAR_9, VAR_6, VAR_6);
 FUNC_4(VAR_7, VAR_8 + VAR_2, VAR_9, 4);
 VAR_9 = FUNC_3(VAR_7, VAR_8 + VAR_2, 4);

 if (FUNC_0(VAR_9, &VAR_9, VAR_4) != VAR_3) {
  FUNC_2(VAR_5, "Space 0x%x is not supported.\n", VAR_6);
  return VAR_1;
 }

 return 0;
}
