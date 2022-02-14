
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int u64 ;
struct qlnxr_pd {int pd_id; } ;
struct TYPE_8__ {int pbl_size; int two_layered; } ;
struct TYPE_9__ {TYPE_1__* pbl_table; TYPE_2__ pbl_info; } ;
struct TYPE_10__ {int itid; int key; int local_read; int local_write; int remote_read; int remote_write; int remote_atomic; int mw_bind; int zbva; int phy_mr; int dma_mr; void* vaddr; void* length; scalar_t__ fbo; void* page_size_log; void* pbl_page_size_log; int pbl_two_level; int pbl_ptr; int pd; int tid_type; } ;
struct ib_mr {int lkey; int rkey; } ;
struct qlnxr_mr {TYPE_3__ info; TYPE_6__ hw_mr; struct ib_mr ibmr; int * iova_start; int type; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct ib_phys_buf {int dummy; } ;
struct ib_pd {int device; } ;
typedef int qlnx_host_t ;
struct TYPE_7__ {int pa; } ;


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
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 struct qlnxr_dev* FUNC_6 (int ) ;
 struct qlnxr_pd* FUNC_7 (struct ib_pd*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct qlnxr_mr*) ;
 struct qlnxr_mr* FUNC_10 (int,int ) ;
 int FUNC_11 (struct qlnxr_dev*,TYPE_2__*,TYPE_1__*) ;
 size_t FUNC_12 (int *,struct ib_phys_buf*,int) ;
 int FUNC_13 (struct qlnxr_dev*,TYPE_3__*,size_t,int) ;
 int FUNC_14 (struct qlnxr_dev*,struct ib_phys_buf*,int,TYPE_1__*,TYPE_2__*) ;
 int FUNC_15 (int *,struct ib_phys_buf*,int,void**) ;

struct ib_mr *
FUNC_16(struct ib_pd *VAR_9,
 struct ib_phys_buf *VAR_10,
 int VAR_11, int VAR_12, u64 *VAR_13)
{
 int VAR_14 = -VAR_1;
 struct qlnxr_dev *VAR_15 = FUNC_6((VAR_9->device));
 struct qlnxr_mr *VAR_16;
 struct qlnxr_pd *VAR_17;
 qlnx_host_t *VAR_18;
 size_t VAR_19 = 0;
 uint64_t VAR_20;

 VAR_18 = VAR_15->ha;

 FUNC_2(VAR_18, "enter\n");

 VAR_17 = FUNC_7(VAR_9);

 FUNC_2(VAR_18, "pd = %d buf_list = %p, buf_cnt = %d,"
  " iova_start = %p, acc = %d\n",
  VAR_17->pd_id, VAR_10, VAR_11, VAR_13, VAR_12);







 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_2);
 if (!VAR_16) {
  FUNC_1(VAR_18, "kzalloc(mr) failed\n");
  return FUNC_0(VAR_14);
 }

 VAR_16->type = VAR_8;
 VAR_16->iova_start = VAR_13;

 VAR_14 = FUNC_15(VAR_18, VAR_10, VAR_11, &VAR_20);
 if (VAR_14)
  goto err0;

 VAR_19 = FUNC_12(VAR_18, VAR_10, VAR_11);
 if (!VAR_19)
  goto err0;

 VAR_14 = FUNC_13(VAR_15, &VAR_16->info, VAR_19, 1);
 if (VAR_14) {
  FUNC_1(VAR_18,
   "qlnxr_init_mr_info failed [%d]\n", VAR_14);
  goto err1;
 }

 FUNC_14(VAR_15, VAR_10, VAR_11, VAR_16->info.pbl_table,
     &VAR_16->info.pbl_info);

 VAR_14 = FUNC_3(VAR_15->rdma_ctx, &VAR_16->hw_mr.itid);

 if (VAR_14) {
  FUNC_1(VAR_18, "roce alloc tid returned an error %d\n", VAR_14);
  goto err1;
 }


 VAR_16->hw_mr.tid_type = VAR_0;
 VAR_16->hw_mr.key = 0;
 VAR_16->hw_mr.pd = VAR_17->pd_id;
 VAR_16->hw_mr.local_read = 1;
 VAR_16->hw_mr.local_write = (VAR_12 & VAR_3) ? 1 : 0;
 VAR_16->hw_mr.remote_read = (VAR_12 & VAR_5) ? 1 : 0;
 VAR_16->hw_mr.remote_write = (VAR_12 & VAR_6) ? 1 : 0;
 VAR_16->hw_mr.remote_atomic = (VAR_12 & VAR_4) ? 1 : 0;
 VAR_16->hw_mr.mw_bind = 0;
 VAR_16->hw_mr.pbl_ptr = VAR_16->info.pbl_table[0].pa;
 VAR_16->hw_mr.pbl_two_level = VAR_16->info.pbl_info.two_layered;
 VAR_16->hw_mr.pbl_page_size_log = FUNC_8(VAR_16->info.pbl_info.pbl_size);
 VAR_16->hw_mr.page_size_log = FUNC_8(VAR_7);

 VAR_16->hw_mr.fbo = 0;

 VAR_16->hw_mr.length = VAR_20;
 VAR_16->hw_mr.vaddr = (uint64_t)VAR_13;
 VAR_16->hw_mr.zbva = 0;
 VAR_16->hw_mr.phy_mr = 0;
 VAR_16->hw_mr.dma_mr = 0;

 VAR_14 = FUNC_5(VAR_15->rdma_ctx, &VAR_16->hw_mr);
 if (VAR_14) {
  FUNC_1(VAR_18, "roce register tid returned an error %d\n", VAR_14);
  goto err2;
 }

 VAR_16->ibmr.lkey = VAR_16->hw_mr.itid << 8 | VAR_16->hw_mr.key;
 if (VAR_16->hw_mr.remote_write || VAR_16->hw_mr.remote_read ||
  VAR_16->hw_mr.remote_atomic)
  VAR_16->ibmr.rkey = VAR_16->hw_mr.itid << 8 | VAR_16->hw_mr.key;

 FUNC_2(VAR_18, "lkey: %x\n", VAR_16->ibmr.lkey);

 return (&VAR_16->ibmr);

err2:
 FUNC_4(VAR_15->rdma_ctx, VAR_16->hw_mr.itid);
err1:
 FUNC_11(VAR_15, &VAR_16->info.pbl_info, VAR_16->info.pbl_table);
err0:
 FUNC_9(VAR_16);

 FUNC_2(VAR_18, "exit [%d]\n", VAR_14);
 return (FUNC_0(VAR_14));
}
