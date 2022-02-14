
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
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 () ;

int
FUNC_4(struct mlx5_core_dev *VAR_3, u32 VAR_4)
{
 device_t VAR_5 = VAR_3->pdev->dev.bsddev;
 int VAR_6 = VAR_3->vsc_addr;
 int VAR_7 = 0;
 u32 VAR_8;

 while (1) {
  if (VAR_7 > VAR_2)
   return VAR_0;

  VAR_8 = FUNC_2(VAR_5, VAR_6 + VAR_1, 4);
  if (VAR_4 == FUNC_1(VAR_6, &VAR_8, VAR_8))
   break;

  VAR_7++;
  FUNC_0((FUNC_3() % 90) + 10);
 }

 return 0;
}
