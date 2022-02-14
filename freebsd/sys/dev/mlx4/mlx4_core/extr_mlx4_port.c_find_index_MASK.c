
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_mac_table {int * entries; scalar_t__* refs; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_3,
        struct mlx4_mac_table *VAR_4, u64 VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4->refs[VAR_6] &&
      (VAR_1 & VAR_5) ==
      (VAR_1 & FUNC_0(VAR_4->entries[VAR_6])))
   return VAR_6;
 }

 return -VAR_0;
}
