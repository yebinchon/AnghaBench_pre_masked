
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq {int cond; int mutex; scalar_t__ async_events_completed; scalar_t__ comp_events_completed; void* cq_context; struct ibv_comp_channel* channel; struct ibv_context* context; } ;
struct ibv_context {int mutex; } ;
struct ibv_comp_channel {int refcnt; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ibv_cq *VAR_0, struct ibv_context *VAR_1,
         struct ibv_comp_channel *VAR_2,
         void *VAR_3)
{
 VAR_0->context = VAR_1;
 VAR_0->channel = VAR_2;

 if (VAR_0->channel) {
  FUNC_2(&VAR_1->mutex);
  ++VAR_0->channel->refcnt;
  FUNC_3(&VAR_1->mutex);
 }

 VAR_0->cq_context = VAR_3;
 VAR_0->comp_events_completed = 0;
 VAR_0->async_events_completed = 0;
 FUNC_1(&VAR_0->mutex, ((void*)0));
 FUNC_0(&VAR_0->cond, ((void*)0));
}
