
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rsocket {int opts; int rq_size; scalar_t__ sq_inline; TYPE_4__* cm_id; int sq_size; } ;
struct TYPE_8__ {int max_recv_wr; int max_send_sge; int max_recv_sge; scalar_t__ max_inline_data; int max_send_wr; } ;
struct ibv_qp_init_attr {int sq_sig_all; TYPE_3__ cap; int qp_type; int recv_cq; int send_cq; struct rsocket* qp_context; } ;
struct TYPE_9__ {int recv_cq; int send_cq; TYPE_2__* verbs; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_6__ {scalar_t__ transport_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ibv_qp_init_attr*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int *,struct ibv_qp_init_attr*) ;
 int FUNC_3 (struct rsocket*,TYPE_4__*) ;
 int FUNC_4 (struct rsocket*) ;
 int FUNC_5 (struct rsocket*) ;
 int FUNC_6 (struct rsocket*) ;

__attribute__((used)) static int FUNC_7(struct rsocket *VAR_5)
{
 struct ibv_qp_init_attr VAR_6;
 int VAR_7, VAR_8;

 FUNC_6(VAR_5);
 if (VAR_5->cm_id->verbs->device->transport_type == VAR_2)
  VAR_5->opts |= VAR_4;
 VAR_8 = FUNC_3(VAR_5, VAR_5->cm_id);
 if (VAR_8)
  return VAR_8;

 FUNC_1(&VAR_6, 0, sizeof VAR_6);
 VAR_6.qp_context = VAR_5;
 VAR_6.send_cq = VAR_5->cm_id->send_cq;
 VAR_6.recv_cq = VAR_5->cm_id->recv_cq;
 VAR_6.qp_type = VAR_1;
 VAR_6.sq_sig_all = 1;
 VAR_6.cap.max_send_wr = VAR_5->sq_size;
 VAR_6.cap.max_recv_wr = VAR_5->rq_size;
 VAR_6.cap.max_send_sge = 2;
 VAR_6.cap.max_recv_sge = 1;
 VAR_6.cap.max_inline_data = VAR_5->sq_inline;

 VAR_8 = FUNC_2(VAR_5->cm_id, ((void*)0), &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_5->sq_inline = VAR_6.cap.max_inline_data;
 if ((VAR_5->opts & VAR_4) && (VAR_5->sq_inline < VAR_3))
  return FUNC_0(VAR_0);

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->rq_size; VAR_7++) {
  VAR_8 = FUNC_5(VAR_5);
  if (VAR_8)
   return VAR_8;
 }
 return 0;
}
