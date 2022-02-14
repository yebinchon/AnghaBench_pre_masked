
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_query {int oper_image; int admin_image; int image_status; } ;
struct mlx5_fpga_device {int state_lock; int last_oper_image; int last_admin_image; int image_status; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct mlx5_fpga_device *VAR_0,
       struct mlx5_fpga_query *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->state_lock, VAR_2);
 VAR_1->image_status = VAR_0->image_status;
 VAR_1->admin_image = VAR_0->last_admin_image;
 VAR_1->oper_image = VAR_0->last_oper_image;
 FUNC_1(&VAR_0->state_lock, VAR_2);
}
