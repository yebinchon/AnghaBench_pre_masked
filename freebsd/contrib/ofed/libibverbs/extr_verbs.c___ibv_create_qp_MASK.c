
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_qp_init_attr {int qp_type; int srq; int recv_cq; int send_cq; int qp_context; } ;
struct ibv_qp {int cond; int mutex; scalar_t__ events_completed; int state; int qp_type; int srq; int recv_cq; int send_cq; struct ibv_pd* pd; int qp_context; TYPE_2__* context; } ;
struct ibv_pd {TYPE_2__* context; } ;
struct TYPE_3__ {struct ibv_qp* (* create_qp ) (struct ibv_pd*,struct ibv_qp_init_attr*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct ibv_qp* FUNC_2 (struct ibv_pd*,struct ibv_qp_init_attr*) ;

struct ibv_qp *FUNC_3(struct ibv_pd *VAR_1,
          struct ibv_qp_init_attr *VAR_2)
{
 struct ibv_qp *VAR_3 = VAR_1->context->ops.create_qp(VAR_1, VAR_2);

 if (VAR_3) {
  VAR_3->context = VAR_1->context;
  VAR_3->qp_context = VAR_2->qp_context;
  VAR_3->pd = VAR_1;
  VAR_3->send_cq = VAR_2->send_cq;
  VAR_3->recv_cq = VAR_2->recv_cq;
  VAR_3->srq = VAR_2->srq;
  VAR_3->qp_type = VAR_2->qp_type;
  VAR_3->state = VAR_0;
  VAR_3->events_completed = 0;
  FUNC_1(&VAR_3->mutex, ((void*)0));
  FUNC_0(&VAR_3->cond, ((void*)0));
 }

 return VAR_3;
}
