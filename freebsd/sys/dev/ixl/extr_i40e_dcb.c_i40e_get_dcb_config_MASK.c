
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fw_maj_ver; int fw_min_ver; scalar_t__ asq_last_status; } ;
struct TYPE_7__ {int tlv_status; void* dcbx_mode; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_2__ aq; int remote_dcbx_config; int desired_dcbx_config; TYPE_3__ local_dcbx_config; TYPE_1__ mac; } ;
struct i40e_aqc_get_cee_dcb_cfg_v1_resp {int tlv_status; } ;
struct i40e_aqc_get_cee_dcb_cfg_resp {int tlv_status; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int cee_v1_cfg ;
typedef int cee_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aqc_get_cee_dcb_cfg_v1_resp*,int,int *) ;
 int FUNC_3 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_4 (struct i40e_aqc_get_cee_dcb_cfg_v1_resp*,TYPE_3__*) ;
 int FUNC_5 (struct i40e_aqc_get_cee_dcb_cfg_v1_resp*,TYPE_3__*) ;
 int FUNC_6 (struct i40e_hw*) ;

enum i40e_status_code FUNC_7(struct i40e_hw *VAR_7)
{
 enum i40e_status_code VAR_8 = VAR_6;
 struct i40e_aqc_get_cee_dcb_cfg_resp VAR_9;
 struct i40e_aqc_get_cee_dcb_cfg_v1_resp VAR_10;


 if ((VAR_7->mac.type == VAR_5) &&
     (((VAR_7->aq.fw_maj_ver == 4) && (VAR_7->aq.fw_min_ver < 33)) ||
       (VAR_7->aq.fw_maj_ver < 4)))
  return FUNC_6(VAR_7);


 if ((VAR_7->mac.type == VAR_5) &&
     ((VAR_7->aq.fw_maj_ver == 4) && (VAR_7->aq.fw_min_ver == 33))) {
  VAR_8 = FUNC_2(VAR_7, &VAR_10,
       sizeof(VAR_10), ((void*)0));
  if (VAR_8 == VAR_6) {

   VAR_7->local_dcbx_config.dcbx_mode = VAR_4;
   VAR_7->local_dcbx_config.tlv_status =
     FUNC_0(VAR_10.tlv_status);
   FUNC_5(&VAR_10,
        &VAR_7->local_dcbx_config);
  }
 } else {
  VAR_8 = FUNC_2(VAR_7, &VAR_9,
       sizeof(VAR_9), ((void*)0));
  if (VAR_8 == VAR_6) {

   VAR_7->local_dcbx_config.dcbx_mode = VAR_4;
   VAR_7->local_dcbx_config.tlv_status =
     FUNC_1(VAR_9.tlv_status);
   FUNC_4(&VAR_9,
            &VAR_7->local_dcbx_config);
  }
 }


 if (VAR_7->aq.asq_last_status == VAR_3)
  return FUNC_6(VAR_7);

 if (VAR_8 != VAR_6)
  goto out;


 VAR_8 = FUNC_3(VAR_7, VAR_1, 0,
         &VAR_7->desired_dcbx_config);
 if (VAR_8)
  goto out;


 VAR_8 = FUNC_3(VAR_7, VAR_2,
        VAR_0,
        &VAR_7->remote_dcbx_config);

 if (VAR_7->aq.asq_last_status == VAR_3)
  VAR_8 = VAR_6;

out:
 return VAR_8;
}
