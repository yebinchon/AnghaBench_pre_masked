
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_device {int dummy; } ;
struct mlx5_fpga_client_data {int list; TYPE_1__* client; } ;
struct TYPE_2__ {int (* destroy ) (struct mlx5_fpga_device*) ;} ;


 int FUNC_0 (struct mlx5_fpga_client_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_fpga_device*,char*,struct mlx5_fpga_client_data*,TYPE_1__*) ;
 int FUNC_3 (struct mlx5_fpga_device*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_fpga_device *VAR_0,
       struct mlx5_fpga_client_data *VAR_1)
{
 FUNC_2(VAR_0, "Deleting client context %p of client %p\n",
        VAR_1, VAR_1->client);
 if (VAR_1->client->destroy)
  VAR_1->client->destroy(VAR_0);
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
