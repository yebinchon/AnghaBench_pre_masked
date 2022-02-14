
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ureq ;
typedef void* u64 ;
typedef void* u32 ;
struct qlnxr_ucontext {int dummy; } ;
struct ecore_chain {int elem_per_page; } ;
struct qlnxr_srq_hwq_info {void* phy_prod_pair_addr; struct ecore_chain pbl; } ;
struct ib_srq {int dummy; } ;
struct TYPE_7__ {void* num_pbes; } ;
struct TYPE_10__ {TYPE_4__* umem; TYPE_3__* pbl_tbl; TYPE_2__ pbl_info; } ;
struct qlnxr_srq {int srq_id; struct ib_srq ibsrq; TYPE_5__ usrq; int lock; struct qlnxr_srq_hwq_info hw_srq; struct qlnxr_dev* dev; } ;
struct qlnxr_pd {int pd_id; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct qlnxr_create_srq_ureq {void* page_size; void* num_pages; void* prod_pair_addr; void* pbl_base_addr; int pd_id; } ;
struct ib_udata {int inlen; } ;
struct ib_ucontext {int dummy; } ;
struct ib_srq_init_attr {int dummy; } ;
struct ib_pd {TYPE_1__* uobject; int device; } ;
struct ecore_rdma_destroy_srq_in_params {int srq_id; } ;
struct ecore_rdma_create_srq_out_params {int srq_id; } ;
struct ecore_rdma_create_srq_in_params {void* page_size; void* num_pages; void* prod_pair_addr; void* pbl_base_addr; int pd_id; } ;
typedef int qlnx_host_t ;
typedef int in_params ;
struct TYPE_9__ {void* page_size; } ;
struct TYPE_8__ {void* pa; } ;
struct TYPE_6__ {struct ib_ucontext* context; } ;


 int VAR_0 ;
 struct ib_srq* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 void* FUNC_3 (struct ecore_chain*) ;
 void* FUNC_4 (struct ecore_chain*) ;
 int FUNC_5 (int ,struct qlnxr_create_srq_ureq*,struct ecore_rdma_create_srq_out_params*) ;
 int FUNC_6 (int ,struct ecore_rdma_destroy_srq_in_params*) ;
 struct qlnxr_dev* FUNC_7 (int ) ;
 struct qlnxr_pd* FUNC_8 (struct ib_pd*) ;
 struct qlnxr_ucontext* FUNC_9 (struct ib_ucontext*) ;
 scalar_t__ FUNC_10 (struct qlnxr_create_srq_ureq*,struct ib_udata*,int ) ;
 int FUNC_11 (struct qlnxr_srq*) ;
 struct qlnxr_srq* FUNC_12 (int,int ) ;
 int FUNC_13 (struct qlnxr_create_srq_ureq*,int ,int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct qlnxr_srq*,struct qlnxr_dev*,struct ib_srq_init_attr*) ;
 int FUNC_16 (struct ib_pd*,struct qlnxr_dev*,struct ib_srq_init_attr*) ;
 int FUNC_17 (struct qlnxr_dev*,struct qlnxr_srq*,struct ib_udata*) ;
 int FUNC_18 (struct qlnxr_srq*) ;
 int FUNC_19 (struct qlnxr_srq*) ;
 int FUNC_20 (struct ib_ucontext*,struct qlnxr_srq*,struct qlnxr_create_srq_ureq*,int ,int ) ;
 int FUNC_21 (int *) ;

struct ib_srq *
FUNC_22(struct ib_pd *VAR_2, struct ib_srq_init_attr *VAR_3,
 struct ib_udata *VAR_4)
{
 struct qlnxr_dev *VAR_5;
 qlnx_host_t *VAR_6;
 struct ecore_rdma_destroy_srq_in_params VAR_7;
 struct ecore_rdma_create_srq_out_params VAR_8;
 struct ecore_rdma_create_srq_in_params VAR_9;
 u64 VAR_10, VAR_11;
 struct qlnxr_pd *VAR_12 = FUNC_8(VAR_2);
 struct ib_ucontext *VAR_13 = ((void*)0);
 struct qlnxr_srq_hwq_info *VAR_14;
 struct qlnxr_ucontext *VAR_15 = ((void*)0);
 struct qlnxr_create_srq_ureq VAR_16;
 u32 VAR_17, VAR_18;
 struct qlnxr_srq *VAR_19;
 int VAR_20 = 0;

