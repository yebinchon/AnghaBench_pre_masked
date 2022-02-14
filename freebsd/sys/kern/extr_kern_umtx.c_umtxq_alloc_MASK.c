
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umtxq_queue {int dummy; } ;
struct umtx_q {int uq_inherited_pri; int uq_pi_contested; TYPE_1__* uq_spare_queue; } ;
struct TYPE_2__ {int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ,int) ;

struct umtx_q *
FUNC_2(void)
{
 struct umtx_q *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct umtx_q), VAR_0, VAR_1 | VAR_2);
 VAR_4->uq_spare_queue = FUNC_1(sizeof(struct umtxq_queue), VAR_0,
     VAR_1 | VAR_2);
 FUNC_0(&VAR_4->uq_spare_queue->head);
 FUNC_0(&VAR_4->uq_pi_contested);
 VAR_4->uq_inherited_pri = VAR_3;
 return (VAR_4);
}
