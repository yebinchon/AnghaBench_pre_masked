
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_pd {int pd_id; } ;
struct TYPE_2__ {int itid; int local_read; int local_write; int remote_read; int remote_write; int remote_atomic; int dma_mr; int key; int pd; int tid_type; } ;
struct ib_mr {int lkey; int rkey; } ;
struct qlnxr_mr {TYPE_1__ hw_mr; struct ib_mr ibmr; int type; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct ib_pd {int device; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 struct qlnxr_dev* FUNC_5 (int ) ;
 struct qlnxr_pd* FUNC_6 (struct ib_pd*) ;
 int FUNC_7 (struct qlnxr_mr*) ;
 struct qlnxr_mr* FUNC_8 (int,int ) ;

struct ib_mr *
FUNC_9(struct ib_pd *VAR_9, int VAR_10)
{
 struct qlnxr_mr *VAR_11;
 struct qlnxr_dev *VAR_12 = FUNC_5((VAR_9->device));
 struct qlnxr_pd *VAR_13 = FUNC_6(VAR_9);
 int VAR_14;
 qlnx_host_t *VAR_15;

 VAR_15 = VAR_12->ha;

 FUNC_1(VAR_15, "enter\n");

 if (VAR_10 & VAR_4) {
  FUNC_1(VAR_15, "Unsupported access flags received for dma mr\n");
 }

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  FUNC_1(VAR_15, "kzalloc(mr) failed %d\n", VAR_14);
  goto err0;
 }

 VAR_11->type = VAR_8;

 VAR_14 = FUNC_2(VAR_12->rdma_ctx, &VAR_11->hw_mr.itid);
 if (VAR_14) {
  FUNC_1(VAR_15, "ecore_rdma_alloc_tid failed %d\n", VAR_14);
  goto err1;
 }


 VAR_11->hw_mr.tid_type = VAR_0;
 VAR_11->hw_mr.pd = VAR_13->pd_id;
 VAR_11->hw_mr.local_read = 1;
 VAR_11->hw_mr.local_write = (VAR_10 & VAR_3) ? 1 : 0;
 VAR_11->hw_mr.remote_read = (VAR_10 & VAR_6) ? 1 : 0;
 VAR_11->hw_mr.remote_write = (VAR_10 & VAR_7) ? 1 : 0;
 VAR_11->hw_mr.remote_atomic = (VAR_10 & VAR_5) ? 1 : 0;
 VAR_11->hw_mr.dma_mr = 1;

 VAR_14 = FUNC_4(VAR_12->rdma_ctx, &VAR_11->hw_mr);
 if (VAR_14) {
  FUNC_1(VAR_15, "ecore_rdma_register_tid failed %d\n", VAR_14);
  goto err2;
 }

 VAR_11->ibmr.lkey = VAR_11->hw_mr.itid << 8 | VAR_11->hw_mr.key;

 if (VAR_11->hw_mr.remote_write || VAR_11->hw_mr.remote_read ||
  VAR_11->hw_mr.remote_atomic) {
  VAR_11->ibmr.rkey = VAR_11->hw_mr.itid << 8 | VAR_11->hw_mr.key;
 }

 FUNC_1(VAR_15, "lkey = %x\n", VAR_11->ibmr.lkey);

 return &VAR_11->ibmr;

err2:
 FUNC_3(VAR_12->rdma_ctx, VAR_11->hw_mr.itid);
err1:
 FUNC_7(VAR_11);
err0:
 FUNC_1(VAR_15, "exit [%d]\n", VAR_14);

 return FUNC_0(VAR_14);
}
