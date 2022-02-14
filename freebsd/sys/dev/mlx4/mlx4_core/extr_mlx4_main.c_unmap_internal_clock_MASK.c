
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_priv {scalar_t__ clock_mapping; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->clock_mapping)
  FUNC_0(VAR_1->clock_mapping);
}
