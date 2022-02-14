
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_tools_dev {int lock; struct mlx5_fpga_device* fdev; } ;
struct mlx5_fpga_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_fpga_tools_dev*) ;
 struct mlx5_fpga_tools_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_fpga_tools_dev*) ;
 int FUNC_3 (int *,char*) ;

struct mlx5_fpga_tools_dev *FUNC_4(struct mlx5_fpga_device *VAR_1)
{
 int VAR_2;
 struct mlx5_fpga_tools_dev *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto out;

 VAR_3->fdev = VAR_1;
 FUNC_3(&VAR_3->lock, "mlx5fpgat");
 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2)
  goto err_free;

 goto out;

err_free:
 FUNC_0(VAR_3);
 VAR_3 = ((void*)0);

out:
 return VAR_3;
}
