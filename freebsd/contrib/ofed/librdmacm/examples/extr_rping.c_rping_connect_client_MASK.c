
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {scalar_t__ state; int sem; int cm_id; } ;
struct rdma_conn_param {int responder_resources; int initiator_depth; int retry_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct rdma_conn_param*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct rdma_conn_param*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct rping_cb *VAR_2)
{
 struct rdma_conn_param VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 0, sizeof VAR_3);
 VAR_3.responder_resources = 1;
 VAR_3.initiator_depth = 1;
 VAR_3.retry_count = 7;

 VAR_4 = FUNC_4(VAR_2->cm_id, &VAR_3);
 if (VAR_4) {
  FUNC_3("rdma_connect");
  return VAR_4;
 }

 FUNC_5(&VAR_2->sem);
 if (VAR_2->state != VAR_0) {
  FUNC_1(VAR_1, "wait for CONNECTED state %ld\n", VAR_2->state);
  return -1;
 }

 FUNC_0("rmda_connect successful\n");
 return 0;
}
