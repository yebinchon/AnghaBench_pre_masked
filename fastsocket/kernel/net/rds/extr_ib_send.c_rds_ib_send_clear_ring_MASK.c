
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int opcode; } ;
struct rds_ib_send_work {TYPE_2__ s_wr; scalar_t__ s_op; } ;
struct TYPE_3__ {scalar_t__ w_nr; } ;
struct rds_ib_connection {TYPE_1__ i_send_ring; struct rds_ib_send_work* i_sends; } ;


 int VAR_0 ;
 int FUNC_0 (struct rds_ib_connection*,struct rds_ib_send_work*,int ) ;

void FUNC_1(struct rds_ib_connection *VAR_1)
{
 struct rds_ib_send_work *VAR_2;
 u32 VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1->i_sends; VAR_3 < VAR_1->i_send_ring.w_nr; VAR_3++, VAR_2++) {
  if (VAR_2->s_op && VAR_2->s_wr.opcode != 0xdead)
   FUNC_0(VAR_1, VAR_2, VAR_0);
 }
}
