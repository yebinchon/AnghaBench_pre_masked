
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int multi_ap_backhaul_network_key_len; int multi_ap_backhaul_network_key; int extra_cred; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct wps_registrar*,int *) ;
 int FUNC_2 (struct wps_registrar*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wps_registrar*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_5(struct wps_registrar *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_1(VAR_0, VAR_2, ((void*)0));
 FUNC_1(VAR_1, VAR_2, ((void*)0));
 FUNC_4(VAR_2);
 FUNC_3(VAR_2->extra_cred);
 FUNC_0(VAR_2->multi_ap_backhaul_network_key,
         VAR_2->multi_ap_backhaul_network_key_len);
 FUNC_2(VAR_2);
}
