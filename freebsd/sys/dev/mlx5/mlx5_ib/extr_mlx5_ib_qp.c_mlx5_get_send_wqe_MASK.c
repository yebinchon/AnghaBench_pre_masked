
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct mlx5_ib_qp {TYPE_1__ sq; } ;


 int VAR_0 ;
 void* FUNC_0 (struct mlx5_ib_qp*,scalar_t__) ;

void *FUNC_1(struct mlx5_ib_qp *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1, VAR_1->sq.offset + (VAR_2 << VAR_0));
}
