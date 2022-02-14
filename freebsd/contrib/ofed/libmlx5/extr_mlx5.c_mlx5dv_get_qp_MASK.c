
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int size; int reg; } ;
struct TYPE_13__ {int stride; int wqe_cnt; void* buf; } ;
struct TYPE_10__ {int stride; int wqe_cnt; void* buf; } ;
struct mlx5dv_qp {TYPE_8__ bf; TYPE_5__ rq; TYPE_2__ sq; int dbrec; scalar_t__ comp_mask; } ;
struct TYPE_14__ {int wqe_shift; int wqe_cnt; scalar_t__ offset; } ;
struct TYPE_12__ {scalar_t__ buf; } ;
struct TYPE_11__ {int wqe_shift; int wqe_cnt; scalar_t__ offset; } ;
struct TYPE_9__ {scalar_t__ buf; } ;
struct mlx5_qp {TYPE_7__* bf; TYPE_6__ rq; TYPE_4__ buf; TYPE_3__ sq; TYPE_1__ sq_buf; scalar_t__ sq_buf_size; int db; } ;
struct ibv_qp {int dummy; } ;
struct TYPE_15__ {scalar_t__ uuarn; int buf_size; int reg; } ;


 struct mlx5_qp* FUNC_0 (struct ibv_qp*) ;

__attribute__((used)) static int FUNC_1(struct ibv_qp *VAR_0,
    struct mlx5dv_qp *VAR_1)
{
 struct mlx5_qp *VAR_2 = FUNC_0(VAR_0);

 VAR_1->comp_mask = 0;
 VAR_1->dbrec = VAR_2->db;

 if (VAR_2->sq_buf_size)

  VAR_1->sq.buf = (void *)((uintptr_t)VAR_2->sq_buf.buf);
 else
  VAR_1->sq.buf = (void *)((uintptr_t)VAR_2->buf.buf + VAR_2->sq.offset);
 VAR_1->sq.wqe_cnt = VAR_2->sq.wqe_cnt;
 VAR_1->sq.stride = 1 << VAR_2->sq.wqe_shift;

 VAR_1->rq.buf = (void *)((uintptr_t)VAR_2->buf.buf + VAR_2->rq.offset);
 VAR_1->rq.wqe_cnt = VAR_2->rq.wqe_cnt;
 VAR_1->rq.stride = 1 << VAR_2->rq.wqe_shift;

 VAR_1->bf.reg = VAR_2->bf->reg;

 if (VAR_2->bf->uuarn > 0)
  VAR_1->bf.size = VAR_2->bf->buf_size;
 else
  VAR_1->bf.size = 0;

 return 0;
}
