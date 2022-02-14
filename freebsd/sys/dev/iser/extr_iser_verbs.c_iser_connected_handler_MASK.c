
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {TYPE_1__* qp; struct iser_conn* context; } ;
struct iser_conn {int up_cv; int state; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_qp_attr {int dest_qp_num; } ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,struct ib_qp_attr*,int ,struct ib_qp_init_attr*) ;

__attribute__((used)) static void
FUNC_3(struct rdma_cm_id *VAR_1)
{
 struct iser_conn *VAR_2;
 struct ib_qp_attr VAR_3;
 struct ib_qp_init_attr VAR_4;

 VAR_2 = VAR_1->context;

 (void)FUNC_2(VAR_1->qp, &VAR_3, ~0, &VAR_4);

 FUNC_0("remote qpn:%x my qpn:%x",
    VAR_3.dest_qp_num, VAR_1->qp->qp_num);

 VAR_2->state = VAR_0;

 FUNC_1(&VAR_2->up_cv);
}
