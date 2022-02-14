
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wqe_shift; } ;
struct mlx4_ib_srq {TYPE_1__ msrq; int buf; } ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static void *FUNC_1(struct mlx4_ib_srq *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->buf, VAR_1 << VAR_0->msrq.wqe_shift);
}
