
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef void* u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_5__ {scalar_t__ tc; } ;
struct ecore_hwfn {TYPE_2__ ufp_info; TYPE_1__* p_dev; } ;
struct ecore_dcbx_results {TYPE_3__* arr; } ;
struct dcbx_app_priority_entry {int entry; } ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {scalar_t__ tc; scalar_t__ priority; scalar_t__ update; } ;
struct TYPE_4__ {int mf_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,int ,void*,int*,int) ;
 int FUNC_7 (struct ecore_dcbx_results*,struct ecore_hwfn*,struct ecore_ptt*,int,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_8(struct ecore_hwfn *VAR_9, struct ecore_ptt *VAR_10,
         struct ecore_dcbx_results *VAR_11,
         struct dcbx_app_priority_entry *VAR_12, u32 VAR_13,
         int VAR_14, u8 VAR_15)
{
 enum dcbx_protocol_type VAR_16;
 bool VAR_17, VAR_18, VAR_19;
 u8 VAR_20, VAR_21;
 u16 VAR_22;
 u8 VAR_23;
 enum _ecore_status_t VAR_24 = VAR_8;
 int VAR_25;

 FUNC_1(VAR_9, VAR_7,
     "Num APP entries = %d pri_tc_tbl = 0x%x dcbx_version = %u\n",
     VAR_14, VAR_13, VAR_15);

 VAR_18 = (VAR_15 == VAR_2);
 VAR_19 = 0;

 for (VAR_25 = 0; VAR_25 < VAR_14; VAR_25++) {
  VAR_22 = FUNC_3(VAR_12[VAR_25].entry,
         VAR_1);
  VAR_21 = FUNC_3(VAR_12[VAR_25].entry, VAR_0);
  FUNC_1(VAR_9, VAR_7, "Id = 0x%x pri_map = %u\n",
      VAR_22, VAR_21);
  VAR_24 = FUNC_5(VAR_21, &VAR_23);
  if (VAR_24 == VAR_5) {
   FUNC_0(VAR_9, "Invalid priority\n");
   return VAR_5;
  }

  VAR_20 = FUNC_2(VAR_13, VAR_23);
  if (FUNC_6(VAR_9, VAR_12[VAR_25].entry,
           VAR_22, &VAR_16,
           VAR_18)) {






   if (VAR_16 == VAR_4) {
    VAR_17 = 0;
    VAR_19 = 1;
   } else
    VAR_17 = 1;

   FUNC_7(VAR_11, VAR_9, VAR_10,
         VAR_17, VAR_23, VAR_20, VAR_16);
  }
 }


 if (FUNC_4(VAR_6,
     &VAR_9->p_dev->mf_bits) && !VAR_19)
  VAR_11->arr[VAR_4].tc = VAR_9->ufp_info.tc;







 VAR_20 = VAR_11->arr[VAR_4].tc;
 VAR_23 = VAR_11->arr[VAR_4].priority;
 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  if (VAR_11->arr[VAR_16].update)
   continue;


  FUNC_7(VAR_11, VAR_9, VAR_10, 0,
        VAR_23, VAR_20, VAR_16);
 }

 return VAR_8;
}
