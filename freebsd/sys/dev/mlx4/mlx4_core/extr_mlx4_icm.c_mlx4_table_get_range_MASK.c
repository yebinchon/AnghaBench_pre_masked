
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_icm_table {int obj_size; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_icm_table*,scalar_t__,int ) ;
 int FUNC_1 (struct mlx4_dev*,struct mlx4_icm_table*,scalar_t__) ;

int FUNC_2(struct mlx4_dev *VAR_2, struct mlx4_icm_table *VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = VAR_1 / VAR_3->obj_size;
 int VAR_7;
 u32 VAR_8;

 for (VAR_8 = VAR_4; VAR_8 <= VAR_5; VAR_8 += VAR_6) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_8, VAR_0);
  if (VAR_7)
   goto fail;
 }

 return 0;

fail:
 while (VAR_8 > VAR_4) {
  VAR_8 -= VAR_6;
  FUNC_1(VAR_2, VAR_3, VAR_8);
 }

 return VAR_7;
}