 VAR_5 = FUNC_7((VAR_2->device));
 VAR_6 = VAR_5->ha;

 FUNC_2(VAR_6, "enter\n");

 VAR_20 = FUNC_16(VAR_2, VAR_5, VAR_3);

 VAR_19 = FUNC_12(sizeof(*VAR_19), VAR_1);
 if (!VAR_19) {
  FUNC_1(VAR_6, "cannot allocate memory for srq\n");
  return ((void*)0);
 }

 VAR_19->dev = VAR_5;
 VAR_14 = &VAR_19->hw_srq;
 FUNC_21(&VAR_19->lock);
 FUNC_13(&VAR_9, 0, sizeof(VAR_9));

 if (VAR_4 && VAR_2->uobject && VAR_2->uobject->context) {
  VAR_13 = VAR_2->uobject->context;
  VAR_15 = FUNC_9(VAR_13);

  FUNC_13(&VAR_16, 0, sizeof(VAR_16));
  if (FUNC_10(&VAR_16, VAR_4, FUNC_14(sizeof(VAR_16),
   VAR_4->inlen))) {
   FUNC_1(VAR_6, "problem"
    " copying data from user space\n");
   goto err0;
  }

  VAR_20 = FUNC_20(VAR_13, VAR_19, &VAR_16, 0, 0);
  if (VAR_20)
   goto err0;

  VAR_17 = VAR_19->usrq.pbl_info.num_pbes;
  VAR_10 = VAR_19->usrq.pbl_tbl->pa;
  VAR_11 = VAR_14->phy_prod_pair_addr;



  VAR_18 = VAR_19->usrq.umem->page_size;
 } else {
  struct ecore_chain *VAR_21;
  VAR_20 = FUNC_15(VAR_19, VAR_5, VAR_3);
  if (VAR_20)
   goto err0;
  VAR_21 = &VAR_14->pbl;

  VAR_17 = FUNC_3(VAR_21);
  VAR_10 = FUNC_4(VAR_21);
  VAR_11 = VAR_14->phy_prod_pair_addr;
  VAR_18 = VAR_21->elem_per_page << 4;
 }

 VAR_9.pd_id = VAR_12->pd_id;
 VAR_9.pbl_base_addr = VAR_10;
 VAR_9.prod_pair_addr = VAR_11;
 VAR_9.num_pages = VAR_17;
 VAR_9.page_size = VAR_18;

 VAR_20 = FUNC_5(VAR_5->rdma_ctx, &VAR_9, &VAR_8);
 if (VAR_20)
  goto err1;

 VAR_19->srq_id = VAR_8.srq_id;

 if (VAR_4) {
  VAR_20 = FUNC_17(VAR_5, VAR_19, VAR_4);
  if (VAR_20)
   goto err2;
 }

 FUNC_2(VAR_6, "created srq with srq_id = 0x%0x\n", VAR_19->srq_id);
 return &VAR_19->ibsrq;
err2:
 FUNC_13(&VAR_9, 0, sizeof(VAR_9));
 VAR_7.srq_id = VAR_19->srq_id;
 FUNC_6(VAR_5->rdma_ctx, &VAR_7);

err1:
 if (VAR_4)
  FUNC_19(VAR_19);
 else
  FUNC_18(VAR_19);

err0:
 FUNC_11(VAR_19);
 return FUNC_0(-VAR_0);
}
