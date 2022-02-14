
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {struct wpa_scan_res** res; scalar_t__ num; } ;
struct wpa_scan_res {int dummy; } ;
struct nl_msg {int dummy; } ;
struct nl80211_bss_info_arg {int drv; struct wpa_scan_results* res; } ;


 int VAR_0 ;
 struct wpa_scan_res* FUNC_0 (int ,struct nl_msg*) ;
 int FUNC_1 (struct wpa_scan_res*) ;
 struct wpa_scan_res** FUNC_2 (struct wpa_scan_res**,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct nl_msg *VAR_1, void *VAR_2)
{
 struct nl80211_bss_info_arg *VAR_3 = VAR_2;
 struct wpa_scan_results *VAR_4 = VAR_3->res;
 struct wpa_scan_res **VAR_5;
 struct wpa_scan_res *VAR_6;

 VAR_6 = FUNC_0(VAR_3->drv, VAR_1);
 if (!VAR_6)
  return VAR_0;

 if (!VAR_4) {
  FUNC_1(VAR_6);
  return VAR_0;
 }
 VAR_5 = FUNC_2(VAR_4->res, VAR_4->num + 1,
          sizeof(struct wpa_scan_res *));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_6);
  return VAR_0;
 }
 VAR_5[VAR_4->num++] = VAR_6;
 VAR_4->res = VAR_5;

 return VAR_0;
}
