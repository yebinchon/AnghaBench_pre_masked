
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_wq {int mutex; int cond; int events_completed; } ;
struct ibv_srq {int mutex; int cond; int events_completed; } ;
struct ibv_qp {int mutex; int cond; int events_completed; } ;
struct ibv_cq {int mutex; int cond; int async_events_completed; } ;
struct TYPE_2__ {struct ibv_wq* wq; struct ibv_srq* srq; struct ibv_qp* qp; struct ibv_cq* cq; } ;
struct ibv_async_event {int event_type; TYPE_1__ element; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ibv_async_event *VAR_0)
{
 switch (VAR_0->event_type) {
 case 138:
 {
  struct ibv_cq *VAR_1 = VAR_0->element.cq;

  FUNC_1(&VAR_1->mutex);
  ++VAR_1->async_events_completed;
  FUNC_0(&VAR_1->cond);
  FUNC_2(&VAR_1->mutex);

  return;
 }

 case 134:
 case 132:
 case 135:
 case 139:
 case 131:
 case 137:
 case 136:
 case 133:
 {
  struct ibv_qp *VAR_2 = VAR_0->element.qp;

  FUNC_1(&VAR_2->mutex);
  ++VAR_2->events_completed;
  FUNC_0(&VAR_2->cond);
  FUNC_2(&VAR_2->mutex);

  return;
 }

 case 130:
 case 129:
 {
  struct ibv_srq *VAR_3 = VAR_0->element.srq;

  FUNC_1(&VAR_3->mutex);
  ++VAR_3->events_completed;
  FUNC_0(&VAR_3->cond);
  FUNC_2(&VAR_3->mutex);

  return;
 }

 case 128:
 {
  struct ibv_wq *VAR_4 = VAR_0->element.wq;

  FUNC_1(&VAR_4->mutex);
  ++VAR_4->events_completed;
  FUNC_0(&VAR_4->cond);
  FUNC_2(&VAR_4->mutex);

  return;
 }

 default:
  return;
 }
}
