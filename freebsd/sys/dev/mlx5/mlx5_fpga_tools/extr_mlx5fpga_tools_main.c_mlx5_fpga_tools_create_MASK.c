
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_tools_dev {int dummy; } ;
struct mlx5_fpga_device {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlx5_fpga_device*,int *,struct mlx5_fpga_tools_dev*) ;
 int FUNC_2 (struct mlx5_fpga_device*) ;
 struct mlx5_fpga_tools_dev* FUNC_3 (struct mlx5_fpga_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct mlx5_fpga_device *VAR_1)
{
 struct mlx5_fpga_tools_dev *VAR_2 = ((void*)0);

 FUNC_0(FUNC_2(VAR_1), "tools_create\n");

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return;

 FUNC_1(VAR_1, &VAR_0, VAR_2);
}
