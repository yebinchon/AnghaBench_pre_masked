
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wr_data; scalar_t__ wrid; scalar_t__ wqe_head; } ;
struct TYPE_5__ {scalar_t__ wrid; } ;
struct TYPE_8__ {scalar_t__ buf; } ;
struct mlx5_qp {TYPE_2__ sq; TYPE_1__ rq; TYPE_4__ sq_buf; TYPE_4__ buf; TYPE_3__* ibv_qp; } ;
struct mlx5_context {int dummy; } ;
struct TYPE_7__ {int context; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlx5_context*,TYPE_4__*) ;
 struct mlx5_context* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_qp *VAR_0)
{
 struct mlx5_context *VAR_1 = FUNC_2(VAR_0->ibv_qp->context);

 FUNC_1(VAR_1, &VAR_0->buf);

 if (VAR_0->sq_buf.buf)
  FUNC_1(VAR_1, &VAR_0->sq_buf);

 if (VAR_0->rq.wrid)
  FUNC_0(VAR_0->rq.wrid);

 if (VAR_0->sq.wqe_head)
  FUNC_0(VAR_0->sq.wqe_head);

 if (VAR_0->sq.wrid)
  FUNC_0(VAR_0->sq.wrid);

 if (VAR_0->sq.wr_data)
  FUNC_0(VAR_0->sq.wr_data);
}
