
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx5_fw_page {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,long long) ;
 int FUNC_3 (struct mlx5_fw_page*) ;
 struct mlx5_fw_page* FUNC_4 (struct mlx5_core_dev*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct mlx5_core_dev *VAR_0, u64 VAR_1)
{
 struct mlx5_fw_page *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_4(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_0, "Cannot free 4K page at 0x%llx\n", (long long)VAR_1);
  return;
 }
 FUNC_3(VAR_2);
}
