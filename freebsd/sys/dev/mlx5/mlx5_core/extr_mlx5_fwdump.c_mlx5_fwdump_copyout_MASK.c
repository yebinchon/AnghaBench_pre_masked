
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_fwdump_reg {int val; scalar_t__ addr; } ;
struct mlx5_fwdump_get {int reg_filled; int reg_cnt; struct mlx5_fwdump_reg* buf; } ;
struct mlx5_crspace_regmap {scalar_t__ cnt; scalar_t__ addr; } ;
struct mlx5_core_dev {int dump_size; int dump_copyout; int dump_lock; int * dump_data; struct mlx5_crspace_regmap* dump_rege; int dump_valid; } ;
typedef int rv ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_fwdump_reg*,struct mlx5_fwdump_reg*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int
FUNC_4(struct mlx5_core_dev *VAR_1, struct mlx5_fwdump_get *VAR_2)
{
 const struct mlx5_crspace_regmap *VAR_3;
 struct mlx5_fwdump_reg VAR_4, *VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_1(&VAR_1->dump_lock);
 if (VAR_1->dump_data == ((void*)0)) {
  FUNC_2(&VAR_1->dump_lock);
  return (VAR_0);
 }
 if (VAR_2->buf == ((void*)0)) {
  VAR_2->reg_filled = VAR_1->dump_size;
  FUNC_2(&VAR_1->dump_lock);
  return (0);
 }
 if (!VAR_1->dump_valid) {
  FUNC_2(&VAR_1->dump_lock);
  return (VAR_0);
 }
 VAR_1->dump_copyout = 1;
 FUNC_2(&VAR_1->dump_lock);

 VAR_5 = VAR_2->buf;
 for (VAR_6 = 0, VAR_3 = VAR_1->dump_rege; VAR_3->cnt != 0; VAR_3++) {
  for (VAR_7 = 0; VAR_7 < VAR_3->cnt; VAR_7++) {
   if (VAR_6 >= VAR_2->reg_cnt)
    goto out;
   VAR_4.addr = VAR_3->addr + VAR_7 * 4;
   VAR_4.val = VAR_1->dump_data[VAR_6];
   VAR_8 = FUNC_0(&VAR_4, VAR_5, sizeof(VAR_4));
   if (VAR_8 != 0)
    return (VAR_8);
   VAR_5++;
   VAR_6++;
  }
 }
out:
 VAR_2->reg_filled = VAR_6;
 FUNC_1(&VAR_1->dump_lock);
 VAR_1->dump_copyout = 0;
 FUNC_3(&VAR_1->dump_copyout);
 FUNC_2(&VAR_1->dump_lock);
 return (0);
}
