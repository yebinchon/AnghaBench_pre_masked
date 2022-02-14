
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {int val; } ;
struct ecore_ilt_client_cfg {TYPE_1__ p_size; struct ecore_ilt_cli_blk* pf_blks; } ;
struct ecore_ilt_cli_blk {int start_line; } ;
struct ecore_hwfn {TYPE_3__* p_cxt_mngr; int p_dev; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef int ilt_hw_entry ;
typedef enum ecore_cxt_elem_type { ____Placeholder_ecore_cxt_elem_type } ecore_cxt_elem_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {int pf_start_line; TYPE_2__* ilt_shadow; struct ecore_ilt_client_cfg* clients; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ p_phys; scalar_t__ p_virt; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,...) ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int,int,scalar_t__) ;
 struct ecore_ptt* FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t
FUNC_9(struct ecore_hwfn *VAR_14,
    enum ecore_cxt_elem_type VAR_15,
    u32 VAR_16, u32 VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;
 struct ecore_ilt_client_cfg *VAR_26;
 struct ecore_ilt_cli_blk *VAR_27;
 u32 VAR_28 = VAR_16 + VAR_17;
 struct ecore_ptt *VAR_29;
 u64 VAR_30 = 0;
 u32 VAR_31;

 switch (VAR_15) {
 case 130:
  VAR_26 = &VAR_14->p_cxt_mngr->clients[VAR_5];
  VAR_23 = FUNC_1(VAR_14);
  VAR_27 = &VAR_26->pf_blks[VAR_0];
  break;
 case 129:
  VAR_26 = &VAR_14->p_cxt_mngr->clients[VAR_7];
  VAR_23 = VAR_13;
  VAR_27 = &VAR_26->pf_blks[VAR_12];
  break;
 case 128:
  VAR_26 = &VAR_14->p_cxt_mngr->clients[VAR_6];
  VAR_23 = FUNC_5(VAR_14);
  VAR_27 = &VAR_26->pf_blks[FUNC_0(VAR_1)];
  break;
 default:
  FUNC_2(VAR_14, 0,
     "ECORE_INVALID elem type = %d", VAR_15);
  return VAR_2;
 }


 VAR_24 = VAR_26->p_size.val;
 VAR_25 = FUNC_3(VAR_24) / VAR_23;
 VAR_18 = VAR_27->start_line + (VAR_16 / VAR_25);
 VAR_19 = VAR_27->start_line + (VAR_28 / VAR_25);
 if (((VAR_28 + 1) / VAR_25) != (VAR_28 / VAR_25))
  VAR_19--;

 VAR_20 = VAR_18 - VAR_14->p_cxt_mngr->pf_start_line;
 VAR_21 = VAR_19 - VAR_14->p_cxt_mngr->pf_start_line;

 VAR_29 = FUNC_7(VAR_14);
 if (!VAR_29) {
  FUNC_2(VAR_14, 0, "ECORE_TIME_OUT on ptt acquire - dynamic allocation");
  return VAR_4;
 }

 for (VAR_31 = VAR_20; VAR_31 < VAR_21; VAR_31++) {
  if (!VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].p_virt)
   continue;

  FUNC_4(VAR_14->p_dev,
           VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].p_virt,
           VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].p_phys,
           VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].size);

  VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].p_virt = VAR_10;
  VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].p_phys = 0;
  VAR_14->p_cxt_mngr->ilt_shadow[VAR_31].size = 0;


  VAR_22 = VAR_11 +
        ((VAR_18++) * VAR_9 *
         VAR_8);




  FUNC_6(VAR_14, VAR_29,
        (u64)(osal_uintptr_t)&VAR_30,
        VAR_22,
        sizeof(VAR_30) / sizeof(u32),
        VAR_10 );
 }

 FUNC_8(VAR_14, VAR_29);

 return VAR_3;
}
