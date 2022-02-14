
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int cqthread; int cm_id; int rq_wr; int qp; } ;
struct ibv_recv_wr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,struct ibv_recv_wr**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,struct rping_cb*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rping_cb*) ;
 int FUNC_7 (struct rping_cb*) ;
 int FUNC_8 (struct rping_cb*) ;
 int FUNC_9 (struct rping_cb*) ;
 int FUNC_10 (struct rping_cb*) ;
 int FUNC_11 (struct rping_cb*,int ) ;
 int FUNC_12 (struct rping_cb*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_13(struct rping_cb *VAR_2)
{
 struct ibv_recv_wr *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_11(VAR_2, VAR_2->cm_id);
 if (VAR_4) {
  FUNC_0(VAR_1, "setup_qp failed: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_10(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_1, "rping_setup_buffers failed: %d\n", VAR_4);
  goto err1;
 }

 VAR_4 = FUNC_1(VAR_2->qp, &VAR_2->rq_wr, &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_1, "ibv_post_recv failed: %d\n", VAR_4);
  goto err2;
 }

 VAR_4 = FUNC_3(&VAR_2->cqthread, ((void*)0), VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_2("pthread_create");
  goto err2;
 }

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_1, "connect error %d\n", VAR_4);
  goto err3;
 }

 VAR_4 = FUNC_12(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_1, "rping client failed: %d\n", VAR_4);
  goto err4;
 }

 VAR_4 = 0;
err4:
 FUNC_5(VAR_2->cm_id);
err3:
 FUNC_4(VAR_2->cqthread, ((void*)0));
err2:
 FUNC_8(VAR_2);
err1:
 FUNC_9(VAR_2);

 return VAR_4;
}
