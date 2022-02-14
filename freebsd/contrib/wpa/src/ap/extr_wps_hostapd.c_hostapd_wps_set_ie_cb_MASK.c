
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct hostapd_data {scalar_t__ beacon_set_done; struct wpabuf* wps_probe_resp_ie; struct wpabuf* wps_beacon_ie; } ;


 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct wpabuf *VAR_1,
     struct wpabuf *VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_0;
 FUNC_2(VAR_3->wps_beacon_ie);
 VAR_3->wps_beacon_ie = VAR_1;
 FUNC_2(VAR_3->wps_probe_resp_ie);
 VAR_3->wps_probe_resp_ie = VAR_2;
 if (VAR_3->beacon_set_done)
  FUNC_1(VAR_3);
 return FUNC_0(VAR_3);
}
