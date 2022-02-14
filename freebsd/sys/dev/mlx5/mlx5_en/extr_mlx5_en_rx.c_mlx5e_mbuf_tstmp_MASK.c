
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct mlx5e_priv {size_t clbr_curr; struct mlx5e_clbr_point* clbr_points; } ;
struct mlx5e_clbr_point {scalar_t__ clbr_gen; int clbr_hw_prev; int base_curr; int base_prev; int clbr_hw_curr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;

__attribute__((used)) static uint64_t
FUNC_2(struct mlx5e_priv *VAR_1, uint64_t VAR_2)
{
 struct mlx5e_clbr_point *VAR_3, VAR_4;
 uint64_t VAR_5, VAR_6, VAR_7;
 u_int VAR_8;

 do {
  VAR_3 = &VAR_1->clbr_points[VAR_1->clbr_curr];
  VAR_8 = FUNC_0(&VAR_3->clbr_gen);
  if (VAR_8 == 0)
   return (0);
  VAR_4 = *VAR_3;
  FUNC_1();
 } while (VAR_8 != VAR_3->clbr_gen);

 VAR_5 = (VAR_2 - VAR_4.clbr_hw_prev) >> VAR_0;
 VAR_6 = (VAR_4.base_curr - VAR_4.base_prev) >> VAR_0;
 VAR_7 = (VAR_5 * VAR_6) << VAR_0;






 VAR_7 /= (VAR_4.clbr_hw_curr - VAR_4.clbr_hw_prev) >> VAR_0;

 VAR_7 += VAR_4.base_prev;
 return (VAR_7);
}
