
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int opcode; } ;
struct rds_iw_send_work {scalar_t__ s_op; scalar_t__ s_rm; TYPE_1__ s_wr; int s_page_list; int s_mr; } ;
struct TYPE_4__ {scalar_t__ w_nr; } ;
struct rds_iw_connection {TYPE_2__ i_send_ring; struct rds_iw_send_work* i_sends; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rds_iw_connection*,scalar_t__) ;
 int FUNC_4 (struct rds_iw_connection*,struct rds_iw_send_work*,int ) ;

void FUNC_5(struct rds_iw_connection *VAR_1)
{
 struct rds_iw_send_work *VAR_2;
 u32 VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1->i_sends; VAR_3 < VAR_1->i_send_ring.w_nr; VAR_3++, VAR_2++) {
  FUNC_0(!VAR_2->s_mr);
  FUNC_1(VAR_2->s_mr);
  FUNC_0(!VAR_2->s_page_list);
  FUNC_2(VAR_2->s_page_list);
  if (VAR_2->s_wr.opcode == 0xdead)
   continue;
  if (VAR_2->s_rm)
   FUNC_4(VAR_1, VAR_2, VAR_0);
  if (VAR_2->s_op)
   FUNC_3(VAR_1, VAR_2->s_op);
 }
}
