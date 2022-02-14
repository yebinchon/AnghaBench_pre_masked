
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_responder {int dummy; } ;
struct qlnxr_qp {int dummy; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct qlnxr_cq*) ;
 int FUNC_2 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,struct ib_wc*,struct rdma_cqe_responder*) ;

__attribute__((used)) static int
FUNC_3(struct qlnxr_dev *VAR_0,
 struct qlnxr_qp *VAR_1,
 struct qlnxr_cq *VAR_2,
 int VAR_3,
 struct ib_wc *VAR_4,
 struct rdma_cqe_responder *VAR_5,
 int *VAR_6)
{
 int VAR_7;
 qlnx_host_t *VAR_8 = VAR_0->ha;

 FUNC_0(VAR_8, "enter\n");

 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
 FUNC_1(VAR_2);
 *VAR_6 |= 1;

 FUNC_0(VAR_8, "exit cnt = 0x%x\n", VAR_7);
 return VAR_7;
}
