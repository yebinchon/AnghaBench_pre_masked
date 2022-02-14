
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_conn_param {int responder_resources; int initiator_depth; int retry_count; int private_data_len; int private_data; } ;
struct cmatest_node {int cma_id; } ;
struct TYPE_4__ {TYPE_1__* rai; } ;
struct TYPE_3__ {int ai_connect_len; int ai_connect; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cmatest_node*) ;
 int FUNC_2 (struct rdma_conn_param*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cmatest_node*) ;
 int FUNC_5 (int ,struct rdma_conn_param*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_6(struct cmatest_node *VAR_1)
{
 struct rdma_conn_param VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto err;

 FUNC_2(&VAR_2, 0, sizeof VAR_2);
 VAR_2.responder_resources = 1;
 VAR_2.initiator_depth = 1;
 VAR_2.retry_count = 5;
 VAR_2.private_data = VAR_0.rai->ai_connect;
 VAR_2.private_data_len = VAR_0.rai->ai_connect_len;
 VAR_3 = FUNC_5(VAR_1->cma_id, &VAR_2);
 if (VAR_3) {
  FUNC_3("cmatose: failure connecting");
  goto err;
 }
 return 0;
err:
 FUNC_0();
 return VAR_3;
}
