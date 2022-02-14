
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_load_req_params {scalar_t__ timeout_val; int override_force_load; int avoid_eng_reset; scalar_t__ drv_role; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct ecore_drv_load_params {scalar_t__ mfw_timeout_val; int mfw_timeout_fallback; int override_force_load; int avoid_eng_reset; scalar_t__ is_crash_kernel; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int capabilities; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ecore_load_req_params*,int) ;
 struct ecore_drv_load_params* VAR_8 ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_9,
      struct ecore_load_req_params *VAR_10,
      struct ecore_drv_load_params *VAR_11)
{



 FUNC_2(VAR_2 != 0);
 FUNC_2(VAR_3 != 0);
 FUNC_2(VAR_5 != 0);

 FUNC_3(VAR_10, sizeof(*VAR_10));

 if (VAR_11 == VAR_8)
  goto out;

 VAR_10->drv_role = VAR_11->is_crash_kernel ?
          VAR_1 :
          VAR_2;
 VAR_10->avoid_eng_reset = VAR_11->avoid_eng_reset;
 VAR_10->override_force_load = VAR_11->override_force_load;





 if (VAR_11->mfw_timeout_val == VAR_3 ||
     VAR_11->mfw_timeout_val == VAR_4 ||
     (VAR_9->mcp_info->capabilities &
      VAR_7)) {
  VAR_10->timeout_val = VAR_11->mfw_timeout_val;
  goto out;
 }

 switch (VAR_11->mfw_timeout_fallback) {
 case 128:
  VAR_10->timeout_val = VAR_4;
  break;
 case 129:
  VAR_10->timeout_val = VAR_3;
  break;
 case 130:
  FUNC_1(VAR_9, 0,
     "Received %d as a value for MFW timeout while the MFW supports only default [%d] or none [%d]. Abort.\n",
     VAR_11->mfw_timeout_val,
     VAR_3,
     VAR_4);
  return VAR_0;
 }

 FUNC_0(VAR_9,
  "Modified the MFW timeout value from %d to %s [%d] due to lack of MFW support\n",
  VAR_11->mfw_timeout_val,
  (VAR_10->timeout_val == VAR_3) ?
  "default" : "none",
  VAR_10->timeout_val);
out:
 return VAR_6;
}
