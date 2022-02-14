
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rsocket {scalar_t__ type; scalar_t__ index; int slock; int rlock; int cq_lock; int cq_wait_lock; int map_lock; TYPE_1__* cm_id; int unack_cqe; struct rsocket* target_buffer_list; scalar_t__ target_mr; struct rsocket* rbuf; scalar_t__ rmr; struct rsocket* sbuf; scalar_t__ smr; struct rsocket* rmsg; } ;
struct TYPE_3__ {int recv_cq; scalar_t__ qp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rsocket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rsocket*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct rsocket*) ;
 int FUNC_8 (struct rsocket*) ;

__attribute__((used)) static void FUNC_9(struct rsocket *VAR_1)
{
 if (VAR_1->type == VAR_0) {
  FUNC_0(VAR_1);
  return;
 }

 if (VAR_1->rmsg)
  FUNC_2(VAR_1->rmsg);

 if (VAR_1->sbuf) {
  if (VAR_1->smr)
   FUNC_4(VAR_1->smr);
  FUNC_2(VAR_1->sbuf);
 }

 if (VAR_1->rbuf) {
  if (VAR_1->rmr)
   FUNC_4(VAR_1->rmr);
  FUNC_2(VAR_1->rbuf);
 }

 if (VAR_1->target_buffer_list) {
  if (VAR_1->target_mr)
   FUNC_4(VAR_1->target_mr);
  FUNC_2(VAR_1->target_buffer_list);
 }

 if (VAR_1->cm_id) {
  FUNC_7(VAR_1);
  if (VAR_1->cm_id->qp) {
   FUNC_3(VAR_1->cm_id->recv_cq, VAR_1->unack_cqe);
   FUNC_6(VAR_1->cm_id);
  }
  FUNC_5(VAR_1->cm_id);
 }

 if (VAR_1->index >= 0)
  FUNC_8(VAR_1);

 FUNC_1(&VAR_1->map_lock);
 FUNC_1(&VAR_1->cq_wait_lock);
 FUNC_1(&VAR_1->cq_lock);
 FUNC_1(&VAR_1->rlock);
 FUNC_1(&VAR_1->slock);
 FUNC_2(VAR_1);
}
