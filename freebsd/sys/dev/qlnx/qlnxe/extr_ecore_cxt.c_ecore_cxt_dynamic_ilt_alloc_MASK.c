
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ flags1; } ;
struct TYPE_8__ {TYPE_2__ tdif_context; } ;
union type1_task_context {TYPE_3__ roce_ctx; } ;
typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_6__ {size_t val; } ;
struct ecore_ilt_client_cfg {TYPE_1__ p_size; struct ecore_ilt_cli_blk* pf_blks; } ;
struct ecore_ilt_cli_blk {size_t start_line; int real_size_in_page; } ;
struct ecore_hwfn {int b_rdma_enabled_in_prs; TYPE_5__* p_cxt_mngr; int rdma_prs_search_reg; int p_dev; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef int ilt_hw_entry ;
typedef enum ecore_cxt_elem_type { ____Placeholder_ecore_cxt_elem_type } ecore_cxt_elem_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;
struct TYPE_10__ {size_t pf_start_line; int mutex; TYPE_4__* ilt_shadow; struct ecore_ilt_client_cfg* clients; } ;
struct TYPE_9__ {int p_phys; int size; void* p_virt; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_3 (size_t) ;
 size_t VAR_12 ;
 void* FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_8 (scalar_t__,int ,int) ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 size_t FUNC_9 (struct ecore_hwfn*) ;
 size_t VAR_19 ;
 size_t FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,size_t,int,int ) ;
 struct ecore_ptt* FUNC_12 (struct ecore_hwfn*) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t
FUNC_15(struct ecore_hwfn *VAR_20,
       enum ecore_cxt_elem_type VAR_21,
       u32 VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 struct ecore_ilt_client_cfg *VAR_29;
 struct ecore_ilt_cli_blk *VAR_30;
 struct ecore_ptt *VAR_31;
 dma_addr_t VAR_32;
 u64 VAR_33;
 void *VAR_34;
 enum _ecore_status_t VAR_35 = VAR_4;

 switch (VAR_21) {
 case 131:
  VAR_29 = &VAR_20->p_cxt_mngr->clients[VAR_6];
  VAR_25 = FUNC_1(VAR_20);
  VAR_30 = &VAR_29->pf_blks[VAR_0];
  break;
 case 130:

  VAR_22 += FUNC_10(VAR_20);
  VAR_29 = &VAR_20->p_cxt_mngr->clients[VAR_8];
  VAR_25 = VAR_17;
  VAR_30 = &VAR_29->pf_blks[VAR_16];
  break;
 case 128:
  VAR_29 = &VAR_20->p_cxt_mngr->clients[VAR_8];
  VAR_25 = VAR_19;
  VAR_30 = &VAR_29->pf_blks[VAR_16];
  break;
 case 129:
  VAR_29 = &VAR_20->p_cxt_mngr->clients[VAR_7];
  VAR_25 = FUNC_9(VAR_20);
  VAR_30 = &VAR_29->pf_blks[FUNC_0(VAR_1)];
  break;
 default:
  FUNC_2(VAR_20, 0,
     "ECORE_INVALID elem type = %d", VAR_21);
  return VAR_2;
 }


 VAR_26 = VAR_29->p_size.val;
 VAR_27 = FUNC_3(VAR_26) / VAR_25;
 VAR_28 = VAR_30->start_line + (VAR_22 / VAR_27);
 VAR_24 = VAR_28 - VAR_20->p_cxt_mngr->pf_start_line;
 FUNC_6(&VAR_20->p_cxt_mngr->mutex);

 if (VAR_20->p_cxt_mngr->ilt_shadow[VAR_24].p_virt)
  goto out0;

 VAR_31 = FUNC_12(VAR_20);
 if (!VAR_31) {
  FUNC_2(VAR_20, 0,
     "ECORE_TIME_OUT on ptt acquire - dynamic allocation");
  VAR_35 = VAR_5;
  goto out0;
 }

 VAR_34 = FUNC_4(VAR_20->p_dev,
      &VAR_32,
      VAR_30->real_size_in_page);
 if (!VAR_34) {
  VAR_35 = VAR_3;
  goto out1;
 }
 FUNC_5(VAR_34, VAR_30->real_size_in_page);







 if (VAR_21 == 129) {
  u32 VAR_36;
  u8 *VAR_37 = (u8 *)VAR_34;
  union type1_task_context *VAR_38;

  for (VAR_36 = 0; VAR_36 < VAR_27; VAR_36++) {
   VAR_38 = (union type1_task_context *)VAR_37;
   FUNC_8(VAR_38->roce_ctx.tdif_context.flags1,
      VAR_18 , 0xf);
   VAR_37 += FUNC_9(VAR_20);
  }
 }

 VAR_20->p_cxt_mngr->ilt_shadow[VAR_24].p_virt = VAR_34;
 VAR_20->p_cxt_mngr->ilt_shadow[VAR_24].p_phys = VAR_32;
 VAR_20->p_cxt_mngr->ilt_shadow[VAR_24].size =
  VAR_30->real_size_in_page;


 VAR_23 = VAR_15 +
       (VAR_28 * VAR_12 * VAR_9);

 VAR_33 = 0;
 FUNC_8(VAR_33, VAR_11, 1ULL);
 FUNC_8(VAR_33,
    VAR_10,
    (VAR_20->p_cxt_mngr->ilt_shadow[VAR_24].p_phys >> 12));


 FUNC_11(VAR_20, VAR_31, (u64)(osal_uintptr_t)&VAR_33,
       VAR_23, sizeof(VAR_33) / sizeof(u32),
       VAR_13 );

 if (VAR_21 == 131) {
  u32 VAR_39 = (1 + (VAR_22 / VAR_27)) *
      VAR_27;


  FUNC_14(VAR_20, VAR_31, VAR_14,
    VAR_39 - 1);
  if (!VAR_20->b_rdma_enabled_in_prs) {

   FUNC_14(VAR_20, VAR_31, VAR_20->rdma_prs_search_reg, 1);
   VAR_20->b_rdma_enabled_in_prs = 1;
  }
 }

out1:
 FUNC_13(VAR_20, VAR_31);
out0:
 FUNC_7(&VAR_20->p_cxt_mngr->mutex);

 return VAR_35;
}
