
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union socket_addr {int sa; } ;
struct rsocket {int rq_size; int epfd; int sq_inline; int sq_size; } ;
struct TYPE_8__ {int max_recv_wr; int max_send_sge; int max_recv_sge; int max_inline_data; int max_send_wr; } ;
struct ibv_qp_init_attr {int sq_sig_all; TYPE_1__ cap; int qp_type; int recv_cq; int send_cq; struct ds_qp* qp_context; } ;
struct TYPE_9__ {struct ds_qp* ptr; } ;
struct epoll_event {TYPE_2__ data; int events; } ;
struct ds_qp {TYPE_4__* cm_id; int hdr; struct rsocket* rs; } ;
typedef int socklen_t ;
struct TYPE_11__ {TYPE_3__* recv_cq_channel; int recv_cq; int send_cq; } ;
struct TYPE_10__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ds_qp* FUNC_1 (int,int) ;
 int FUNC_2 (struct ds_qp*,union socket_addr*,int ) ;
 int FUNC_3 (int *,union socket_addr*) ;
 int FUNC_4 (struct ds_qp*) ;
 int FUNC_5 (struct ds_qp*) ;
 int FUNC_6 (struct rsocket*,struct ds_qp*) ;
 int FUNC_7 (struct rsocket*,struct ds_qp*,int) ;
 int FUNC_8 (int ,int ,int ,struct epoll_event*) ;
 int FUNC_9 (struct ibv_qp_init_attr*,int ,int) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (int *,TYPE_4__**,struct ds_qp*,int ) ;
 int FUNC_12 (TYPE_4__*,int *,struct ibv_qp_init_attr*) ;
 int FUNC_13 (struct rsocket*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_14(struct rsocket *VAR_6, union socket_addr *VAR_7,
   socklen_t VAR_8, struct ds_qp **VAR_9)
{
 struct ds_qp *VAR_10;
 struct ibv_qp_init_attr VAR_11;
 struct epoll_event VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_1(1, sizeof(*VAR_10));
 if (!VAR_10)
  return FUNC_0(VAR_0);

 VAR_10->rs = VAR_6;
 VAR_14 = FUNC_11(((void*)0), &VAR_10->cm_id, VAR_10, VAR_4);
 if (VAR_14)
  goto err;

 FUNC_3(&VAR_10->hdr, VAR_7);
 VAR_14 = FUNC_10(VAR_10->cm_id, &VAR_7->sa);
 if (VAR_14)
  goto err;

 VAR_14 = FUNC_5(VAR_10);
 if (VAR_14)
  goto err;

 VAR_14 = FUNC_13(VAR_6, VAR_10->cm_id);
 if (VAR_14)
  goto err;

 FUNC_9(&VAR_11, 0, sizeof VAR_11);
 VAR_11.qp_context = VAR_10;
 VAR_11.send_cq = VAR_10->cm_id->send_cq;
 VAR_11.recv_cq = VAR_10->cm_id->recv_cq;
 VAR_11.qp_type = VAR_3;
 VAR_11.sq_sig_all = 1;
 VAR_11.cap.max_send_wr = VAR_6->sq_size;
 VAR_11.cap.max_recv_wr = VAR_6->rq_size;
 VAR_11.cap.max_send_sge = 1;
 VAR_11.cap.max_recv_sge = 2;
 VAR_11.cap.max_inline_data = VAR_6->sq_inline;
 VAR_14 = FUNC_12(VAR_10->cm_id, ((void*)0), &VAR_11);
 if (VAR_14)
  goto err;

 VAR_6->sq_inline = VAR_11.cap.max_inline_data;
 VAR_14 = FUNC_2(VAR_10, VAR_7, VAR_8);
 if (VAR_14)
  goto err;

 VAR_12.events = VAR_1;
 VAR_12.data.ptr = VAR_10;
 VAR_14 = FUNC_8(VAR_6->epfd, VAR_2,
   VAR_10->cm_id->recv_cq_channel->fd, &VAR_12);
 if (VAR_14)
  goto err;

 for (VAR_13 = 0; VAR_13 < VAR_6->rq_size; VAR_13++) {
  VAR_14 = FUNC_7(VAR_6, VAR_10, VAR_13 * VAR_5);
  if (VAR_14)
   goto err;
 }

 FUNC_6(VAR_6, VAR_10);
 *VAR_9 = VAR_10;
 return 0;
err:
 FUNC_4(VAR_10);
 return VAR_14;
}
