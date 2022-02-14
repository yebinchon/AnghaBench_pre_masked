
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_resize_cq {uintptr_t buf_addr; int ibv_cmd; } ;
struct mlx4_buf {scalar_t__ buf; } ;
struct mlx4_cq {int lock; struct mlx4_buf buf; int cqe_size; } ;
struct ibv_resize_cq_resp {int dummy; } ;
struct ibv_cq {int cqe; TYPE_1__* context; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ibv_cq*,int,int *,int,struct ibv_resize_cq_resp*,int) ;
 int FUNC_2 (int ,struct mlx4_buf*,int,int ) ;
 int FUNC_3 (struct mlx4_cq*,scalar_t__,int) ;
 int FUNC_4 (struct mlx4_buf*) ;
 int FUNC_5 (struct mlx4_cq*) ;
 int FUNC_6 (struct mlx4_cq*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mlx4_cq* FUNC_9 (struct ibv_cq*) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct ibv_cq *VAR_1, int VAR_2)
{
 struct mlx4_cq *VAR_3 = FUNC_9(VAR_1);
 struct mlx4_resize_cq VAR_4;
 struct ibv_resize_cq_resp VAR_5;
 struct mlx4_buf VAR_6;
 int VAR_7, VAR_8, VAR_9;


 if (VAR_2 > 0x3fffff)
  return VAR_0;

 FUNC_7(&VAR_3->lock);

 VAR_2 = FUNC_0(VAR_2 + 1);
 if (VAR_2 == VAR_1->cqe + 1) {
  VAR_9 = 0;
  goto out;
 }


 VAR_8 = FUNC_5(VAR_3);
 if (VAR_2 < VAR_8 + 1) {
  VAR_9 = VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2(FUNC_10(VAR_1->context->device), &VAR_6, VAR_2, VAR_3->cqe_size);
 if (VAR_9)
  goto out;

 VAR_7 = VAR_1->cqe;
 VAR_4.buf_addr = (uintptr_t) VAR_6.buf;

 VAR_9 = FUNC_1(VAR_1, VAR_2 - 1, &VAR_4.ibv_cmd, sizeof VAR_4,
    &VAR_5, sizeof VAR_5);
 if (VAR_9) {
  FUNC_4(&VAR_6);
  goto out;
 }

 FUNC_3(VAR_3, VAR_6.buf, VAR_7);

 FUNC_4(&VAR_3->buf);
 VAR_3->buf = VAR_6;
 FUNC_6(VAR_3);

out:
 FUNC_8(&VAR_3->lock);
 return VAR_9;
}
