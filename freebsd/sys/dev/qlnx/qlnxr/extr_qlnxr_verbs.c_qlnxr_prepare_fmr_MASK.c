
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_14__ {void* lo; void* hi; } ;
struct rdma_sq_fmr_wqe_1st {TYPE_4__ addr; int l_key; } ;
struct TYPE_15__ {void* lo; void* hi; } ;
struct rdma_sq_fmr_wqe {TYPE_5__ pbl_addr; int length_lo; scalar_t__ length_hi; scalar_t__ fmr_ctrl; scalar_t__ access_ctrl; } ;
struct TYPE_17__ {size_t prod; int pbl; } ;
struct qlnxr_qp {TYPE_7__ sq; TYPE_6__* wqe_wr_id; struct qlnxr_dev* dev; } ;
struct TYPE_18__ {TYPE_1__* pbl_table; } ;
struct qlnxr_fast_reg_page_list {TYPE_8__ info; } ;
struct qlnxr_dev {int * ha; } ;
struct TYPE_12__ {scalar_t__ page_list_len; int access_flags; int page_shift; int rkey; int iova_start; TYPE_9__* page_list; int length; } ;
struct TYPE_13__ {TYPE_2__ fast_reg; } ;
struct ib_send_wr {TYPE_3__ wr; } ;
typedef int qlnx_host_t ;
struct TYPE_19__ {int* page_list; } ;
struct TYPE_16__ {struct qlnxr_fast_reg_page_list* frmr; } ;
struct TYPE_11__ {int pa; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct qlnxr_dev*,struct ib_send_wr*,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct qlnxr_fast_reg_page_list* FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct qlnxr_dev*,TYPE_8__*) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static inline int
FUNC_10(struct qlnxr_qp *VAR_12,
 struct rdma_sq_fmr_wqe_1st *VAR_13,
 struct ib_send_wr *VAR_14)
{
 struct qlnxr_dev *VAR_15 = VAR_12->dev;
 u64 VAR_16;
 struct qlnxr_fast_reg_page_list *VAR_17 =
  FUNC_5(VAR_14->wr.fast_reg.page_list);
 struct rdma_sq_fmr_wqe *VAR_18 =
  (struct rdma_sq_fmr_wqe *)FUNC_4(&VAR_12->sq.pbl);
 int VAR_19 = 0;
 qlnx_host_t *VAR_20;

 VAR_20 = VAR_15->ha;

 FUNC_1(VAR_20, "enter\n");

 if (VAR_14->wr.fast_reg.page_list_len == 0)
  FUNC_0();

 VAR_19 = FUNC_8(VAR_15, &VAR_17->info);
 if (VAR_19)
  return VAR_19;

 VAR_13->addr.hi = FUNC_9(VAR_14->wr.fast_reg.iova_start);
 VAR_13->addr.lo = FUNC_7(VAR_14->wr.fast_reg.iova_start);
 VAR_13->l_key = VAR_14->wr.fast_reg.rkey;

 FUNC_2(VAR_18->access_ctrl, VAR_10,
     !!(VAR_14->wr.fast_reg.access_flags & VAR_2));
 FUNC_2(VAR_18->access_ctrl, VAR_11,
     !!(VAR_14->wr.fast_reg.access_flags & VAR_3));
 FUNC_2(VAR_18->access_ctrl, VAR_7,
     !!(VAR_14->wr.fast_reg.access_flags & VAR_1));
 FUNC_2(VAR_18->access_ctrl, VAR_8, 1);
 FUNC_2(VAR_18->access_ctrl, VAR_9,
     !!(VAR_14->wr.fast_reg.access_flags & VAR_0));

 VAR_18->fmr_ctrl = 0;

 FUNC_2(VAR_18->fmr_ctrl, VAR_5,
     FUNC_6(1 << VAR_14->wr.fast_reg.page_shift) - 12);
 FUNC_2(VAR_18->fmr_ctrl, VAR_6, 0);

 VAR_18->length_hi = 0;
 VAR_18->length_lo = VAR_14->wr.fast_reg.length;
 VAR_18->pbl_addr.hi = FUNC_9(VAR_17->info.pbl_table->pa);
 VAR_18->pbl_addr.lo = FUNC_7(VAR_17->info.pbl_table->pa);


 FUNC_4(&VAR_12->sq.pbl);

 VAR_16 = VAR_14->wr.fast_reg.iova_start -
     (VAR_14->wr.fast_reg.page_list->page_list[0] & VAR_4);

 FUNC_1(VAR_20, "wr.fast_reg.iova_start = %p rkey=%x addr=%x:%x"
  " length = %x pbl_addr %x:%x\n",
  VAR_14->wr.fast_reg.iova_start, VAR_14->wr.fast_reg.rkey,
  VAR_13->addr.hi, VAR_13->addr.lo, VAR_18->length_lo,
  VAR_18->pbl_addr.hi, VAR_18->pbl_addr.lo);

 FUNC_3(VAR_15, VAR_14, &VAR_17->info);

 VAR_12->wqe_wr_id[VAR_12->sq.prod].frmr = VAR_17;

 FUNC_1(VAR_20, "exit\n");
 return 0;
}
