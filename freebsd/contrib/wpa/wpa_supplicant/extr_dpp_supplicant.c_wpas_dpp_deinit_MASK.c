
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * dpp_configurator_params; int dpp_intro_bssid; int * dpp_pfs; int dpp; scalar_t__ dpp_ignore_netaccesskey_mismatch; int * dpp_groups_override; int * dpp_discovery_override; int * dpp_config_obj_override; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct wpa_supplicant*) ;

void FUNC_9(struct wpa_supplicant *VAR_6)
{
 if (!VAR_6->dpp)
  return;
 FUNC_0(VAR_6->dpp);
 FUNC_2(VAR_4, VAR_6, ((void*)0));
 FUNC_2(VAR_5, VAR_6, ((void*)0));
 FUNC_2(VAR_3, VAR_6, ((void*)0));
 FUNC_2(VAR_1, VAR_6, ((void*)0));





 FUNC_3(VAR_6);
 FUNC_6(VAR_6);
 FUNC_8(VAR_6);
 FUNC_7(VAR_6, "*");
 FUNC_5(VAR_6->dpp_intro_bssid, 0, VAR_0);
 FUNC_4(VAR_6->dpp_configurator_params);
 VAR_6->dpp_configurator_params = ((void*)0);
}
