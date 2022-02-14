
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_wqe_data_seg {int dummy; } ;
struct TYPE_4__ {int wqe_cnt; int max_gs; void* max_post; int wqe_shift; } ;
struct mlx4_ib_qp {TYPE_1__ rq; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct ib_qp_cap {scalar_t__ max_recv_wr; void* max_recv_sge; } ;
struct TYPE_5__ {scalar_t__ max_wqes; scalar_t__ max_sq_sg; void* max_rq_sg; } ;
struct TYPE_6__ {TYPE_2__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,void*) ;
 void* FUNC_2 (scalar_t__,void*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_2, struct ib_qp_cap *VAR_3,
         int VAR_4, int VAR_5, struct mlx4_ib_qp *VAR_6)
{

 if (VAR_3->max_recv_wr > VAR_2->dev->caps.max_wqes - VAR_1 ||
     VAR_3->max_recv_sge > FUNC_2(VAR_2->dev->caps.max_sq_sg, VAR_2->dev->caps.max_rq_sg))
  return -VAR_0;

 if (!VAR_5) {
  if (VAR_3->max_recv_wr)
   return -VAR_0;

  VAR_6->rq.wqe_cnt = VAR_6->rq.max_gs = 0;
 } else {

  if (VAR_4 && (!VAR_3->max_recv_wr || !VAR_3->max_recv_sge))
   return -VAR_0;

  VAR_6->rq.wqe_cnt = FUNC_3(FUNC_1(1U, VAR_3->max_recv_wr));
  VAR_6->rq.max_gs = FUNC_3(FUNC_1(1U, VAR_3->max_recv_sge));
  VAR_6->rq.wqe_shift = FUNC_0(VAR_6->rq.max_gs * sizeof (struct mlx4_wqe_data_seg));
 }


 if (VAR_4) {
  VAR_3->max_recv_wr = VAR_6->rq.max_post = VAR_6->rq.wqe_cnt;
  VAR_3->max_recv_sge = VAR_6->rq.max_gs;
 } else {
  VAR_3->max_recv_wr = VAR_6->rq.max_post =
   FUNC_2(VAR_2->dev->caps.max_wqes - VAR_1, VAR_6->rq.wqe_cnt);
  VAR_3->max_recv_sge = FUNC_2(VAR_6->rq.max_gs,
     FUNC_2(VAR_2->dev->caps.max_sq_sg,
         VAR_2->dev->caps.max_rq_sg));
 }

 return 0;
}
