
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int max_inline_data; int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct ibv_qp_init_attr {TYPE_5__ cap; TYPE_3__* srq; int qp_type; int sq_sig_all; TYPE_2__* recv_cq; TYPE_1__* send_cq; } ;
struct ibv_qp {TYPE_4__* context; int qp_num; int handle; } ;
struct ibv_pd {TYPE_4__* context; int handle; } ;
struct ibv_create_qp_resp_v4 {int dummy; } ;
struct ibv_create_qp_resp_v3 {int dummy; } ;
struct ibv_create_qp_resp {int max_inline_data; int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; int qpn; int qp_handle; } ;
struct ibv_create_qp {uintptr_t user_handle; int is_srq; scalar_t__ reserved; int qp_type; int sq_sig_all; int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; int srq_handle; int recv_cq_handle; int send_cq_handle; int pd_handle; } ;
struct TYPE_9__ {int cmd_fd; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_7__ {int handle; } ;
struct TYPE_6__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_create_qp*,size_t,int ,struct ibv_create_qp_resp*,size_t) ;
 int FUNC_1 (struct ibv_create_qp_resp*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,void*,size_t) ;
 size_t FUNC_3 (int ,struct ibv_create_qp*,size_t) ;

int FUNC_4(struct ibv_pd *VAR_3,
        struct ibv_qp *VAR_4, struct ibv_qp_init_attr *VAR_5,
        struct ibv_create_qp *VAR_6, size_t VAR_7,
        struct ibv_create_qp_resp *VAR_8, size_t VAR_9)
{
 FUNC_0(VAR_6, VAR_7, VAR_0, VAR_8, VAR_9);

 VAR_6->user_handle = (uintptr_t) VAR_4;
 VAR_6->pd_handle = VAR_3->handle;
 VAR_6->send_cq_handle = VAR_5->send_cq->handle;
 VAR_6->recv_cq_handle = VAR_5->recv_cq->handle;
 VAR_6->srq_handle = VAR_5->srq ? VAR_5->srq->handle : 0;
 VAR_6->max_send_wr = VAR_5->cap.max_send_wr;
 VAR_6->max_recv_wr = VAR_5->cap.max_recv_wr;
 VAR_6->max_send_sge = VAR_5->cap.max_send_sge;
 VAR_6->max_recv_sge = VAR_5->cap.max_recv_sge;
 VAR_6->max_inline_data = VAR_5->cap.max_inline_data;
 VAR_6->sq_sig_all = VAR_5->sq_sig_all;
 VAR_6->qp_type = VAR_5->qp_type;
 VAR_6->is_srq = !!VAR_5->srq;
 VAR_6->reserved = 0;

 if (FUNC_3(VAR_3->context->cmd_fd, VAR_6, VAR_7) != VAR_7)
  return VAR_2;

 (void) FUNC_1(VAR_8, VAR_9);

 VAR_4->handle = VAR_8->qp_handle;
 VAR_4->qp_num = VAR_8->qpn;
 VAR_4->context = VAR_3->context;

 if (VAR_1 > 3) {
  VAR_5->cap.max_recv_sge = VAR_8->max_recv_sge;
  VAR_5->cap.max_send_sge = VAR_8->max_send_sge;
  VAR_5->cap.max_recv_wr = VAR_8->max_recv_wr;
  VAR_5->cap.max_send_wr = VAR_8->max_send_wr;
  VAR_5->cap.max_inline_data = VAR_8->max_inline_data;
 }

 if (VAR_1 == 4) {
  struct ibv_create_qp_resp_v4 *VAR_10 =
   (struct ibv_create_qp_resp_v4 *) VAR_8;

  FUNC_2((void *) VAR_8 + sizeof *VAR_8,
   (void *) VAR_10 + sizeof *VAR_10,
   VAR_9 - sizeof *VAR_8);
 } else if (VAR_1 <= 3) {
  struct ibv_create_qp_resp_v3 *VAR_11 =
   (struct ibv_create_qp_resp_v3 *) VAR_8;

  FUNC_2((void *) VAR_8 + sizeof *VAR_8,
   (void *) VAR_11 + sizeof *VAR_11,
   VAR_9 - sizeof *VAR_8);
 }

 return 0;
}
