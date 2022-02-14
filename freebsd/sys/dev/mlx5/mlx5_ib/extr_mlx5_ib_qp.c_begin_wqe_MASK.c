
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mlx5_wqe_ctrl_seg {int fm_ce_se; int imm; } ;
struct TYPE_4__ {int cur_post; int wqe_cnt; } ;
struct TYPE_3__ {int send_cq; } ;
struct mlx5_ib_qp {int sq_signal_bits; TYPE_2__ sq; TYPE_1__ ibqp; } ;
struct ib_send_wr {int send_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct mlx5_ib_qp*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (struct ib_send_wr*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_qp *VAR_5, void **VAR_6,
       struct mlx5_wqe_ctrl_seg **VAR_7,
       struct ib_send_wr *VAR_8, unsigned *VAR_9,
       int *VAR_10, int VAR_11)
{
 if (FUNC_3(FUNC_1(&VAR_5->sq, VAR_11, VAR_5->ibqp.send_cq)))
  return -VAR_0;

 *VAR_9 = VAR_5->sq.cur_post & (VAR_5->sq.wqe_cnt - 1);
 *VAR_6 = FUNC_0(VAR_5, *VAR_9);
 *VAR_7 = *VAR_6;
 *(uint32_t *)(*VAR_6 + 8) = 0;
 (*VAR_7)->imm = FUNC_2(VAR_8);
 (*VAR_7)->fm_ce_se = VAR_5->sq_signal_bits |
  (VAR_8->send_flags & VAR_1 ?
   VAR_3 : 0) |
  (VAR_8->send_flags & VAR_2 ?
   VAR_4 : 0);

 *VAR_6 += sizeof(**VAR_7);
 *VAR_10 = sizeof(**VAR_7) / 16;

 return 0;
}
