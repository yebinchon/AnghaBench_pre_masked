
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_crspace_regmap {scalar_t__ cnt; scalar_t__ addr; } ;
struct mlx5_core_dev {int dump_valid; int dump_lock; int * dump_data; struct mlx5_crspace_regmap* dump_rege; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,scalar_t__,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct mlx5_core_dev *VAR_3)
{
 const struct mlx5_crspace_regmap *VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(VAR_3, "Issuing FW dump\n");
 FUNC_6(&VAR_3->dump_lock);
 if (VAR_3->dump_data == ((void*)0)) {
  VAR_7 = VAR_1;
  goto failed;
 }
 if (VAR_3->dump_valid) {

  FUNC_1(VAR_3,
      "Only one FW dump can be captured aborting FW dump\n");
  VAR_7 = VAR_0;
  goto failed;
 }


 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 != 0)
  goto failed;
 VAR_7 = FUNC_4(VAR_3, VAR_2);
 if (VAR_7 != 0)
  goto unlock_vsc;
 for (VAR_5 = 0, VAR_4 = VAR_3->dump_rege; VAR_4->cnt != 0; VAR_4++) {
  for (VAR_6 = 0; VAR_6 < VAR_4->cnt; VAR_6++) {
   VAR_7 = FUNC_3(VAR_3, VAR_4->addr + VAR_6 * 4,
       &VAR_3->dump_data[VAR_5]);
   if (VAR_7 != 0)
    goto unlock_vsc;
   VAR_5++;
  }
 }
 VAR_3->dump_valid = 1;
unlock_vsc:
 FUNC_5(VAR_3);
failed:
 FUNC_7(&VAR_3->dump_lock);
 return (VAR_7);
}
