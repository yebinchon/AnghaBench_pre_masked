
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_modify_raw_qp_param {int operation; int set_mask; } ;
struct mlx5_ib_sq {int dummy; } ;
struct mlx5_ib_rq {int dummy; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_sq sq; struct mlx5_ib_rq rq; } ;
struct TYPE_4__ {scalar_t__ wqe_cnt; } ;
struct TYPE_3__ {scalar_t__ wqe_cnt; } ;
struct mlx5_ib_qp {TYPE_2__ sq; TYPE_1__ rq; struct mlx5_ib_raw_packet_qp raw_packet_qp; } ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int,struct mlx5_modify_raw_qp_param const*) ;
 int FUNC_2 (int ,struct mlx5_ib_sq*,int) ;
 int FUNC_3 (int ,struct mlx5_ib_sq*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_7, struct mlx5_ib_qp *VAR_8,
    const struct mlx5_modify_raw_qp_param *VAR_9,
    u8 VAR_10)
{
 struct mlx5_ib_raw_packet_qp *VAR_11 = &VAR_8->raw_packet_qp;
 struct mlx5_ib_rq *VAR_12 = &VAR_11->rq;
 struct mlx5_ib_sq *VAR_13 = &VAR_11->sq;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 switch (VAR_9->operation) {
 case 130:
  VAR_14 = VAR_2;
  VAR_15 = VAR_5;
  break;
 case 134:
  VAR_14 = VAR_1;
  VAR_15 = VAR_4;
  break;
 case 133:
  VAR_14 = VAR_3;
  VAR_15 = VAR_6;
  break;
 case 132:
 case 131:
 case 129:
 case 128:
  if (VAR_9->set_mask)
   return -VAR_0;
  else
   return 0;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 if (VAR_8->rq.wqe_cnt) {
  VAR_16 = FUNC_1(VAR_7, VAR_12, VAR_14, VAR_9);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_8->sq.wqe_cnt) {
  if (VAR_10) {
   VAR_16 = FUNC_3(VAR_7->mdev, VAR_13,
           VAR_10);
   if (VAR_16)
    return VAR_16;
  }

  return FUNC_2(VAR_7->mdev, VAR_13, VAR_15);
 }

 return 0;
}
