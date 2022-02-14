
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_fpga_transaction {int (* complete1 ) (struct mlx5_fpga_transaction const*,int ) ;} ;
struct mlx5_fpga_trans_priv {struct mlx5_fpga_transaction* user_trans; int status; int state; int tid; } ;
struct mlx5_fpga_device {TYPE_1__* trans; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_fpga_device*,struct mlx5_fpga_trans_priv*) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct mlx5_fpga_transaction const*,int ) ;

__attribute__((used)) static void FUNC_5(struct mlx5_fpga_device *VAR_1,
      struct mlx5_fpga_trans_priv *VAR_2, u8 VAR_3)
{
 const struct mlx5_fpga_transaction *VAR_4;
 unsigned long VAR_5;

 FUNC_1(VAR_1, "Transaction %u is complete with status %u\n",
        VAR_2->tid, VAR_3);

 FUNC_2(&VAR_1->trans->lock, VAR_5);
 VAR_2->state = VAR_0;
 VAR_2->status = VAR_3;
 FUNC_3(&VAR_1->trans->lock, VAR_5);

 VAR_4 = VAR_2->user_trans;
 FUNC_0(VAR_1, VAR_2);

 if (VAR_4->complete1)
  VAR_4->complete1(VAR_4, VAR_3);
}
