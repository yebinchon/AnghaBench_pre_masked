
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct TYPE_2__ {void* qend; } ;
struct mlx5_ib_qp {TYPE_1__ sq; } ;


 void* FUNC_0 (struct mlx5_ib_qp*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_qp *VAR_0, void **VAR_1, int *VAR_2)
{
 FUNC_2(*VAR_1);
 *VAR_1 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_2 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
 if (FUNC_3((*VAR_1 == VAR_0->sq.qend)))
  *VAR_1 = FUNC_0(VAR_0, 0);
 FUNC_1(*VAR_1);
 *VAR_1 += sizeof(struct mlx5_mkey_seg);
 *VAR_2 += sizeof(struct mlx5_mkey_seg) / 16;
 if (FUNC_3((*VAR_1 == VAR_0->sq.qend)))
  *VAR_1 = FUNC_0(VAR_0, 0);
}
