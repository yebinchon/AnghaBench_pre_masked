
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_trans_priv {int list_item; } ;
struct mlx5_fpga_device {TYPE_1__* trans; } ;
struct TYPE_2__ {int lock; int free_queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mlx5_fpga_device *VAR_0,
       struct mlx5_fpga_trans_priv *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->trans->lock, VAR_2);
 FUNC_0(&VAR_1->list_item, &VAR_0->trans->free_queue);
 FUNC_2(&VAR_0->trans->lock, VAR_2);
}
