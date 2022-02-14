
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cqe_requester {int sq_cons; } ;
struct TYPE_2__ {scalar_t__ wqe_cons; } ;
struct qlnxr_qp {TYPE_1__ sq; } ;
struct qlnxr_cq {int dummy; } ;


 int FUNC_0 (struct qlnxr_cq*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct qlnxr_cq *VAR_0, struct qlnxr_qp *VAR_1,
 struct rdma_cqe_requester *VAR_2, int *VAR_3)
{
 if (FUNC_1(VAR_2->sq_cons) == VAR_1->sq.wqe_cons) {
  FUNC_0(VAR_0);
  *VAR_3 |= 1;
 }
}
