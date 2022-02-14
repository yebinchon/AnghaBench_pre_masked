
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct ibv_qp_init_attr {int sq_sig_all; void* recv_cq; void* send_cq; int qp_type; struct cmatest_node* qp_context; TYPE_1__ cap; } ;
struct cmatest_node {int pd; TYPE_2__* cma_id; void** cq; } ;
struct TYPE_4__ {int verbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct cmatest_node*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int,struct cmatest_node*,int *,int ) ;
 int FUNC_3 (struct ibv_qp_init_attr*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*,int ,struct ibv_qp_init_attr*) ;

__attribute__((used)) static int FUNC_7(struct cmatest_node *VAR_5)
{
 struct ibv_qp_init_attr VAR_6;
 int VAR_7, VAR_8;

 VAR_5->pd = FUNC_1(VAR_5->cma_id->verbs);
 if (!VAR_5->pd) {
  VAR_8 = -VAR_0;
  FUNC_5("cmatose: unable to allocate PD\n");
  goto out;
 }

 VAR_7 = VAR_4 ? VAR_4 : 1;
 VAR_5->cq[VAR_3] = FUNC_2(VAR_5->cma_id->verbs, VAR_7, VAR_5, ((void*)0), 0);
 VAR_5->cq[VAR_2] = FUNC_2(VAR_5->cma_id->verbs, VAR_7, VAR_5, ((void*)0), 0);
 if (!VAR_5->cq[VAR_3] || !VAR_5->cq[VAR_2]) {
  VAR_8 = -VAR_0;
  FUNC_5("cmatose: unable to create CQ\n");
  goto out;
 }

 FUNC_3(&VAR_6, 0, sizeof VAR_6);
 VAR_6.cap.max_send_wr = VAR_7;
 VAR_6.cap.max_recv_wr = VAR_7;
 VAR_6.cap.max_send_sge = 1;
 VAR_6.cap.max_recv_sge = 1;
 VAR_6.qp_context = VAR_5;
 VAR_6.sq_sig_all = 1;
 VAR_6.qp_type = VAR_1;
 VAR_6.send_cq = VAR_5->cq[VAR_3];
 VAR_6.recv_cq = VAR_5->cq[VAR_2];
 VAR_8 = FUNC_6(VAR_5->cma_id, VAR_5->pd, &VAR_6);
 if (VAR_8) {
  FUNC_4("cmatose: unable to create QP");
  goto out;
 }

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8) {
  FUNC_5("cmatose: failed to create messages: %d\n", VAR_8);
  goto out;
 }
out:
 return VAR_8;
}
