
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_wqe_data_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct TYPE_6__ {void* qend; } ;
struct TYPE_5__ {int device; int pd; } ;
struct mlx5_ib_qp {TYPE_3__ sq; TYPE_2__ ibqp; } ;
struct mlx5_ib_pd {int dummy; } ;
struct mlx5_ib_mr {int dummy; } ;
struct TYPE_4__ {int send_flags; } ;
struct ib_reg_wr {int access; int key; TYPE_1__ wr; int mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct mlx5_ib_qp*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*,struct mlx5_ib_mr*,struct mlx5_ib_pd*) ;
 int FUNC_3 (void*,struct mlx5_ib_mr*,int ,int ) ;
 int FUNC_4 (void*,struct mlx5_ib_mr*) ;
 int FUNC_5 (int ) ;
 struct mlx5_ib_mr* FUNC_6 (int ) ;
 struct mlx5_ib_pd* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct mlx5_ib_qp *VAR_2,
        struct ib_reg_wr *VAR_3,
        void **VAR_4, int *VAR_5)
{
 struct mlx5_ib_mr *VAR_6 = FUNC_6(VAR_3->mr);
 struct mlx5_ib_pd *VAR_7 = FUNC_7(VAR_2->ibqp.pd);

 if (FUNC_8(VAR_3->wr.send_flags & VAR_1)) {
  FUNC_1(FUNC_5(VAR_2->ibqp.device),
        "Invalid IB_SEND_INLINE send flag\n");
  return -VAR_0;
 }

 FUNC_4(*VAR_4, VAR_6);
 *VAR_4 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_5 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
 if (FUNC_8((*VAR_4 == VAR_2->sq.qend)))
  *VAR_4 = FUNC_0(VAR_2, 0);

 FUNC_3(*VAR_4, VAR_6, VAR_3->key, VAR_3->access);
 *VAR_4 += sizeof(struct mlx5_mkey_seg);
 *VAR_5 += sizeof(struct mlx5_mkey_seg) / 16;
 if (FUNC_8((*VAR_4 == VAR_2->sq.qend)))
  *VAR_4 = FUNC_0(VAR_2, 0);

 FUNC_2(*VAR_4, VAR_6, VAR_7);
 *VAR_4 += sizeof(struct mlx5_wqe_data_seg);
 *VAR_5 += (sizeof(struct mlx5_wqe_data_seg) / 16);

 return 0;
}
