
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u32 ;
struct mlx5_core_dev {int vsc_addr; TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int const*,int ,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (int ,scalar_t__,int const,int) ;

int FUNC_4(struct mlx5_core_dev *VAR_5, u32 VAR_6, const u32 *VAR_7)
{
 device_t VAR_8 = VAR_5->pdev->dev.bsddev;
 int VAR_9 = VAR_5->vsc_addr;
 u32 VAR_10 = 0;
 int VAR_11;

 if (!VAR_9) {
  FUNC_1(VAR_5, "Unable to call vsc write, vsc_addr not initialized\n");
  return VAR_0;
 }

 FUNC_0(VAR_9, &VAR_10, VAR_3, VAR_6);
 FUNC_0(VAR_9, &VAR_10, VAR_4, 1);
 FUNC_3(VAR_8, VAR_9 + VAR_2, *VAR_7, 4);
 FUNC_3(VAR_8, VAR_9 + VAR_1, VAR_10, 4);

 VAR_11 = FUNC_2(VAR_5, 0);
 if (VAR_11)
  FUNC_1(VAR_5, "Failed waiting for write flag!\n");

 return VAR_11;
}
