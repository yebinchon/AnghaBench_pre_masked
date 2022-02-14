
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cqe {int dummy; } ;
struct TYPE_2__ {struct mlx4_cqe* buf; } ;
struct mlx4_cq {int cqe_size; TYPE_1__ buf; } ;



__attribute__((used)) static struct mlx4_cqe *FUNC_0(struct mlx4_cq *VAR_0, int VAR_1)
{
 return VAR_0->buf.buf + VAR_1 * VAR_0->cqe_size;
}
