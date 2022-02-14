
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct qlnxr_qp {int q_lock; int sq; } ;
struct qlnxr_dev {TYPE_3__* ha; struct qlnxr_qp* gsi_qp; struct qlnxr_cq* gsi_sqcq; } ;
struct TYPE_5__ {int cq_context; int (* comp_handler ) (TYPE_2__*,int ) ;} ;
struct qlnxr_cq {TYPE_2__ ibcq; } ;
struct TYPE_4__ {int len; int baddr; int vaddr; } ;
struct ecore_roce_ll2_packet {TYPE_1__ header; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int cdev; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct ecore_roce_ll2_packet*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_2__*,int ) ;

void
FUNC_7(void *VAR_0,
  uint8_t VAR_1,
  void *VAR_2,
  dma_addr_t VAR_3,
  bool VAR_4,
  bool VAR_5)
{
 struct qlnxr_dev *VAR_6 = (struct qlnxr_dev *)VAR_0;
 struct ecore_roce_ll2_packet *VAR_7 = VAR_2;
 struct qlnxr_cq *VAR_8 = VAR_6->gsi_sqcq;
 struct qlnxr_qp *VAR_9 = VAR_6->gsi_qp;
 unsigned long VAR_10;

 FUNC_0(VAR_6->ha, "enter\n");

 FUNC_2(&VAR_6->ha->cdev, VAR_7->header.vaddr,
   VAR_7->header.baddr, VAR_7->header.len);
 FUNC_1(VAR_7);

 FUNC_4(&VAR_9->q_lock, VAR_10);

 FUNC_3(&VAR_9->sq);

 FUNC_5(&VAR_9->q_lock, VAR_10);

 if (VAR_8->ibcq.comp_handler)
  (*VAR_8->ibcq.comp_handler) (&VAR_8->ibcq, VAR_8->ibcq.cq_context);

 FUNC_0(VAR_6->ha, "exit\n");

 return;
}
