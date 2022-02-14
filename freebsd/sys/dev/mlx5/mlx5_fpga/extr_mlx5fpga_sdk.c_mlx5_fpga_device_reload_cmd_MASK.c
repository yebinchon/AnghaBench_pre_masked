
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int state_lock; void* fdev_state; int load_event; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_3 (struct mlx5_fpga_device*,char*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct mlx5_fpga_device *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_3(VAR_6, "mlx5/fpga - reload started\n");
 VAR_6->fdev_state = VAR_1;
 FUNC_5(&VAR_6->load_event);
 VAR_10 = FUNC_0(VAR_7, VAR_3);
 if (VAR_10) {
  FUNC_2(VAR_6, "Failed to request reload: %d\n",
         VAR_10);
  goto out;
 }
 VAR_8 = VAR_5 + FUNC_4(VAR_4);
 VAR_10 = FUNC_8(&VAR_6->load_event,
       VAR_8 - VAR_5);
 if (VAR_10 < 0) {
  FUNC_2(VAR_6, "Failed waiting for reload: %d\n", VAR_10);
  VAR_6->fdev_state = VAR_0;
  goto out;
 }

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_6, "Failed load check for reload: %d\n", VAR_10);
  VAR_6->fdev_state = VAR_0;
  goto out;
 }
 FUNC_6(&VAR_6->state_lock, VAR_9);
 VAR_6->fdev_state = VAR_2;
 FUNC_7(&VAR_6->state_lock, VAR_9);
 FUNC_3(VAR_6, "mlx5/fpga - reload ended\n");
out:
 return VAR_10;
}
