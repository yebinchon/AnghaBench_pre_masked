
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_data_seg {scalar_t__ addr; void* lkey; scalar_t__ byte_count; } ;
struct TYPE_2__ {int head; int wqe_cnt; int max_gs; int lock; int * wrid; } ;
struct mlx4_qp {TYPE_1__ rq; void** db; } ;
struct ibv_recv_wr {int num_sge; int wr_id; scalar_t__ sg_list; struct ibv_recv_wr* next; } ;
struct ibv_qp {int recv_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_wqe_data_seg*,scalar_t__) ;
 struct mlx4_wqe_data_seg* FUNC_1 (struct mlx4_qp*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct mlx4_qp* FUNC_6 (struct ibv_qp*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int ) ;

int FUNC_9(struct ibv_qp *VAR_2, struct ibv_recv_wr *VAR_3,
     struct ibv_recv_wr **VAR_4)
{
 struct mlx4_qp *VAR_5 = FUNC_6(VAR_2);
 struct mlx4_wqe_data_seg *VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_3(&VAR_5->rq.lock);



 VAR_9 = VAR_5->rq.head & (VAR_5->rq.wqe_cnt - 1);

 for (VAR_8 = 0; VAR_3; ++VAR_8, VAR_3 = VAR_3->next) {
  if (FUNC_8(&VAR_5->rq, VAR_8, FUNC_5(VAR_2->recv_cq))) {
   VAR_7 = VAR_0;
   *VAR_4 = VAR_3;
   goto out;
  }

  if (VAR_3->num_sge > VAR_5->rq.max_gs) {
   VAR_7 = VAR_0;
   *VAR_4 = VAR_3;
   goto out;
  }

  VAR_6 = FUNC_1(VAR_5, VAR_9);

  for (VAR_10 = 0; VAR_10 < VAR_3->num_sge; ++VAR_10)
   FUNC_0(VAR_6 + VAR_10, VAR_3->sg_list + VAR_10);

  if (VAR_10 < VAR_5->rq.max_gs) {
   VAR_6[VAR_10].byte_count = 0;
   VAR_6[VAR_10].lkey = FUNC_2(VAR_1);
   VAR_6[VAR_10].addr = 0;
  }

  VAR_5->rq.wrid[VAR_9] = VAR_3->wr_id;

  VAR_9 = (VAR_9 + 1) & (VAR_5->rq.wqe_cnt - 1);
 }

out:
 if (VAR_8) {
  VAR_5->rq.head += VAR_8;





  FUNC_7();

  *VAR_5->db = FUNC_2(VAR_5->rq.head & 0xffff);
 }

 FUNC_4(&VAR_5->rq.lock);

 return VAR_7;
}
