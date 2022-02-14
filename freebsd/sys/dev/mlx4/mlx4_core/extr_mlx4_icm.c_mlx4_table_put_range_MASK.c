
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_icm_table {int obj_size; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_icm_table*,scalar_t__) ;

void FUNC_1(struct mlx4_dev *VAR_1, struct mlx4_icm_table *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5 += VAR_0 / VAR_2->obj_size)
  FUNC_0(VAR_1, VAR_2, VAR_5);
}
