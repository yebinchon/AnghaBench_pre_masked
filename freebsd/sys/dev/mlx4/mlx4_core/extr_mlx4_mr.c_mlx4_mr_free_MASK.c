
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_mr {int key; scalar_t__ enabled; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,int ) ;
 int FUNC_2 (struct mlx4_dev*,int ) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_mr*) ;

int FUNC_4(struct mlx4_dev *VAR_0, struct mlx4_mr *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 if (VAR_1->enabled)
  FUNC_1(VAR_0, FUNC_0(VAR_1->key));
 FUNC_2(VAR_0, FUNC_0(VAR_1->key));

 return 0;
}
