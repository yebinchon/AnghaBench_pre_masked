
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_ctrl_seg {int fence_size; int owner_opcode; } ;
struct TYPE_2__ {int wqe_cnt; int wqe_shift; } ;
struct mlx4_qp {TYPE_1__ sq; } ;


 struct mlx4_wqe_ctrl_seg* FUNC_0 (struct mlx4_qp*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_qp*,int) ;

void FUNC_3(struct mlx4_qp *VAR_0)
{
 struct mlx4_wqe_ctrl_seg *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->sq.wqe_cnt; ++VAR_2) {
  VAR_1 = FUNC_0(VAR_0, VAR_2);
  VAR_1->owner_opcode = FUNC_1(1 << 31);
  VAR_1->fence_size = 1 << (VAR_0->sq.wqe_shift - 4);

  FUNC_2(VAR_0, VAR_2);
 }
}
