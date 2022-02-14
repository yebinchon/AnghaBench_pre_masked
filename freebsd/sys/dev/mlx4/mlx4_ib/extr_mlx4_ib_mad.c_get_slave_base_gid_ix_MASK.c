
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int dev; int ib_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_1, int VAR_2, int VAR_3)
{
 if (FUNC_1(&VAR_1->ib_dev, VAR_3) == VAR_0)
  return VAR_2;
 return FUNC_0(VAR_1->dev, VAR_2, VAR_3);
}
