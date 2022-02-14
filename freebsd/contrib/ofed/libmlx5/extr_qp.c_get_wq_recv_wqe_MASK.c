
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wqe_shift; } ;
struct mlx5_rwq {void* pbuff; TYPE_1__ rq; } ;



__attribute__((used)) static void *FUNC_0(struct mlx5_rwq *VAR_0, int VAR_1)
{
 return VAR_0->pbuff + (VAR_1 << VAR_0->rq.wqe_shift);
}
