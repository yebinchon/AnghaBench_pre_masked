
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fpga_dma_buf {int list; } ;
struct TYPE_3__ {scalar_t__ pc; scalar_t__ cc; scalar_t__ size; int lock; int backlog; } ;
struct TYPE_4__ {TYPE_1__ sq; int active; } ;
struct mlx5_fpga_conn {TYPE_2__ qp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;
 int FUNC_2 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct mlx5_fpga_conn *VAR_1,
   struct mlx5_fpga_dma_buf *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 if (!VAR_1->qp.active)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_3(&VAR_1->qp.sq.lock, VAR_3);

 if (VAR_1->qp.sq.pc - VAR_1->qp.sq.cc >= VAR_1->qp.sq.size) {
  FUNC_0(&VAR_2->list, &VAR_1->qp.sq.backlog);
  goto out_unlock;
 }

 FUNC_2(VAR_1, VAR_2);

out_unlock:
 FUNC_4(&VAR_1->qp.sq.lock, VAR_3);
 return VAR_4;
}
