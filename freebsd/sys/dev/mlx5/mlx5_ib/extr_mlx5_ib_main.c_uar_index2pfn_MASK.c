
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_1__* mdev; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static phys_addr_t FUNC_1(struct mlx5_ib_dev *VAR_1, int VAR_2)
{
 return (FUNC_0(VAR_1->mdev->pdev, 0) >> VAR_0) + VAR_2;
}
