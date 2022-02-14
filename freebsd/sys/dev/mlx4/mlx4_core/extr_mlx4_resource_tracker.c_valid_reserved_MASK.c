
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx4_dev*,int,int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_2(VAR_0, VAR_2) &&
  (FUNC_1(VAR_0) || FUNC_0(VAR_0, VAR_1, VAR_2));
}
