
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int client_data_list; int fdev_state; int load_event; int state_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct mlx5_fpga_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mlx5_fpga_device *FUNC_4(void)
{
 struct mlx5_fpga_device *VAR_2 = ((void*)0);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_3(&VAR_2->state_lock);
 FUNC_1(&VAR_2->load_event);
 VAR_2->fdev_state = VAR_1;
 FUNC_0(&VAR_2->client_data_list);
 return VAR_2;
}
