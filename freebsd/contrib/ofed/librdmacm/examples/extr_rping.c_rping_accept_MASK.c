
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {scalar_t__ state; int sem; int child_cm_id; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct rping_cb *VAR_2)
{
 int VAR_3;

 FUNC_0("accepting client connection request\n");

 VAR_3 = FUNC_3(VAR_2->child_cm_id, ((void*)0));
 if (VAR_3) {
  FUNC_2("rdma_accept");
  return VAR_3;
 }

 FUNC_4(&VAR_2->sem);
 if (VAR_2->state == VAR_0) {
  FUNC_1(VAR_1, "wait for CONNECTED state %ld\n", VAR_2->state);
  return -1;
 }
 return 0;
}
