
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {size_t rmsg_tail; int rq_size; struct ds_qp* qp_list; scalar_t__ sqe_avail; scalar_t__ rqe_avail; struct ds_smsg* smsg_free; scalar_t__ sbuf; struct ds_rmsg* dmsg; } ;
struct ibv_wc {scalar_t__ status; int wr_id; scalar_t__ byte_len; } ;
struct ibv_grh {int dummy; } ;
struct ds_smsg {struct ds_smsg* next; } ;
struct ds_rmsg {scalar_t__ length; scalar_t__ offset; struct ds_qp* qp; } ;
struct ds_qp {TYPE_1__* cm_id; } ;
struct TYPE_2__ {int recv_cq; } ;


 scalar_t__ VAR_0 ;
 struct ds_qp* FUNC_0 (struct ds_qp*) ;
 int FUNC_1 (struct rsocket*,struct ds_qp*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ds_qp*,struct ibv_wc*) ;
 int FUNC_3 (int ,int,struct ibv_wc*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rsocket *VAR_1)
{
 struct ds_qp *VAR_2;
 struct ds_smsg *VAR_3;
 struct ds_rmsg *VAR_4;
 struct ibv_wc VAR_5;
 int VAR_6, VAR_7;

 if (!(VAR_2 = VAR_1->qp_list))
  return;

 do {
  VAR_7 = 0;
  do {
   VAR_6 = FUNC_3(VAR_2->cm_id->recv_cq, 1, &VAR_5);
   if (VAR_6 <= 0) {
    VAR_2 = FUNC_0(VAR_2);
    continue;
   }

   if (FUNC_5(VAR_5.wr_id)) {
    if (VAR_1->rqe_avail && VAR_5.status == VAR_0 &&
        FUNC_2(VAR_2, &VAR_5)) {
     VAR_1->rqe_avail--;
     VAR_4 = &VAR_1->dmsg[VAR_1->rmsg_tail];
     VAR_4->qp = VAR_2;
     VAR_4->offset = FUNC_4(VAR_5.wr_id);
     VAR_4->length = VAR_5.byte_len - sizeof(struct ibv_grh);
     if (++VAR_1->rmsg_tail == VAR_1->rq_size + 1)
      VAR_1->rmsg_tail = 0;
    } else {
     FUNC_1(VAR_1, VAR_2, FUNC_4(VAR_5.wr_id));
    }
   } else {
    VAR_3 = (struct ds_smsg *) (VAR_1->sbuf + FUNC_4(VAR_5.wr_id));
    VAR_3->next = VAR_1->smsg_free;
    VAR_1->smsg_free = VAR_3;
    VAR_1->sqe_avail++;
   }

   VAR_2 = FUNC_0(VAR_2);
   if (!VAR_1->rqe_avail && VAR_1->sqe_avail) {
    VAR_1->qp_list = VAR_2;
    return;
   }
   VAR_7++;
  } while (VAR_2 != VAR_1->qp_list);
 } while (VAR_7);
}
