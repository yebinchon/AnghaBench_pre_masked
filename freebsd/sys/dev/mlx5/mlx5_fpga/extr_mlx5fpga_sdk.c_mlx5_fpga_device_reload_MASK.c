
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int fdev_state; int load_event; int state_lock; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int intf_state_mutex; int intf_state; } ;
typedef enum mlx5_fpga_image { ____Placeholder_mlx5_fpga_image } mlx5_fpga_image ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 unsigned long VAR_8 ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_fpga_device*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_7 (struct mlx5_fpga_device*,char*) ;
 int FUNC_8 (struct mlx5_core_dev*,int) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 unsigned long FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;

int FUNC_19(struct mlx5_fpga_device *VAR_9,
       enum mlx5_fpga_image VAR_10)
{
 struct mlx5_core_dev *VAR_11 = VAR_9->mdev;
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14 = 0;

 FUNC_16(&VAR_9->state_lock, VAR_13);
 switch (VAR_9->fdev_state) {
 case 129:
  VAR_14 = -VAR_1;
  break;
 case 130:
  VAR_14 = -VAR_0;
  break;
 case 128:
 case 131:
 case 132:
  break;
 }
 FUNC_17(&VAR_9->state_lock, VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_12(&VAR_11->intf_state_mutex);

 if (VAR_10 == VAR_4) {
  VAR_14 = FUNC_3(VAR_9);
  goto out;
 }

 FUNC_0(VAR_7, &VAR_11->intf_state);

 FUNC_10(VAR_11);

 FUNC_5(VAR_11);

 VAR_9->fdev_state = 130;
 FUNC_14(&VAR_9->load_event);

 if (VAR_10 <= VAR_3) {
  FUNC_7(VAR_9, "Loading from flash\n");
  VAR_14 = FUNC_8(VAR_11, VAR_10);
  if (VAR_14) {
   FUNC_6(VAR_9, "Failed to request load: %d\n",
          VAR_14);
   goto out;
  }
 } else if (VAR_10 == VAR_5) {
  FUNC_7(VAR_9, "Resetting\n");
  VAR_14 = FUNC_2(VAR_11, VAR_2);
  if (VAR_14) {
   FUNC_6(VAR_9, "Failed to request reset: %d\n",
          VAR_14);
   goto out;
  }
 } else {
  FUNC_6(VAR_9, "Unknown command: %d\n",
         VAR_10);
  goto out;
 }

 VAR_12 = VAR_8 + FUNC_11(VAR_6);
 VAR_14 = FUNC_18(&VAR_9->load_event, VAR_12 - VAR_8);
 if (VAR_14 < 0) {
  FUNC_6(VAR_9, "Failed waiting for FPGA load: %d\n", VAR_14);
  VAR_9->fdev_state = 131;
  goto out;
 }

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_11, "fpga device start failed %d\n", VAR_14);
  goto out;
 }

 if (VAR_14) {
  FUNC_1(VAR_11, "IPSec device start failed %d\n", VAR_14);
  goto err_fpga;
 }

 VAR_14 = FUNC_9(VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_11, "mlx5_register_device failed %d\n", VAR_14);
  VAR_9->fdev_state = 131;
  goto err_ipsec;
 }

 FUNC_15(VAR_7, &VAR_11->intf_state);
 goto out;

err_ipsec:

err_fpga:
 FUNC_5(VAR_11);
out:
 FUNC_13(&VAR_11->intf_state_mutex);
 return VAR_14;
}
