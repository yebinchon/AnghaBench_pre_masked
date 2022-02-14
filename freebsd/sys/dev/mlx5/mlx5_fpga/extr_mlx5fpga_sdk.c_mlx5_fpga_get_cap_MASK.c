
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fpga_device {int state_lock; TYPE_2__* mdev; } ;
struct TYPE_3__ {int fpga; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mlx5_fpga_device *VAR_0, u32 *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->state_lock, VAR_2);
 FUNC_0(VAR_1, &VAR_0->mdev->caps.fpga, sizeof(VAR_0->mdev->caps.fpga));
 FUNC_2(&VAR_0->state_lock, VAR_2);
}
