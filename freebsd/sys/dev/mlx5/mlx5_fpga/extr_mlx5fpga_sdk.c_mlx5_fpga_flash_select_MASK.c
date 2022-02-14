
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int fdev_state; int last_admin_image; int mdev; int state_lock; } ;
typedef enum mlx5_fpga_image { ____Placeholder_mlx5_fpga_image } mlx5_fpga_image ;


 int VAR_0 ;





 int FUNC_0 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct mlx5_fpga_device *VAR_1,
      enum mlx5_fpga_image VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_1->state_lock, VAR_3);
 switch (VAR_1->fdev_state) {
 case 129:
  FUNC_3(&VAR_1->state_lock, VAR_3);
  return -VAR_0;
 case 132:
 case 130:
 case 128:
 case 131:
  break;
 }
 FUNC_3(&VAR_1->state_lock, VAR_3);

 VAR_4 = FUNC_1(VAR_1->mdev, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_1, "Failed to select flash image: %d\n", VAR_4);
 else
  VAR_1->last_admin_image = VAR_2;
 return VAR_4;
}
