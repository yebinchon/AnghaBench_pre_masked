
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {struct ds_qp* qp_list; } ;
struct ds_qp {int cq_armed; TYPE_1__* cm_id; } ;
struct TYPE_2__ {int recv_cq; } ;


 struct ds_qp* FUNC_0 (struct ds_qp*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rsocket *VAR_0)
{
 struct ds_qp *VAR_1;

 if (!(VAR_1 = VAR_0->qp_list))
  return;

 do {
  if (!VAR_1->cq_armed) {
   FUNC_1(VAR_1->cm_id->recv_cq, 0);
   VAR_1->cq_armed = 1;
  }
  VAR_1 = FUNC_0(VAR_1);
 } while (VAR_1 != VAR_0->qp_list);
}
