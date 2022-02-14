
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx5_wqe_data_seg {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct mlx5_srq {int max_gs; size_t head; size_t tail; int counter; int lock; void** db; int * wrid; } ;
struct ibv_srq {int dummy; } ;
struct ibv_recv_wr {int num_sge; TYPE_1__* sg_list; int wr_id; struct ibv_recv_wr* next; } ;
struct TYPE_2__ {int length; int lkey; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 struct mlx5_wqe_srq_next_seg* FUNC_1 (struct mlx5_srq*,size_t) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx5_srq* FUNC_6 (struct ibv_srq*) ;
 int FUNC_7 () ;

int FUNC_8(struct ibv_srq *VAR_3,
         struct ibv_recv_wr *VAR_4,
         struct ibv_recv_wr **VAR_5)
{
 struct mlx5_srq *VAR_6 = FUNC_6(VAR_3);
 struct mlx5_wqe_srq_next_seg *VAR_7;
 struct mlx5_wqe_data_seg *VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;

 FUNC_4(&VAR_6->lock);

 for (VAR_10 = 0; VAR_4; ++VAR_10, VAR_4 = VAR_4->next) {
  if (VAR_4->num_sge > VAR_6->max_gs) {
   VAR_9 = VAR_0;
   *VAR_5 = VAR_4;
   break;
  }

  if (VAR_6->head == VAR_6->tail) {

   VAR_9 = VAR_1;
   *VAR_5 = VAR_4;
   break;
  }

  VAR_6->wrid[VAR_6->head] = VAR_4->wr_id;

  VAR_7 = FUNC_1(VAR_6, VAR_6->head);
  VAR_6->head = FUNC_0(VAR_7->next_wqe_index);
  VAR_8 = (struct mlx5_wqe_data_seg *) (VAR_7 + 1);

  for (VAR_11 = 0; VAR_11 < VAR_4->num_sge; ++VAR_11) {
   VAR_8[VAR_11].byte_count = FUNC_2(VAR_4->sg_list[VAR_11].length);
   VAR_8[VAR_11].lkey = FUNC_2(VAR_4->sg_list[VAR_11].lkey);
   VAR_8[VAR_11].addr = FUNC_3(VAR_4->sg_list[VAR_11].addr);
  }

  if (VAR_11 < VAR_6->max_gs) {
   VAR_8[VAR_11].byte_count = 0;
   VAR_8[VAR_11].lkey = FUNC_2(VAR_2);
   VAR_8[VAR_11].addr = 0;
  }
 }

 if (VAR_10) {
  VAR_6->counter += VAR_10;





  FUNC_7();

  *VAR_6->db = FUNC_2(VAR_6->counter);
 }

 FUNC_5(&VAR_6->lock);

 return VAR_9;
}
