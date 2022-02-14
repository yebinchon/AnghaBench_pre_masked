
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsocket {scalar_t__ cq_armed; int epfd; } ;
struct ibv_cq {int dummy; } ;
struct TYPE_3__ {struct ds_qp* ptr; } ;
struct epoll_event {TYPE_1__ data; } ;
struct ds_qp {scalar_t__ cq_armed; TYPE_2__* cm_id; } ;
struct TYPE_4__ {int recv_cq; int recv_cq_channel; } ;


 int FUNC_0 (int ,struct epoll_event*,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct ibv_cq**,void**) ;

__attribute__((used)) static int FUNC_3(struct rsocket *VAR_0)
{
 struct epoll_event VAR_1;
 struct ds_qp *VAR_2;
 struct ibv_cq *VAR_3;
 void *VAR_4;
 int VAR_5;

 if (!VAR_0->cq_armed)
  return 0;

 VAR_5 = FUNC_0(VAR_0->epfd, &VAR_1, 1, -1);
 if (VAR_5 <= 0)
  return VAR_5;

 VAR_2 = VAR_1.data.ptr;
 VAR_5 = FUNC_2(VAR_2->cm_id->recv_cq_channel, &VAR_3, &VAR_4);
 if (!VAR_5) {
  FUNC_1(VAR_2->cm_id->recv_cq, 1);
  VAR_2->cq_armed = 0;
  VAR_0->cq_armed = 0;
 }

 return VAR_5;
}
