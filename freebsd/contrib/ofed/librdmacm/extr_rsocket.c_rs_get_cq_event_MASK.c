
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {scalar_t__ unack_cqe; scalar_t__ sq_size; scalar_t__ rq_size; int state; scalar_t__ cq_armed; TYPE_1__* cm_id; } ;
struct ibv_cq {int dummy; } ;
struct TYPE_2__ {int recv_cq; int recv_cq_channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,struct ibv_cq**,void**) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_4)
{
 struct ibv_cq *VAR_5;
 void *VAR_6;
 int VAR_7;

 if (!VAR_4->cq_armed)
  return 0;

 VAR_7 = FUNC_1(VAR_4->cm_id->recv_cq_channel, &VAR_5, &VAR_6);
 if (!VAR_7) {
  if (++VAR_4->unack_cqe >= VAR_4->sq_size + VAR_4->rq_size) {
   FUNC_0(VAR_4->cm_id->recv_cq, VAR_4->unack_cqe);
   VAR_4->unack_cqe = 0;
  }
  VAR_4->cq_armed = 0;
 } else if (!(VAR_2 == VAR_0 || VAR_2 == VAR_1)) {
  VAR_4->state = VAR_3;
 }

 return VAR_7;
}
