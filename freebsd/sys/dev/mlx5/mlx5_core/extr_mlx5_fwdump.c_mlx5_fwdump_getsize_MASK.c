
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_crspace_regmap {scalar_t__ cnt; } ;



__attribute__((used)) static unsigned
FUNC_0(const struct mlx5_crspace_regmap *VAR_0)
{
 const struct mlx5_crspace_regmap *VAR_1;
 unsigned VAR_2;

 for (VAR_2 = 0, VAR_1 = VAR_0; VAR_1->cnt != 0; VAR_1++)
  VAR_2 += VAR_1->cnt;
 return (VAR_2);
}
