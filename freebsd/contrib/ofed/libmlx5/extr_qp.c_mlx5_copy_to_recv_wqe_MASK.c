
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_data_seg {int dummy; } ;
struct TYPE_2__ {int wqe_shift; } ;
struct mlx5_qp {int wq_sig; TYPE_1__ rq; } ;


 int FUNC_0 (struct mlx5_wqe_data_seg*,void*,int*,int) ;
 struct mlx5_wqe_data_seg* FUNC_1 (struct mlx5_qp*,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct mlx5_qp *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 struct mlx5_wqe_data_seg *VAR_4;
 int VAR_5 = 1 << (VAR_0->rq.wqe_shift - 4);

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_2(VAR_0->wq_sig))
  ++VAR_4;

 return FUNC_0(VAR_4, VAR_2, &VAR_3, VAR_5);
}
