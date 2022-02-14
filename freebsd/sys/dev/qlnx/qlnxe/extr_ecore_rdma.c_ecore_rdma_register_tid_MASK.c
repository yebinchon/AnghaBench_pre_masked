
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {void* lo; scalar_t__ hi; } ;
struct rdma_register_tid_ramrod_data {TYPE_4__ dif_runt_addr; TYPE_4__ dif_error_addr; scalar_t__ flags2; TYPE_4__ pbl_base; TYPE_4__ va; int length_lo; scalar_t__ length_hi; int pd; int key; void* itid; scalar_t__ flags1; scalar_t__ flags; } ;
struct TYPE_7__ {struct rdma_register_tid_ramrod_data rdma_register_tid; } ;
struct ecore_spq_entry {TYPE_3__ ramrod; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; } ;
struct ecore_rdma_register_tid_in_params {int itid; int pbl_two_level; int zbva; int phy_mr; int tid_type; int dma_mr; int page_size_log; int remote_read; int remote_write; int remote_atomic; int local_write; int local_read; int mw_bind; int pbl_page_size_log; int length; scalar_t__ fbo; int dif_runt_addr; int dif_error_addr; scalar_t__ dif_enabled; int pbl_ptr; int vaddr; int pd; int key; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum rdma_tid_type { ____Placeholder_rdma_tid_type } rdma_tid_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {scalar_t__ last_tid; int proto; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct ecore_sp_init_data*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_spq_entry*,scalar_t__*) ;

enum _ecore_status_t FUNC_10(void *VAR_25,
   struct ecore_rdma_register_tid_in_params *VAR_26)
{
 struct ecore_hwfn *VAR_27 = (struct ecore_hwfn *)VAR_25;
 struct rdma_register_tid_ramrod_data *VAR_28;
 struct ecore_sp_init_data VAR_29;
 struct ecore_spq_entry *VAR_30;
 enum rdma_tid_type VAR_31;
 u8 VAR_32;
 enum _ecore_status_t VAR_33;

 FUNC_3(VAR_27, VAR_1, "itid = %08x\n", VAR_26->itid);


 FUNC_6(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.opaque_fid = VAR_27->hw_info.opaque_fid;
 VAR_29.comp_mode = VAR_2;

 VAR_33 = FUNC_8(VAR_27, &VAR_30, VAR_5,
       VAR_27->p_rdma_info->proto, &VAR_29);
 if (VAR_33 != VAR_3) {
  FUNC_3(VAR_27, VAR_1, "rc = %d\n", VAR_33);
  return VAR_33;
 }

 if (VAR_27->p_rdma_info->last_tid < VAR_26->itid) {
  VAR_27->p_rdma_info->last_tid = VAR_26->itid;
 }

 VAR_28 = &VAR_30->ramrod.rdma_register_tid;

 VAR_28->flags = 0;
 FUNC_7(VAR_28->flags,
    VAR_18,
    VAR_26->pbl_two_level);

 FUNC_7(VAR_28->flags,
    VAR_19,
    VAR_26->zbva);

 FUNC_7(VAR_28->flags,
    VAR_13,
    VAR_26->phy_mr);


 if (!(VAR_26->tid_type == 131) &&
     !(VAR_26->dma_mr))
  FUNC_7(VAR_28->flags,
     VAR_11,
     VAR_26->page_size_log - 12);

 FUNC_7(VAR_28->flags,
    VAR_15,
    VAR_26->remote_read);

 FUNC_7(VAR_28->flags,
    VAR_16,
    VAR_26->remote_write);

 FUNC_7(VAR_28->flags,
    VAR_14,
    VAR_26->remote_atomic);

 FUNC_7(VAR_28->flags,
    VAR_10,
    VAR_26->local_write);

 FUNC_7(VAR_28->flags,
    VAR_9,
    VAR_26->local_read);

 FUNC_7(VAR_28->flags,
    VAR_8,
    VAR_26->mw_bind);

 FUNC_7(VAR_28->flags1,
    VAR_12,
    VAR_26->pbl_page_size_log - 12);

 FUNC_7(VAR_28->flags2,
    VAR_7,
    VAR_26->dma_mr);

 switch (VAR_26->tid_type)
 {
 case 128:
  VAR_31 = VAR_24;
  break;
 case 131:
  VAR_31 = VAR_21;
  break;
 case 130:
  VAR_31 = VAR_22;
  break;
 case 129:
  VAR_31 = VAR_23;
  break;
 default:
  VAR_33 = VAR_0;
  FUNC_3(VAR_27, VAR_1, "rc = %d\n", VAR_33);
  return VAR_33;
 }
 FUNC_7(VAR_28->flags1,
    VAR_17,
    VAR_31);

 VAR_28->itid = FUNC_5(VAR_26->itid);
 VAR_28->key = VAR_26->key;
 VAR_28->pd = FUNC_4(VAR_26->pd);
 VAR_28->length_hi = (u8)(VAR_26->length >> 32);
 VAR_28->length_lo = FUNC_0(VAR_26->length);
 if (VAR_26->zbva)
 {



  VAR_28->va.hi = 0;
  VAR_28->va.lo = FUNC_5(VAR_26->fbo);
 } else {
  FUNC_1(VAR_28->va, VAR_26->vaddr);
 }
 FUNC_1(VAR_28->pbl_base, VAR_26->pbl_ptr);


 if (VAR_26->dif_enabled) {
  FUNC_7(VAR_28->flags2,
     VAR_6, 1);
  FUNC_1(VAR_28->dif_error_addr,
          VAR_26->dif_error_addr);
  FUNC_1(VAR_28->dif_runt_addr, VAR_26->dif_runt_addr);
 }

 VAR_33 = FUNC_9(VAR_27, VAR_30, &VAR_32);
 if (VAR_33)
  return VAR_33;

 if (VAR_32 != VAR_20) {
  FUNC_2(VAR_27, 1, "fw_return_code = %d\n", VAR_32);
  return VAR_4;
 }

 FUNC_3(VAR_27, VAR_1, "Register TID, rc = %d\n", VAR_33);
 return VAR_33;
}
