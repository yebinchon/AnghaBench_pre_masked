
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_wq {unsigned int head; unsigned int tail; int last_poll; int wqe_cnt; TYPE_1__* w_list; int * wrid; } ;
struct mlx5_ib_qp {int ibqp; struct mlx5_ib_wq sq; } ;
struct ib_wc {int * qp; int vendor_err; int status; int wr_id; } ;
struct TYPE_2__ {int next; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mlx5_ib_qp *VAR_2, int VAR_3,
    struct ib_wc *VAR_4, int *VAR_5)
{
 struct mlx5_ib_wq *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_6 = &VAR_2->sq;
 VAR_7 = VAR_6->head - VAR_6->tail;
 VAR_9 = *VAR_5;

 if (VAR_7 == 0)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_7 && VAR_9 < VAR_3; VAR_10++) {
  VAR_8 = VAR_6->last_poll & (VAR_6->wqe_cnt - 1);
  VAR_4->wr_id = VAR_6->wrid[VAR_8];
  VAR_4->status = VAR_0;
  VAR_4->vendor_err = VAR_1;
  VAR_6->tail++;
  VAR_9++;
  VAR_4->qp = &VAR_2->ibqp;
  VAR_4++;
  VAR_6->last_poll = VAR_6->w_list[VAR_8].next;
 }
 *VAR_5 = VAR_9;
}
