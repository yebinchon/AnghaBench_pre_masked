
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_wq {unsigned int head; int tail; int wqe_cnt; int * wrid; } ;
struct mlx5_ib_qp {int ibqp; struct mlx5_ib_wq rq; } ;
struct ib_wc {int * qp; int vendor_err; int status; int wr_id; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mlx5_ib_qp *VAR_2, int VAR_3,
    struct ib_wc *VAR_4, int *VAR_5)
{
 struct mlx5_ib_wq *VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = &VAR_2->rq;
 VAR_7 = VAR_6->head - VAR_6->tail;
 VAR_8 = *VAR_5;

 if (VAR_7 == 0)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_7 && VAR_8 < VAR_3; VAR_9++) {
  VAR_4->wr_id = VAR_6->wrid[VAR_6->tail & (VAR_6->wqe_cnt - 1)];
  VAR_4->status = VAR_0;
  VAR_4->vendor_err = VAR_1;
  VAR_6->tail++;
  VAR_8++;
  VAR_4->qp = &VAR_2->ibqp;
  VAR_4++;
 }
 *VAR_5 = VAR_8;
}
