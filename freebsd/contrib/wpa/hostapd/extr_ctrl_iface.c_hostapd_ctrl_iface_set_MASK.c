
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int mbo_assoc_disallow; int iface; int parameter_set_count; TYPE_1__* conf; int iconf; void* dpp_configurator_params; void* dpp_ignore_netaccesskey_mismatch; void* dpp_groups_override; void* dpp_discovery_override; void* dpp_config_obj_override; void* ext_eapol_frame_io; void* ext_mgmt_frame_handling; } ;
struct TYPE_2__ {int mbo_enabled; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 void* VAR_1 ;
 int FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (struct hostapd_data*) ;
 int FUNC_3 (int ,TYPE_1__*,char*,char*) ;
 int FUNC_4 (struct hostapd_data*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;
 void* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 long FUNC_11 (char*,int *,int ) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct hostapd_data *VAR_5, char *VAR_6)
{
 char *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_8(VAR_6, ' ');
 if (VAR_7 == ((void*)0))
  return -1;
 *VAR_7++ = '\0';

 FUNC_12(VAR_0, "CTRL_IFACE SET '%s'='%s'", VAR_6, VAR_7);
 if (0) {
 } else {
  VAR_8 = FUNC_3(VAR_5->iconf, VAR_5->conf, VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;

  if (FUNC_7(VAR_6, "deny_mac_file") == 0) {
   FUNC_2(VAR_5);
  } else if (FUNC_7(VAR_6, "accept_mac_file") == 0) {
   FUNC_1(VAR_5);
  } else if (FUNC_10(VAR_6, "wme_ac_", 7) == 0 ||
      FUNC_10(VAR_6, "wmm_ac_", 7) == 0) {
   VAR_5->parameter_set_count++;
   if (FUNC_5(VAR_5->iface))
    FUNC_12(VAR_0,
        "Failed to update beacons with WMM parameters");
  }
 }

 return VAR_8;
}
