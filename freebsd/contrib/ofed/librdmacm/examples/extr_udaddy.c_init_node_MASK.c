
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct ibv_qp_init_attr {int recv_cq; int send_cq; int qp_type; scalar_t__ sq_sig_all; struct cmatest_node* qp_context; TYPE_1__ cap; } ;
struct cmatest_node {int pd; TYPE_2__* cma_id; int cq; } ;
struct TYPE_4__ {int verbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmatest_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,struct cmatest_node*,int *,int ) ;
 int FUNC_3 (struct ibv_qp_init_attr*,int ,int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*,int ,struct ibv_qp_init_attr*) ;

__attribute__((used)) static int FUNC_7(struct cmatest_node *VAR_3)
{
 struct ibv_qp_init_attr VAR_4;
 int VAR_5, VAR_6;

 VAR_3->pd = FUNC_1(VAR_3->cma_id->verbs);
 if (!VAR_3->pd) {
  VAR_6 = -VAR_0;
  FUNC_5("udaddy: unable to allocate PD\n");
  goto out;
 }

 VAR_5 = VAR_2 ? VAR_2 * 2 : 2;
 VAR_3->cq = FUNC_2(VAR_3->cma_id->verbs, VAR_5, VAR_3, ((void*)0), 0);
 if (!VAR_3->cq) {
  VAR_6 = -VAR_0;
  FUNC_5("udaddy: unable to create CQ\n");
  goto out;
 }

 FUNC_3(&VAR_4, 0, sizeof VAR_4);
 VAR_4.cap.max_send_wr = VAR_2 ? VAR_2 : 1;
 VAR_4.cap.max_recv_wr = VAR_2 ? VAR_2 : 1;
 VAR_4.cap.max_send_sge = 1;
 VAR_4.cap.max_recv_sge = 1;
 VAR_4.qp_context = VAR_3;
 VAR_4.sq_sig_all = 0;
 VAR_4.qp_type = VAR_1;
 VAR_4.send_cq = VAR_3->cq;
 VAR_4.recv_cq = VAR_3->cq;
 VAR_6 = FUNC_6(VAR_3->cma_id, VAR_3->pd, &VAR_4);
 if (VAR_6) {
  FUNC_4("udaddy: unable to create QP");
  goto out;
 }

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6) {
  FUNC_5("udaddy: failed to create messages: %d\n", VAR_6);
  goto out;
 }
out:
 return VAR_6;
}
