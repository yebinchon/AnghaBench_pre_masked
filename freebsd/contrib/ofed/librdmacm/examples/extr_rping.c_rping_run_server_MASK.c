
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {scalar_t__ state; int child_cm_id; int cqthread; int rq_wr; int qp; int sem; } ;
struct ibv_recv_wr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,struct ibv_recv_wr**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,struct rping_cb*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rping_cb*) ;
 int FUNC_8 (struct rping_cb*) ;
 int FUNC_9 (struct rping_cb*) ;
 int FUNC_10 (struct rping_cb*) ;
 int FUNC_11 (struct rping_cb*) ;
 int FUNC_12 (struct rping_cb*,int ) ;
 int FUNC_13 (struct rping_cb*) ;
 int FUNC_14 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_15(struct rping_cb *VAR_3)
{
 struct ibv_recv_wr *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_14(&VAR_3->sem);
 if (VAR_3->state != VAR_0) {
  FUNC_0(VAR_2, "wait for CONNECT_REQUEST state %d\n",
   VAR_3->state);
  return -1;
 }

 VAR_5 = FUNC_12(VAR_3, VAR_3->child_cm_id);
 if (VAR_5) {
  FUNC_0(VAR_2, "setup_qp failed: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_11(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_2, "rping_setup_buffers failed: %d\n", VAR_5);
  goto err1;
 }

 VAR_5 = FUNC_1(VAR_3->qp, &VAR_3->rq_wr, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2, "ibv_post_recv failed: %d\n", VAR_5);
  goto err2;
 }

 VAR_5 = FUNC_3(&VAR_3->cqthread, ((void*)0), VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_2("pthread_create");
  goto err2;
 }

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_2, "connect error %d\n", VAR_5);
  goto err2;
 }

 VAR_5 = FUNC_13(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_2, "rping server failed: %d\n", VAR_5);
  goto err3;
 }

 VAR_5 = 0;
err3:
 FUNC_6(VAR_3->child_cm_id);
 FUNC_4(VAR_3->cqthread, ((void*)0));
 FUNC_5(VAR_3->child_cm_id);
err2:
 FUNC_9(VAR_3);
err1:
 FUNC_10(VAR_3);

 return VAR_5;
}
