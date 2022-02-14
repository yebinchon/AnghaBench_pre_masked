
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_srq_init_attr {int srq_context; } ;
struct ibv_srq {int cond; int mutex; scalar_t__ events_completed; struct ibv_pd* pd; int srq_context; TYPE_2__* context; } ;
struct ibv_pd {TYPE_2__* context; } ;
struct TYPE_3__ {struct ibv_srq* (* create_srq ) (struct ibv_pd*,struct ibv_srq_init_attr*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct ibv_srq* FUNC_2 (struct ibv_pd*,struct ibv_srq_init_attr*) ;

struct ibv_srq *FUNC_3(struct ibv_pd *VAR_0,
     struct ibv_srq_init_attr *VAR_1)
{
 struct ibv_srq *VAR_2;

 if (!VAR_0->context->ops.create_srq)
  return ((void*)0);

 VAR_2 = VAR_0->context->ops.create_srq(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_2->context = VAR_0->context;
  VAR_2->srq_context = VAR_1->srq_context;
  VAR_2->pd = VAR_0;
  VAR_2->events_completed = 0;
  FUNC_1(&VAR_2->mutex, ((void*)0));
  FUNC_0(&VAR_2->cond, ((void*)0));
 }

 return VAR_2;
}
