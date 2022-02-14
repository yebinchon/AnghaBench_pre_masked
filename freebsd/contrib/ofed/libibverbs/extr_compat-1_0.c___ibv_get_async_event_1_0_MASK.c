
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ibv_context_1_0 {int real_context; } ;
struct TYPE_7__ {TYPE_1__* srq; TYPE_4__* qp; TYPE_2__* cq; } ;
struct ibv_async_event {int event_type; TYPE_3__ element; } ;
struct TYPE_8__ {struct TYPE_8__* qp_context; } ;
struct TYPE_6__ {struct TYPE_6__* cq_context; } ;
struct TYPE_5__ {struct TYPE_5__* srq_context; } ;
 int FUNC_0 (int ,struct ibv_async_event*) ;

int FUNC_1(struct ibv_context_1_0 *VAR_0,
         struct ibv_async_event *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->real_context, VAR_1);
 if (VAR_2)
  return VAR_2;

 switch (VAR_1->event_type) {
 case 137:
  VAR_1->element.cq = VAR_1->element.cq->cq_context;
  break;

 case 133:
 case 131:
 case 134:
 case 138:
 case 130:
 case 136:
 case 135:
 case 132:
  VAR_1->element.qp = VAR_1->element.qp->qp_context;
  break;

 case 129:
 case 128:
  VAR_1->element.srq = VAR_1->element.srq->srq_context;
  break;

 default:
  break;
 }

 return VAR_2;
}
