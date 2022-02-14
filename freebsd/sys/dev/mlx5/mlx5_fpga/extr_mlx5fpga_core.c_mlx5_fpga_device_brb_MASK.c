
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_fpga_device *VAR_3)
{
 int VAR_4;
 struct mlx5_core_dev *VAR_5 = VAR_3->mdev;

 VAR_4 = FUNC_0(VAR_5, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to set bypass on: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_4 = FUNC_0(VAR_5, VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to reset SBU: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_4 = FUNC_0(VAR_5, VAR_1);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to set bypass off: %d\n", VAR_4);
  return VAR_4;
 }
 return 0;
}
