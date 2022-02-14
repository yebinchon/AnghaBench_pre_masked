
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_srq {struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct ib_srq_attr {int max_sge; int max_wr; int srq_limit; } ;
struct ib_srq {int dummy; } ;
struct ecore_rdma_device {int max_sge; int max_srq_wr; int max_srq; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct ecore_rdma_device* FUNC_1 (int ) ;
 struct qlnxr_srq* FUNC_2 (struct ib_srq*) ;

int
FUNC_3(struct ib_srq *VAR_1, struct ib_srq_attr *VAR_2)
{
 struct qlnxr_dev *VAR_3;
 struct qlnxr_srq *VAR_4;
 qlnx_host_t *VAR_5;
 struct ecore_rdma_device *VAR_6;
 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = VAR_4->dev;
 VAR_5 = VAR_3->ha;

 VAR_6 = FUNC_1(VAR_3->rdma_ctx);
 FUNC_0(VAR_5, "enter\n");

 if (!VAR_3->rdma_ctx) {
  FUNC_0(VAR_5, "called with invalid params"
   " rdma_ctx is NULL\n");
  return -VAR_0;
 }

 VAR_2->srq_limit = VAR_6->max_srq;
 VAR_2->max_wr = VAR_6->max_srq_wr;
 VAR_2->max_sge = VAR_6->max_sge;

 FUNC_0(VAR_5, "exit\n");
 return 0;
}
