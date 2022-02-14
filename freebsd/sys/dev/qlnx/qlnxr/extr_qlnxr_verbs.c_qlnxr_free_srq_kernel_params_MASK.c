
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_srq_producers {int dummy; } ;
struct qlnxr_srq_hwq_info {int phy_prod_pair_addr; int virt_prod_pair_addr; int pbl; } ;
struct qlnxr_srq {struct qlnxr_dev* dev; struct qlnxr_srq_hwq_info hw_srq; } ;
struct qlnxr_dev {int cdev; int * ha; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_srq *VAR_0)
{
 struct qlnxr_srq_hwq_info *VAR_1 = &VAR_0->hw_srq;
 struct qlnxr_dev *VAR_2 = VAR_0->dev;
 qlnx_host_t *VAR_3;

 VAR_3 = VAR_2->ha;

 FUNC_0(VAR_3, "enter\n");

 FUNC_1(VAR_2->cdev, &VAR_1->pbl);

 FUNC_2(&VAR_2->cdev,
  VAR_1->virt_prod_pair_addr,
  VAR_1->phy_prod_pair_addr,
  sizeof(struct rdma_srq_producers));

 FUNC_0(VAR_3, "exit\n");

 return;
}
