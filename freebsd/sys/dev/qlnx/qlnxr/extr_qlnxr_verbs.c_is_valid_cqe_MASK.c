
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_requester {int flags; } ;
union rdma_cqe {struct rdma_cqe_requester req; } ;
struct qlnxr_cq {int pbl_toggle; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct qlnxr_cq *VAR_1, union rdma_cqe *VAR_2)
{
 struct rdma_cqe_requester *VAR_3 = &VAR_2->req;
 return (VAR_3->flags & VAR_0) ==
   VAR_1->pbl_toggle;
}
