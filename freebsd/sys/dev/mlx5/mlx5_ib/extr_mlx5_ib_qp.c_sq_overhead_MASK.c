
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_xrc_seg {int dummy; } ;
struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_wqe_raddr_seg {int dummy; } ;
struct mlx5_wqe_eth_seg {int dummy; } ;
struct mlx5_wqe_eth_pad {int dummy; } ;
struct mlx5_wqe_datagram_seg {int dummy; } ;
struct mlx5_wqe_ctrl_seg {int dummy; } ;
struct mlx5_wqe_atomic_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct ib_qp_init_attr {int qp_type; int create_flags; } ;


 int VAR_0 ;






 int VAR_1 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct ib_qp_init_attr *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->qp_type) {
 case 131:
  VAR_3 += sizeof(struct mlx5_wqe_xrc_seg);

 case 135:
  VAR_3 += sizeof(struct mlx5_wqe_ctrl_seg) +
   FUNC_0(sizeof(struct mlx5_wqe_atomic_seg) +
       sizeof(struct mlx5_wqe_raddr_seg),
       sizeof(struct mlx5_wqe_umr_ctrl_seg) +
       sizeof(struct mlx5_mkey_seg));
  break;

 case 130:
  return 0;

 case 133:
  VAR_3 += sizeof(struct mlx5_wqe_ctrl_seg) +
   FUNC_0(sizeof(struct mlx5_wqe_raddr_seg),
       sizeof(struct mlx5_wqe_umr_ctrl_seg) +
       sizeof(struct mlx5_mkey_seg));
  break;

 case 132:
  if (VAR_2->create_flags & VAR_1)
   VAR_3 += sizeof(struct mlx5_wqe_eth_pad) +
    sizeof(struct mlx5_wqe_eth_seg);

 case 134:
 case 129:
  VAR_3 += sizeof(struct mlx5_wqe_ctrl_seg) +
   sizeof(struct mlx5_wqe_datagram_seg);
  break;

 case 128:
  VAR_3 += sizeof(struct mlx5_wqe_ctrl_seg) +
   sizeof(struct mlx5_wqe_umr_ctrl_seg) +
   sizeof(struct mlx5_mkey_seg);
  break;

 default:
  return -VAR_0;
 }

 return VAR_3;
}
