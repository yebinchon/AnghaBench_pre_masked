
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_2__* p_dcbx_info; } ;
struct ecore_dcbx_results {TYPE_3__* arr; } ;
typedef enum ecore_mib_read_type { ____Placeholder_ecore_mib_read_type } ecore_mib_read_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {int enabled; } ;
struct TYPE_9__ {TYPE_1__ dscp; } ;
struct TYPE_8__ {int tc; } ;
struct TYPE_7__ {int dscp_nig_update; struct ecore_dcbx_results results; TYPE_4__ get; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ecore_hwfn*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,TYPE_4__*) ;
 int FUNC_5 (struct ecore_hwfn*,TYPE_4__*,int) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_10 (struct ecore_hwfn*) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t
FUNC_12(struct ecore_hwfn *VAR_8, struct ecore_ptt *VAR_9,
       enum ecore_mib_read_type VAR_10)
{
 enum _ecore_status_t VAR_11 = VAR_3;

 VAR_11 = FUNC_7(VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 == VAR_2) {
  FUNC_4(VAR_8, &VAR_8->p_dcbx_info->get);

  VAR_11 = FUNC_6(VAR_8, VAR_9);
  if (!VAR_11) {



   FUNC_8(VAR_8, VAR_9);


   FUNC_10(VAR_8);
  }
 }

 FUNC_5(VAR_8, &VAR_8->p_dcbx_info->get, VAR_10);

 if (VAR_10 == VAR_2) {
  struct ecore_dcbx_results *VAR_12;
  u16 VAR_13;


  if (VAR_8->p_dcbx_info->dscp_nig_update) {
   u8 VAR_14 = !!VAR_8->p_dcbx_info->get.dscp.enabled;
   u32 VAR_15 = VAR_4;

   VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_15, VAR_14);
   if (VAR_11 != VAR_3) {
    FUNC_0(VAR_8, 0,
       "Failed to update the DSCP to TC mapping enable bit\n");
    return VAR_11;
   }

   VAR_8->p_dcbx_info->dscp_nig_update = 0;
  }




  VAR_12 = &VAR_8->p_dcbx_info->results;
  VAR_13 = (0x1 << VAR_12->arr[VAR_0].tc) |
   (0x1 << VAR_12->arr[VAR_1].tc);
  VAR_13 <<= VAR_7;
  VAR_13 |= VAR_6;
  FUNC_11(VAR_8, VAR_9, VAR_5, VAR_13);
 }

 FUNC_2(VAR_8, VAR_10);

 return VAR_11;
}
