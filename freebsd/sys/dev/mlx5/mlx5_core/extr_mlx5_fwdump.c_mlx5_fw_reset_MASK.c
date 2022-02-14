
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct mlx5_core_dev *VAR_3)
{
 device_t VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = -FUNC_2(VAR_3, VAR_2);
 if (VAR_6 == 0) {
  VAR_4 = VAR_3->pdev->dev.bsddev;
  FUNC_3(&VAR_1);
  VAR_5 = FUNC_1(VAR_4);
  VAR_6 = FUNC_0(FUNC_1(VAR_5), VAR_5,
      VAR_0);
  FUNC_4(&VAR_1);
 }
 return (VAR_6);
}
