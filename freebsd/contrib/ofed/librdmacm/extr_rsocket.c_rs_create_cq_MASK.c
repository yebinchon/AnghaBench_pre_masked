
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rsocket {int fd_flags; scalar_t__ rq_size; scalar_t__ sq_size; } ;
struct rdma_cm_id {TYPE_1__* recv_cq_channel; int * recv_cq; int * send_cq; TYPE_1__* send_cq_channel; int verbs; } ;
struct TYPE_4__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int * FUNC_2 (int ,scalar_t__,struct rdma_cm_id*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct rsocket *VAR_2, struct rdma_cm_id *VAR_3)
{
 VAR_3->recv_cq_channel = FUNC_1(VAR_3->verbs);
 if (!VAR_3->recv_cq_channel)
  return -1;

 VAR_3->recv_cq = FUNC_2(VAR_3->verbs, VAR_2->sq_size + VAR_2->rq_size,
           VAR_3, VAR_3->recv_cq_channel, 0);
 if (!VAR_3->recv_cq)
  goto err1;

 if (VAR_2->fd_flags & VAR_1) {
  if (FUNC_0(VAR_3->recv_cq_channel->fd, VAR_0, VAR_1))
   goto err2;
 }

 FUNC_5(VAR_3->recv_cq, 0);
 VAR_3->send_cq_channel = VAR_3->recv_cq_channel;
 VAR_3->send_cq = VAR_3->recv_cq;
 return 0;

err2:
 FUNC_4(VAR_3->recv_cq);
 VAR_3->recv_cq = ((void*)0);
err1:
 FUNC_3(VAR_3->recv_cq_channel);
 VAR_3->recv_cq_channel = ((void*)0);
 return -1;
}
