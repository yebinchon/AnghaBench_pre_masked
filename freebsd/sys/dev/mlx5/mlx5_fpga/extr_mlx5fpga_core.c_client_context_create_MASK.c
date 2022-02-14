
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int client_data_list; } ;
struct mlx5_fpga_client_data {int added; int list; int * data; struct mlx5_fpga_client* client; } ;
struct mlx5_fpga_client {int (* create ) (struct mlx5_fpga_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_fpga_client_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mlx5_fpga_device*,char*,struct mlx5_fpga_client_data*,struct mlx5_fpga_client*) ;
 int FUNC_3 (struct mlx5_fpga_device*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_fpga_device *VAR_2,
     struct mlx5_fpga_client *VAR_3,
     struct mlx5_fpga_client_data **VAR_4)
{
 struct mlx5_fpga_client_data *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->client = VAR_3;
 VAR_5->data = ((void*)0);
 VAR_5->added = 0;
 FUNC_1(&VAR_5->list, &VAR_2->client_data_list);

 FUNC_2(VAR_2, "Adding client context %p client %p\n",
        VAR_5, VAR_3);

 if (VAR_3->create)
  VAR_3->create(VAR_2);

 if (VAR_4)
  *VAR_4 = VAR_5;
 return 0;
}
