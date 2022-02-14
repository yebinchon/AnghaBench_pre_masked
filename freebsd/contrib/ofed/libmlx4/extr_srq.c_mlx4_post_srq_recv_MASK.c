
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_wqe_data_seg {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct mlx4_srq {int max_gs; size_t head; size_t tail; int counter; int lock; void** db; int * wrid; } ;
struct ibv_srq {int dummy; } ;
struct ibv_recv_wr {int num_sge; TYPE_1__* sg_list; int wr_id; struct ibv_recv_wr* next; } ;
struct TYPE_2__ {int length; int lkey; int addr; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct mlx4_wqe_srq_next_seg* FUNC_1 (struct mlx4_srq*,size_t) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx4_srq* FUNC_6 (struct ibv_srq*) ;
 int FUNC_7 () ;

int FUNC_8(struct ibv_srq *VAR_1,
         struct ibv_recv_wr *VAR_2,
         struct ibv_recv_wr **VAR_3)
{
 struct mlx4_srq *VAR_4 = FUNC_6(VAR_1);
 struct mlx4_wqe_srq_next_seg *VAR_5;
 struct mlx4_wqe_data_seg *VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 FUNC_4(&VAR_4->lock);

 for (VAR_8 = 0; VAR_2; ++VAR_8, VAR_2 = VAR_2->next) {
  if (VAR_2->num_sge > VAR_4->max_gs) {
   VAR_7 = -1;
   *VAR_3 = VAR_2;
   break;
  }

  if (VAR_4->head == VAR_4->tail) {

   VAR_7 = -1;
   *VAR_3 = VAR_2;
   break;
  }

  VAR_4->wrid[VAR_4->head] = VAR_2->wr_id;

  VAR_5 = FUNC_1(VAR_4, VAR_4->head);
  VAR_4->head = FUNC_0(VAR_5->next_wqe_index);
  VAR_6 = (struct mlx4_wqe_data_seg *) (VAR_5 + 1);

  for (VAR_9 = 0; VAR_9 < VAR_2->num_sge; ++VAR_9) {
   VAR_6[VAR_9].byte_count = FUNC_2(VAR_2->sg_list[VAR_9].length);
   VAR_6[VAR_9].lkey = FUNC_2(VAR_2->sg_list[VAR_9].lkey);
   VAR_6[VAR_9].addr = FUNC_3(VAR_2->sg_list[VAR_9].addr);
  }

  if (VAR_9 < VAR_4->max_gs) {
   VAR_6[VAR_9].byte_count = 0;
   VAR_6[VAR_9].lkey = FUNC_2(VAR_0);
   VAR_6[VAR_9].addr = 0;
  }
 }

 if (VAR_8) {
  VAR_4->counter += VAR_8;





  FUNC_7();

  *VAR_4->db = FUNC_2(VAR_4->counter);
 }

 FUNC_5(&VAR_4->lock);

 return VAR_7;
}
