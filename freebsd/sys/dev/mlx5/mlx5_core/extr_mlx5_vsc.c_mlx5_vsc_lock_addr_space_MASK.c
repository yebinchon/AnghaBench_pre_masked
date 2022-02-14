
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_core_dev {int vsc_addr; TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;

int FUNC_4(struct mlx5_core_dev *VAR_3, u32 VAR_4)
{
 device_t VAR_5 = VAR_3->pdev->dev.bsddev;
 int VAR_6 = VAR_3->vsc_addr;
 u32 VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_1(VAR_3, VAR_2);
 if (VAR_8)
  return VAR_8;


 VAR_9 = FUNC_3(VAR_5, VAR_6 + VAR_1, 4);


 VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_3, VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;
 if (VAR_7 != VAR_9)
  return VAR_0;

 return 0;
}
