
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rping_cb {TYPE_2__* cm_id; int qp; int pd; TYPE_2__* child_cm_id; scalar_t__ server; int cq; } ;
struct TYPE_3__ {int max_recv_wr; int max_recv_sge; int max_send_sge; int max_send_wr; } ;
struct ibv_qp_init_attr {int recv_cq; int send_cq; int qp_type; TYPE_1__ cap; } ;
typedef int init_attr ;
struct TYPE_4__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_qp_init_attr*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,struct ibv_qp_init_attr*) ;

__attribute__((used)) static int FUNC_2(struct rping_cb *VAR_2)
{
 struct ibv_qp_init_attr VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cap.max_send_wr = VAR_1;
 VAR_3.cap.max_recv_wr = 2;
 VAR_3.cap.max_recv_sge = 1;
 VAR_3.cap.max_send_sge = 1;
 VAR_3.qp_type = VAR_0;
 VAR_3.send_cq = VAR_2->cq;
 VAR_3.recv_cq = VAR_2->cq;

 if (VAR_2->server) {
  VAR_4 = FUNC_1(VAR_2->child_cm_id, VAR_2->pd, &VAR_3);
  if (!VAR_4)
   VAR_2->qp = VAR_2->child_cm_id->qp;
 } else {
  VAR_4 = FUNC_1(VAR_2->cm_id, VAR_2->pd, &VAR_3);
  if (!VAR_4)
   VAR_2->qp = VAR_2->cm_id->qp;
 }

 return VAR_4;
}
