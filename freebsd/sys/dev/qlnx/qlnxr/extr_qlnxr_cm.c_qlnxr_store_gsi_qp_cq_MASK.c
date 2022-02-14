
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_qp {int dummy; } ;
struct qlnxr_dev {int gsi_qp_created; int ha; struct qlnxr_qp* gsi_qp; void* gsi_rqcq; void* gsi_sqcq; } ;
struct ib_qp_init_attr {int recv_cq; int send_cq; } ;


 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ) ;

void
FUNC_2(struct qlnxr_dev *VAR_0,
  struct qlnxr_qp *VAR_1,
  struct ib_qp_init_attr *VAR_2)
{
 FUNC_0(VAR_0->ha, "enter\n");

 VAR_0->gsi_qp_created = 1;
 VAR_0->gsi_sqcq = FUNC_1((VAR_2->send_cq));
 VAR_0->gsi_rqcq = FUNC_1((VAR_2->recv_cq));
 VAR_0->gsi_qp = VAR_1;

 FUNC_0(VAR_0->ha, "exit\n");

 return;
}
