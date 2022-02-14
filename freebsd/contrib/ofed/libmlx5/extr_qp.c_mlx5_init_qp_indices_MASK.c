
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cur_post; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_3__ {scalar_t__ tail; scalar_t__ head; } ;
struct mlx5_qp {TYPE_2__ sq; TYPE_1__ rq; } ;



void FUNC_0(struct mlx5_qp *VAR_0)
{
 VAR_0->sq.head = 0;
 VAR_0->sq.tail = 0;
 VAR_0->rq.head = 0;
 VAR_0->rq.tail = 0;
 VAR_0->sq.cur_post = 0;
}
