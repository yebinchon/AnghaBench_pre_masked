
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_cq {int cqe_sz; TYPE_1__* active_buf; } ;
struct TYPE_2__ {void* buf; } ;



__attribute__((used)) static void *FUNC_0(struct mlx5_cq *VAR_0, int VAR_1)
{
 return VAR_0->active_buf->buf + VAR_1 * VAR_0->cqe_sz;
}
