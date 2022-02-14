
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int is_going_down; } ;
struct mlx4_ib_dev {int dev; TYPE_1__ sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx4_ib_dev*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_dev *VAR_2, u8 VAR_3)
{
 FUNC_1(VAR_2, VAR_3, VAR_0);

 if (FUNC_2(VAR_2->dev) && !VAR_2->sriov.is_going_down)
  FUNC_0(VAR_2->dev, VAR_3,
         VAR_1);
}
