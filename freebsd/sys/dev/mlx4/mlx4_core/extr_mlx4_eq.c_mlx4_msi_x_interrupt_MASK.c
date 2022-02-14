
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_eq {struct mlx4_dev* dev; } ;
struct mlx4_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_eq*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct mlx4_eq *VAR_3 = VAR_2;
 struct mlx4_dev *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_4, VAR_3);


 return VAR_0;
}
