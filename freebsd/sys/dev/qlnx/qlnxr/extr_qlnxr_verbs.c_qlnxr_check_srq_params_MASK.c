
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct TYPE_2__ {scalar_t__ max_wr; scalar_t__ max_sge; scalar_t__ srq_limit; } ;
struct ib_srq_init_attr {TYPE_1__ attr; } ;
struct ib_pd {int dummy; } ;
struct ecore_rdma_device {scalar_t__ max_srq_wqe; scalar_t__ max_sge; int max_srq_wr; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 struct ecore_rdma_device* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct ib_pd *VAR_1,
 struct qlnxr_dev *VAR_2,
 struct ib_srq_init_attr *VAR_3)
{
 struct ecore_rdma_device *VAR_4;
 qlnx_host_t *VAR_5;

 VAR_5 = VAR_2->ha;
 VAR_4 = FUNC_1(VAR_2->rdma_ctx);

 FUNC_0(VAR_5, "enter\n");

 if (VAR_3->attr.max_wr > VAR_4->max_srq_wqe) {
  FUNC_0(VAR_5, "unsupported srq_wr=0x%x"
   " requested (max_srq_wr=0x%x)\n",
   VAR_3->attr.max_wr, VAR_4->max_srq_wr);
  return -VAR_0;
 }

 if (VAR_3->attr.max_sge > VAR_4->max_sge) {
  FUNC_0(VAR_5,
   "unsupported sge=0x%x requested (max_srq_sge=0x%x)\n",
   VAR_3->attr.max_sge, VAR_4->max_sge);
  return -VAR_0;
 }

 if (VAR_3->attr.srq_limit > VAR_3->attr.max_wr) {
  FUNC_0(VAR_5,
         "unsupported srq_limit=0x%x requested"
   " (max_srq_limit=0x%x)\n",
   VAR_3->attr.srq_limit, VAR_3->attr.srq_limit);
  return -VAR_0;
 }

 FUNC_0(VAR_5, "exit\n");
 return 0;
}
