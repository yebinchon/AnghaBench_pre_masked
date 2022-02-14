
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_conn_param {int qp_num; } ;
struct rdma_cm_id {TYPE_1__* qp; struct cmatest_node* context; } ;
struct cmatest_node {int connected; struct rdma_cm_id* cma_id; } ;
struct TYPE_4__ {scalar_t__ conn_index; int connects_left; struct cmatest_node* nodes; } ;
struct TYPE_3__ {int qp_num; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cmatest_node*) ;
 int FUNC_2 (struct rdma_conn_param*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cmatest_node*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct rdma_cm_id*,struct rdma_conn_param*) ;
 int FUNC_7 (struct rdma_cm_id*,int *,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_8 (struct cmatest_node*) ;

__attribute__((used)) static int FUNC_9(struct rdma_cm_id *VAR_3)
{
 struct cmatest_node *VAR_4;
 struct rdma_conn_param VAR_5;
 int VAR_6;

 if (VAR_2.conn_index == VAR_1) {
  VAR_6 = -VAR_0;
  goto err1;
 }
 VAR_4 = &VAR_2.nodes[VAR_2.conn_index++];

 VAR_4->cma_id = VAR_3;
 VAR_3->context = VAR_4;

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  goto err2;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  goto err2;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto err2;

 FUNC_2(&VAR_5, 0, sizeof VAR_5);
 VAR_5.qp_num = VAR_4->cma_id->qp->qp_num;
 VAR_6 = FUNC_6(VAR_4->cma_id, &VAR_5);
 if (VAR_6) {
  FUNC_3("udaddy: failure accepting");
  goto err2;
 }
 VAR_4->connected = 1;
 VAR_2.connects_left--;
 return 0;

err2:
 VAR_4->cma_id = ((void*)0);
 FUNC_0();
err1:
 FUNC_5("udaddy: failing connection request\n");
 FUNC_7(VAR_3, ((void*)0), 0);
 return VAR_6;
}
