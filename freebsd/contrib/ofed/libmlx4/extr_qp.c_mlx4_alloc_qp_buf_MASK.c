
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct mlx4_wqe_data_seg {int dummy; } ;
struct TYPE_8__ {int * buf; } ;
struct TYPE_6__ {int max_gs; int wqe_cnt; int wqe_shift; int offset; void* wrid; } ;
struct TYPE_5__ {int wqe_cnt; int wqe_shift; int offset; void* wrid; } ;
struct mlx4_qp {int buf_size; TYPE_4__ buf; TYPE_2__ rq; TYPE_1__ sq; } ;
struct ibv_qp_cap {int max_recv_sge; } ;
struct ibv_context {int device; } ;
typedef enum ibv_qp_type { ____Placeholder_ibv_qp_type } ibv_qp_type ;
struct TYPE_7__ {int page_size; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ) ;
 TYPE_3__* FUNC_5 (int ) ;

int FUNC_6(struct ibv_context *VAR_0, struct ibv_qp_cap *VAR_1,
         enum ibv_qp_type VAR_2, struct mlx4_qp *VAR_3)
{
 VAR_3->rq.max_gs = VAR_1->max_recv_sge;

 if (VAR_3->sq.wqe_cnt) {
  VAR_3->sq.wrid = FUNC_2(VAR_3->sq.wqe_cnt * sizeof (uint64_t));
  if (!VAR_3->sq.wrid)
   return -1;
 }

 if (VAR_3->rq.wqe_cnt) {
  VAR_3->rq.wrid = FUNC_2(VAR_3->rq.wqe_cnt * sizeof (uint64_t));
  if (!VAR_3->rq.wrid) {
   FUNC_1(VAR_3->sq.wrid);
   return -1;
  }
 }

 for (VAR_3->rq.wqe_shift = 4;
      1 << VAR_3->rq.wqe_shift < VAR_3->rq.max_gs * sizeof (struct mlx4_wqe_data_seg);
      VAR_3->rq.wqe_shift++)
  ;

 VAR_3->buf_size = (VAR_3->rq.wqe_cnt << VAR_3->rq.wqe_shift) +
  (VAR_3->sq.wqe_cnt << VAR_3->sq.wqe_shift);
 if (VAR_3->rq.wqe_shift > VAR_3->sq.wqe_shift) {
  VAR_3->rq.offset = 0;
  VAR_3->sq.offset = VAR_3->rq.wqe_cnt << VAR_3->rq.wqe_shift;
 } else {
  VAR_3->rq.offset = VAR_3->sq.wqe_cnt << VAR_3->sq.wqe_shift;
  VAR_3->sq.offset = 0;
 }

 if (VAR_3->buf_size) {
  if (FUNC_4(&VAR_3->buf,
       FUNC_0(VAR_3->buf_size, FUNC_5(VAR_0->device)->page_size),
       FUNC_5(VAR_0->device)->page_size)) {
   FUNC_1(VAR_3->sq.wrid);
   FUNC_1(VAR_3->rq.wrid);
   return -1;
  }

  FUNC_3(VAR_3->buf.buf, 0, VAR_3->buf_size);
 } else {
  VAR_3->buf.buf = ((void*)0);
 }

 return 0;
}
