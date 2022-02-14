
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {struct cmatest_node* context; } ;
struct cmatest_node {struct rdma_cm_id* cma_id; } ;
struct TYPE_2__ {scalar_t__ conn_index; struct cmatest_node* nodes; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cmatest_node*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cmatest_node*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct rdma_cm_id*,int *) ;
 int FUNC_6 (struct rdma_cm_id*,int *,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_7(struct rdma_cm_id *VAR_3)
{
 struct cmatest_node *VAR_4;
 int VAR_5;

 if (VAR_2.conn_index == VAR_1) {
  VAR_5 = -VAR_0;
  goto err1;
 }
 VAR_4 = &VAR_2.nodes[VAR_2.conn_index++];

 VAR_4->cma_id = VAR_3;
 VAR_3->context = VAR_4;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto err2;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto err2;

 VAR_5 = FUNC_5(VAR_4->cma_id, ((void*)0));
 if (VAR_5) {
  FUNC_2("cmatose: failure accepting");
  goto err2;
 }
 return 0;

err2:
 VAR_4->cma_id = ((void*)0);
 FUNC_0();
err1:
 FUNC_4("cmatose: failing connection request\n");
 FUNC_6(VAR_3, ((void*)0), 0);
 return VAR_5;
}
