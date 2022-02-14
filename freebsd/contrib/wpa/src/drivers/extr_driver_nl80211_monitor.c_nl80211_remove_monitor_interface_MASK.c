
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_nl80211_data {scalar_t__ monitor_refcount; int monitor_ifidx; int monitor_sock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*,int) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

void FUNC_4(struct wpa_driver_nl80211_data *VAR_1)
{
 if (VAR_1->monitor_refcount > 0)
  VAR_1->monitor_refcount--;
 FUNC_3(VAR_0, "nl80211: Remove monitor interface: refcount=%d",
     VAR_1->monitor_refcount);
 if (VAR_1->monitor_refcount > 0)
  return;

 if (VAR_1->monitor_ifidx >= 0) {
  FUNC_2(VAR_1, VAR_1->monitor_ifidx);
  VAR_1->monitor_ifidx = -1;
 }
 if (VAR_1->monitor_sock >= 0) {
  FUNC_1(VAR_1->monitor_sock);
  FUNC_0(VAR_1->monitor_sock);
  VAR_1->monitor_sock = -1;
 }
}
