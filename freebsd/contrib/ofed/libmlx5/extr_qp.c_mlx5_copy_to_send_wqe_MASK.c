
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_raddr_seg {int dummy; } ;
struct mlx5_wqe_data_seg {int dummy; } ;
struct mlx5_wqe_ctrl_seg {int qpn_ds; int opmod_idx_opcode; } ;
struct mlx5_wqe_atomic_seg {int dummy; } ;
struct TYPE_4__ {int wqe_cnt; void* qend; } ;
struct mlx5_qp {TYPE_2__ sq; TYPE_1__* ibv_qp; } ;
struct TYPE_3__ {scalar_t__ qp_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_wqe_data_seg*,void*,int*,int) ;
 int FUNC_2 (int ,char*,...) ;
 void* FUNC_3 (struct mlx5_qp*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct mlx5_qp *VAR_5, int VAR_6, void *VAR_7, int VAR_8)
{
 struct mlx5_wqe_ctrl_seg *VAR_9;
 struct mlx5_wqe_data_seg *VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_6 &= (VAR_5->sq.wqe_cnt - 1);
 VAR_9 = FUNC_3(VAR_5, VAR_6);
 if (VAR_5->ibv_qp->qp_type != VAR_0) {
  FUNC_2(VAR_4, "scatter to CQE is supported only for RC QPs\n");
  return VAR_1;
 }
 VAR_11 = VAR_9 + 1;

 switch (FUNC_0(VAR_9->opmod_idx_opcode) & 0xff) {
 case 128:
  VAR_11 = VAR_11 + sizeof(struct mlx5_wqe_raddr_seg);
  break;

 case 130:
 case 129:
  VAR_11 = VAR_11 + sizeof(struct mlx5_wqe_raddr_seg) +
   sizeof(struct mlx5_wqe_atomic_seg);
  break;

 default:
  FUNC_2(VAR_4, "scatter to CQE for opcode %d\n",
   FUNC_0(VAR_9->opmod_idx_opcode) & 0xff);
  return VAR_2;
 }

 VAR_10 = VAR_11;
 VAR_12 = (FUNC_0(VAR_9->qpn_ds) & 0x3F) - (((void *)VAR_10 - (void *)VAR_9) >> 4);
 if (FUNC_4((void *)(VAR_10 + VAR_12) > VAR_5->sq.qend)) {
  int VAR_13 = ((void *)VAR_5->sq.qend - (void *)VAR_10) >> 4;
  int VAR_14 = VAR_8;

  if (FUNC_1(VAR_10, VAR_7, &VAR_8, VAR_13) == VAR_3)
   return VAR_3;
  VAR_12 = VAR_12 - VAR_13;
  VAR_7 += VAR_14 - VAR_8;
  VAR_10 = FUNC_3(VAR_5, 0);
 }

 return FUNC_1(VAR_10, VAR_7, &VAR_8, VAR_12);
}
