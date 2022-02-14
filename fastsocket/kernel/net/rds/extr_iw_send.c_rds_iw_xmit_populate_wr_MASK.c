
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int send_flags; int num_sge; int * next; int opcode; } ;
struct rds_iw_send_work {struct ib_sge* s_sge; TYPE_1__ s_wr; int * s_op; int s_queued; } ;
struct rds_iw_connection {unsigned int i_send_hdrs_dma; struct rds_iw_send_work* i_sends; } ;
struct rds_header {int dummy; } ;
struct ib_sge {unsigned long addr; unsigned int length; void* lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct ib_sge* FUNC_1 (struct rds_iw_connection*,struct ib_sge*) ;
 struct ib_sge* FUNC_2 (struct rds_iw_connection*,struct ib_sge*) ;
 void* FUNC_3 (struct rds_iw_connection*) ;

__attribute__((used)) static inline void
FUNC_4(struct rds_iw_connection *VAR_2,
  struct rds_iw_send_work *VAR_3, unsigned int VAR_4,
  unsigned long VAR_5, unsigned int VAR_6,
  int VAR_7)
{
 struct ib_sge *VAR_8;

 FUNC_0(VAR_4 != VAR_3 - VAR_2->i_sends);

 VAR_3->s_wr.send_flags = VAR_7;
 VAR_3->s_wr.opcode = VAR_0;
 VAR_3->s_wr.num_sge = 2;
 VAR_3->s_wr.next = ((void*)0);
 VAR_3->s_queued = VAR_1;
 VAR_3->s_op = ((void*)0);

 if (VAR_6 != 0) {
  VAR_8 = FUNC_1(VAR_2, VAR_3->s_sge);
  VAR_8->addr = VAR_5;
  VAR_8->length = VAR_6;
  VAR_8->lkey = FUNC_3(VAR_2);

  VAR_8 = FUNC_2(VAR_2, VAR_3->s_sge);
 } else {


  VAR_3->s_wr.num_sge = 1;
  VAR_8 = &VAR_3->s_sge[0];
 }

 VAR_8->addr = VAR_2->i_send_hdrs_dma + (VAR_4 * sizeof(struct rds_header));
 VAR_8->length = sizeof(struct rds_header);
 VAR_8->lkey = FUNC_3(VAR_2);
}
