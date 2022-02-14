
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_wqe_data_seg {int lkey; } ;
struct TYPE_6__ {int buf; } ;
struct mlx4_srq {int max; int max_gs; int wqe_shift; int tail; scalar_t__ head; TYPE_3__ buf; int wrid; } ;
struct ibv_srq_attr {int dummy; } ;
struct ibv_pd {TYPE_1__* context; } ;
struct TYPE_5__ {int page_size; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mlx4_wqe_srq_next_seg* FUNC_1 (struct mlx4_srq*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int,int ) ;
 TYPE_2__* FUNC_7 (int ) ;

int FUNC_8(struct ibv_pd *VAR_1, struct ibv_srq_attr *VAR_2,
         struct mlx4_srq *VAR_3)
{
 struct mlx4_wqe_srq_next_seg *VAR_4;
 struct mlx4_wqe_data_seg *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_3->wrid = FUNC_4(VAR_3->max * sizeof (uint64_t));
 if (!VAR_3->wrid)
  return -1;

 VAR_6 = sizeof (struct mlx4_wqe_srq_next_seg) +
  VAR_3->max_gs * sizeof (struct mlx4_wqe_data_seg);

 for (VAR_3->wqe_shift = 5; 1 << VAR_3->wqe_shift < VAR_6; ++VAR_3->wqe_shift)
  ;

 VAR_7 = VAR_3->max << VAR_3->wqe_shift;

 if (FUNC_6(&VAR_3->buf, VAR_7,
      FUNC_7(VAR_1->context->device)->page_size)) {
  FUNC_0(VAR_3->wrid);
  return -1;
 }

 FUNC_5(VAR_3->buf.buf, 0, VAR_7);






 for (VAR_8 = 0; VAR_8 < VAR_3->max; ++VAR_8) {
  VAR_4 = FUNC_1(VAR_3, VAR_8);
  VAR_4->next_wqe_index = FUNC_2((VAR_8 + 1) & (VAR_3->max - 1));

  for (VAR_5 = (void *) (VAR_4 + 1);
       (void *) VAR_5 < (void *) VAR_4 + (1 << VAR_3->wqe_shift);
       ++VAR_5)
   VAR_5->lkey = FUNC_3(VAR_0);
 }

 VAR_3->head = 0;
 VAR_3->tail = VAR_3->max - 1;

 return 0;
}
