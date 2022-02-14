
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* buf; } ;
struct mlx5_srq {int wqe_shift; TYPE_1__ buf; } ;



__attribute__((used)) static void *FUNC_0(struct mlx5_srq *VAR_0, int VAR_1)
{
 return VAR_0->buf.buf + (VAR_1 << VAR_0->wqe_shift);
}
