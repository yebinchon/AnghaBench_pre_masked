
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


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_4 () ;

int FUNC_5(struct mlx5_core_dev *VAR_5)
{
 device_t VAR_6 = VAR_5->pdev->dev.bsddev;
 int VAR_7 = VAR_5->vsc_addr;
 int VAR_8 = 0;
 u32 VAR_9;
 u32 VAR_10;

 if (!VAR_7) {
  FUNC_1(VAR_5, "Unable to acquire vsc lock, vsc_addr not initialized\n");
  return VAR_1;
 }

 while (1) {
  if (VAR_8 > VAR_3)
   return VAR_0;

  if (FUNC_2(VAR_6, VAR_7 + VAR_4, 4)) {
   VAR_8++;




   FUNC_0((FUNC_4() % 9000) + 1000);
   continue;
  }

  VAR_10 = FUNC_2(VAR_6, VAR_7 + VAR_2, 4);
  FUNC_3(VAR_6, VAR_7 + VAR_4, VAR_10, 4);
  VAR_9 = FUNC_2(VAR_6, VAR_7 + VAR_4, 4);

  if (VAR_9 == VAR_10)
   break;

  VAR_8++;
 }

 return 0;
}
