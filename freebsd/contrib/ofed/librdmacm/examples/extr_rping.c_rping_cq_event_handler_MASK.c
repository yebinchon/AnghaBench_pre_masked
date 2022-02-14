
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int sem; int state; int rq_wr; int qp; int server; int cq; } ;
struct ibv_wc {scalar_t__ status; int opcode; } ;
struct ibv_recv_wr {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rping_cb*,struct ibv_wc*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,struct ibv_wc*) ;
 int FUNC_4 (int ,int *,struct ibv_recv_wr**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rping_cb*,struct ibv_wc*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct rping_cb *VAR_5)
{
 struct ibv_wc VAR_6;
 struct ibv_recv_wr *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 while ((VAR_8 = FUNC_3(VAR_5->cq, 1, &VAR_6)) == 1) {
  VAR_8 = 0;

  if (VAR_6.status) {
   if (VAR_6.status == VAR_1) {
    VAR_9 = 1;
    continue;

   }
   FUNC_2(VAR_4,
    "cq completion failed status %d\n",
    VAR_6.status);
   VAR_8 = -1;
   goto error;
  }

  switch (VAR_6.opcode) {
  case 128:
   FUNC_0("send completion\n");
   break;

  case 130:
   FUNC_0("rdma write completion\n");
   VAR_5->state = VAR_3;
   FUNC_5(&VAR_5->sem);
   break;

  case 131:
   FUNC_0("rdma read completion\n");
   VAR_5->state = VAR_2;
   FUNC_5(&VAR_5->sem);
   break;

  case 129:
   FUNC_0("recv completion\n");
   VAR_8 = VAR_5->server ? FUNC_6(VAR_5, &VAR_6) :
        FUNC_1(VAR_5, &VAR_6);
   if (VAR_8) {
    FUNC_2(VAR_4, "recv wc error: %d\n", VAR_8);
    goto error;
   }

   VAR_8 = FUNC_4(VAR_5->qp, &VAR_5->rq_wr, &VAR_7);
   if (VAR_8) {
    FUNC_2(VAR_4, "post recv error: %d\n", VAR_8);
    goto error;
   }
   FUNC_5(&VAR_5->sem);
   break;

  default:
   FUNC_0("unknown!!!!! completion\n");
   VAR_8 = -1;
   goto error;
  }
 }
 if (VAR_8) {
  FUNC_2(VAR_4, "poll error %d\n", VAR_8);
  goto error;
 }
 return VAR_9;

error:
 VAR_5->state = VAR_0;
 FUNC_5(&VAR_5->sem);
 return VAR_8;
}
