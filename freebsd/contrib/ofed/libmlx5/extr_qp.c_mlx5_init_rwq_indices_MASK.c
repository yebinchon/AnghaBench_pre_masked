
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; } ;
struct mlx5_rwq {TYPE_1__ rq; } ;



void FUNC_0(struct mlx5_rwq *VAR_0)
{
 VAR_0->rq.head = 0;
 VAR_0->rq.tail = 0;
}
