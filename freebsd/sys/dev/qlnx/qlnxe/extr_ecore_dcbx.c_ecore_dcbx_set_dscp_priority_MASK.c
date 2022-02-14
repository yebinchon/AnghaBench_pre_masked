
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_2__ {scalar_t__* dscp_pri_map; } ;
struct ecore_dcbx_set {TYPE_1__ dscp; int override_flags; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dcbx_set ;


 int FUNC_0 (struct ecore_hwfn*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ecore_dcbx_set*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_dcbx_set*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_dcbx_set*) ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_4, struct ecore_ptt *VAR_5,
        u8 VAR_6, u8 VAR_7)
{
 struct ecore_dcbx_set VAR_8;
 enum _ecore_status_t VAR_9;

 if (VAR_6 >= VAR_0 ||
     VAR_7 >= VAR_3) {
  FUNC_0(VAR_4, "Invalid dscp params: index = %d pri = %d\n",
         VAR_6, VAR_7);
  return VAR_2;
 }

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_9 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8.override_flags = VAR_1;
 VAR_8.dscp.dscp_pri_map[VAR_6] = VAR_7;

 return FUNC_2(VAR_4, VAR_5, &VAR_8, 1);
}
