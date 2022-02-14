
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {scalar_t__ drv_priv; int * wps_probe_resp_ie; int * wps_beacon_ie; } ;


 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_0, int VAR_1)
{
 FUNC_2(VAR_0->wps_beacon_ie);
 VAR_0->wps_beacon_ie = ((void*)0);

 FUNC_2(VAR_0->wps_probe_resp_ie);
 VAR_0->wps_probe_resp_ie = ((void*)0);

 if (VAR_1) {
  if (VAR_0->drv_priv)
   FUNC_0(VAR_0);
  return;
 }

 FUNC_1(VAR_0);
}
