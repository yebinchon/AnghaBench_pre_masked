
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int cqthread; int child_cm_id; int rq_wr; int qp; } ;
struct ibv_recv_wr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rping_cb*) ;
 int FUNC_2 (int ,int *,struct ibv_recv_wr**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ,struct rping_cb*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rping_cb*) ;
 int FUNC_10 (struct rping_cb*) ;
 int FUNC_11 (struct rping_cb*) ;
 int FUNC_12 (struct rping_cb*) ;
 int FUNC_13 (struct rping_cb*,int ) ;
 int FUNC_14 (struct rping_cb*) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_15(void *VAR_2)
{
 struct rping_cb *VAR_3 = VAR_2;
 struct ibv_recv_wr *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_13(VAR_3, VAR_3->child_cm_id);
 if (VAR_5) {
  FUNC_0(VAR_1, "setup_qp failed: %d\n", VAR_5);
  goto err0;
 }

 VAR_5 = FUNC_12(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_1, "rping_setup_buffers failed: %d\n", VAR_5);
  goto err1;
 }

 VAR_5 = FUNC_2(VAR_3->qp, &VAR_3->rq_wr, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_1, "ibv_post_recv failed: %d\n", VAR_5);
  goto err2;
 }

 VAR_5 = FUNC_5(&VAR_3->cqthread, ((void*)0), VAR_0, VAR_3);
 if (VAR_5) {
  FUNC_3("pthread_create");
  goto err2;
 }

 VAR_5 = FUNC_9(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_1, "connect error %d\n", VAR_5);
  goto err3;
 }

 FUNC_14(VAR_3);
 FUNC_8(VAR_3->child_cm_id);
 FUNC_6(VAR_3->cqthread, ((void*)0));
 FUNC_10(VAR_3);
 FUNC_11(VAR_3);
 FUNC_7(VAR_3->child_cm_id);
 FUNC_1(VAR_3);
 return ((void*)0);
err3:
 FUNC_4(VAR_3->cqthread);
 FUNC_6(VAR_3->cqthread, ((void*)0));
err2:
 FUNC_10(VAR_3);
err1:
 FUNC_11(VAR_3);
err0:
 FUNC_1(VAR_3);
 return ((void*)0);
}
