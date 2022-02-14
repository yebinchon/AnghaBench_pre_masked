
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fpga_device {TYPE_1__* ipsec; } ;
struct mlx5_fpga_conn_attr {struct mlx5_fpga_device* cb_arg; int recv_cb; void* tx_size; void* rx_size; int member_0; } ;
struct mlx5_fpga_conn {int dummy; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_3__ {struct mlx5_fpga_conn* conn; int pending_cmds_lock; int pending_cmds; int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_fpga_conn*) ;
 int FUNC_2 (struct mlx5_fpga_conn*) ;
 void* VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_6 (struct mlx5_fpga_device*,int,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 struct mlx5_fpga_conn* FUNC_8 (struct mlx5_fpga_device*,struct mlx5_fpga_conn_attr*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct mlx5_core_dev *VAR_4)
{
 struct mlx5_fpga_conn_attr VAR_5 = {0};
 struct mlx5_fpga_device *VAR_6 = VAR_4->fpga;
 struct mlx5_fpga_conn *VAR_7;
 int VAR_8;

 if (!FUNC_7(VAR_4))
  return 0;

 VAR_6->ipsec = FUNC_4(sizeof(*VAR_6->ipsec), VAR_1);
 if (!VAR_6->ipsec)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_6, sizeof(VAR_6->ipsec->caps),
         VAR_6->ipsec->caps);
 if (VAR_8) {
  FUNC_5(VAR_6, "Failed to retrieve IPSec extended capabilities: %d\n",
         VAR_8);
  goto error;
 }

 FUNC_0(&VAR_6->ipsec->pending_cmds);
 FUNC_9(&VAR_6->ipsec->pending_cmds_lock);

 VAR_5.rx_size = VAR_2;
 VAR_5.tx_size = VAR_2;
 VAR_5.recv_cb = VAR_3;
 VAR_5.cb_arg = VAR_6;
 VAR_7 = FUNC_8(VAR_6, &VAR_5);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
  FUNC_5(VAR_6, "Error creating IPSec command connection %d\n",
         VAR_8);
  goto error;
 }
 VAR_6->ipsec->conn = VAR_7;
 return 0;

error:
 FUNC_3(VAR_6->ipsec);
 VAR_6->ipsec = ((void*)0);
 return VAR_8;
}
