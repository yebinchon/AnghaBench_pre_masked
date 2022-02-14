
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int hw_ctx; } ;


 int FUNC_0 (struct mlx4_dev*,int ) ;
 int FUNC_1 (struct mlx4_dev*) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_7(struct mlx4_dev *VAR_0)
{
 FUNC_4(&VAR_0->hw_ctx);
 FUNC_6(VAR_0);
 FUNC_5(VAR_0);
 if (FUNC_2(VAR_0))
  FUNC_3(VAR_0);
 else {
  FUNC_0(VAR_0, 0);
  FUNC_1(VAR_0);
 }
}
