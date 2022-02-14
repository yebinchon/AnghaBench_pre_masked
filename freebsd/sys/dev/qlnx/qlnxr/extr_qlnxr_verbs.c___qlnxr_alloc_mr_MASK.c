
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_pd {int pd_id; } ;
struct TYPE_8__ {int itid; int key; int local_read; int mw_bind; int zbva; int phy_mr; int dma_mr; scalar_t__ vaddr; scalar_t__ length; scalar_t__ fbo; int pbl_page_size_log; int pbl_two_level; scalar_t__ pbl_ptr; scalar_t__ remote_atomic; scalar_t__ remote_write; scalar_t__ remote_read; scalar_t__ local_write; int pd; int tid_type; } ;
struct TYPE_6__ {int lkey; int rkey; } ;
struct TYPE_5__ {int pbl_size; int two_layered; } ;
struct TYPE_7__ {TYPE_1__ pbl_info; } ;
struct qlnxr_mr {TYPE_4__ hw_mr; TYPE_2__ ibmr; TYPE_3__ info; int type; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct ib_pd {int device; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct qlnxr_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 struct qlnxr_dev* FUNC_6 (int ) ;
 struct qlnxr_pd* FUNC_7 (struct ib_pd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qlnxr_mr*) ;
 struct qlnxr_mr* FUNC_10 (int,int ) ;
 int FUNC_11 (struct qlnxr_dev*,TYPE_3__*,int,int) ;

__attribute__((used)) static struct qlnxr_mr *
FUNC_12(struct ib_pd *VAR_4, int VAR_5)
{
 struct qlnxr_pd *VAR_6 = FUNC_7(VAR_4);
 struct qlnxr_dev *VAR_7 = FUNC_6((VAR_4->device));
 struct qlnxr_mr *VAR_8;
 int VAR_9 = -VAR_1;
 qlnx_host_t *VAR_10;

 VAR_10 = VAR_7->ha;

 FUNC_2(VAR_10, "enter ibpd = %p pd = %p "
  " pd_id = %d max_page_list_len = %d\n",
  VAR_4, VAR_6, VAR_6->pd_id, VAR_5);

 VAR_8 = FUNC_10(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_1(VAR_10, "kzalloc(mr) failed\n");
  return FUNC_0(VAR_9);
 }

 VAR_8->dev = VAR_7;
 VAR_8->type = VAR_3;

 VAR_9 = FUNC_11(VAR_7, &VAR_8->info, VAR_5,
      1 );
 if (VAR_9) {
  FUNC_1(VAR_10, "qlnxr_init_mr_info failed\n");
  goto err0;
 }

 VAR_9 = FUNC_3(VAR_7->rdma_ctx, &VAR_8->hw_mr.itid);
 if (VAR_9) {
  FUNC_1(VAR_10, "ecore_rdma_alloc_tid failed\n");
  goto err0;
 }


 VAR_8->hw_mr.tid_type = VAR_0;
 VAR_8->hw_mr.key = 0;
 VAR_8->hw_mr.pd = VAR_6->pd_id;
 VAR_8->hw_mr.local_read = 1;
 VAR_8->hw_mr.local_write = 0;
 VAR_8->hw_mr.remote_read = 0;
 VAR_8->hw_mr.remote_write = 0;
 VAR_8->hw_mr.remote_atomic = 0;
 VAR_8->hw_mr.mw_bind = 0;
 VAR_8->hw_mr.pbl_ptr = 0;
 VAR_8->hw_mr.pbl_two_level = VAR_8->info.pbl_info.two_layered;
 VAR_8->hw_mr.pbl_page_size_log = FUNC_8(VAR_8->info.pbl_info.pbl_size);
 VAR_8->hw_mr.fbo = 0;
 VAR_8->hw_mr.length = 0;
 VAR_8->hw_mr.vaddr = 0;
 VAR_8->hw_mr.zbva = 0;
 VAR_8->hw_mr.phy_mr = 1;
 VAR_8->hw_mr.dma_mr = 0;

 VAR_9 = FUNC_5(VAR_7->rdma_ctx, &VAR_8->hw_mr);
 if (VAR_9) {
  FUNC_1(VAR_10, "ecore_rdma_register_tid failed\n");
  goto err1;
 }

 VAR_8->ibmr.lkey = VAR_8->hw_mr.itid << 8 | VAR_8->hw_mr.key;
 VAR_8->ibmr.rkey = VAR_8->ibmr.lkey;

 FUNC_2(VAR_10, "exit mr = %p mr->ibmr.lkey = 0x%x\n",
  VAR_8, VAR_8->ibmr.lkey);

 return VAR_8;

err1:
 FUNC_4(VAR_7->rdma_ctx, VAR_8->hw_mr.itid);
err0:
 FUNC_9(VAR_8);

 FUNC_2(VAR_10, "exit\n");

 return FUNC_0(VAR_9);
}
