
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_resize_cq_resp {uintptr_t buf_addr; int ibv_resp; int ibv_cmd; int cqe_size; } ;
struct mlx5_resize_cq {uintptr_t buf_addr; int ibv_resp; int ibv_cmd; int cqe_size; } ;
struct TYPE_4__ {int cqe; } ;
struct TYPE_5__ {scalar_t__ buf; } ;
struct mlx5_cq {int active_cqes; int resize_cqes; int lock; TYPE_2__* resize_buf; TYPE_1__ ibv_cq; TYPE_2__* active_buf; int resize_cqe_sz; int cqe_sz; TYPE_2__ buf_a; TYPE_2__ buf_b; } ;
struct mlx5_context {int dummy; } ;
struct ibv_cq {int cqe; int context; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct ibv_cq*,int,int *,int,int *,int) ;
 int FUNC_2 (struct mlx5_resize_cq_resp*,int ,int) ;
 int FUNC_3 (struct mlx5_context*,struct mlx5_cq*,TYPE_2__*,int,int ) ;
 int FUNC_4 (struct mlx5_cq*) ;
 int FUNC_5 (struct mlx5_context*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct mlx5_cq* FUNC_8 (struct ibv_cq*) ;
 struct mlx5_context* FUNC_9 (int ) ;

int FUNC_10(struct ibv_cq *VAR_4, int VAR_5)
{
 struct mlx5_cq *VAR_6 = FUNC_8(VAR_4);
 struct mlx5_resize_cq_resp VAR_7;
 struct mlx5_resize_cq VAR_8;
 struct mlx5_context *VAR_9 = FUNC_9(VAR_4->context);
 int VAR_10;

 if (VAR_5 < 0) {
  VAR_3 = VAR_0;
  return VAR_3;
 }

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 if (((long long)VAR_5 * 64) > VAR_2)
  return VAR_0;

 FUNC_6(&VAR_6->lock);
 VAR_6->active_cqes = VAR_6->ibv_cq.cqe;
 if (VAR_6->active_buf == &VAR_6->buf_a)
  VAR_6->resize_buf = &VAR_6->buf_b;
 else
  VAR_6->resize_buf = &VAR_6->buf_a;

 VAR_5 = FUNC_0(VAR_5 + 1);
 if (VAR_5 == VAR_4->cqe + 1) {
  VAR_6->resize_buf = ((void*)0);
  VAR_10 = 0;
  goto out;
 }


 VAR_6->resize_cqe_sz = VAR_6->cqe_sz;
 VAR_6->resize_cqes = VAR_5;
 VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_6->resize_buf, VAR_6->resize_cqes, VAR_6->resize_cqe_sz);
 if (VAR_10) {
  VAR_6->resize_buf = ((void*)0);
  VAR_3 = VAR_1;
  goto out;
 }

 VAR_8.buf_addr = (uintptr_t)VAR_6->resize_buf->buf;
 VAR_8.cqe_size = VAR_6->resize_cqe_sz;

 VAR_10 = FUNC_1(VAR_4, VAR_5 - 1, &VAR_8.ibv_cmd, sizeof(VAR_8),
    &VAR_7.ibv_resp, sizeof(VAR_7));
 if (VAR_10)
  goto out_buf;

 FUNC_4(VAR_6);
 FUNC_5(VAR_9, VAR_6->active_buf);
 VAR_6->active_buf = VAR_6->resize_buf;
 VAR_6->ibv_cq.cqe = VAR_5 - 1;
 FUNC_7(&VAR_6->lock);
 VAR_6->resize_buf = ((void*)0);
 return 0;

out_buf:
 FUNC_5(VAR_9, VAR_6->resize_buf);
 VAR_6->resize_buf = ((void*)0);

out:
 FUNC_7(&VAR_6->lock);
 return VAR_10;
}
