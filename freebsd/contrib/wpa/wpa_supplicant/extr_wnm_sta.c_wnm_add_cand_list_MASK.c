
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {unsigned int last_scan_res_used; struct wpa_bss** last_scan_res; int last_scan; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_bss {int dummy; } ;
struct os_reltime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct os_reltime*) ;
 scalar_t__ FUNC_1 (struct os_reltime*,int *,int) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpa_bss*,struct wpabuf**,int ) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,unsigned int,struct wpa_bss*,struct wpa_ssid*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_1, struct wpabuf **VAR_2)
{
 unsigned int VAR_3, VAR_4 = 255;
 struct os_reltime VAR_5;
 struct wpa_ssid *VAR_6 = VAR_1->current_ssid;

 if (!VAR_6)
  return;





 FUNC_0(&VAR_5);
 if (FUNC_1(&VAR_5, &VAR_1->last_scan, 10))
  return;

 FUNC_4(VAR_0,
     "WNM: Add candidate list to BSS Transition Management Response frame");
 for (VAR_3 = 0; VAR_3 < VAR_1->last_scan_res_used && VAR_4; VAR_3++) {
  struct wpa_bss *VAR_7 = VAR_1->last_scan_res[VAR_3];
  int VAR_8;

  if (FUNC_5(VAR_1, VAR_3, VAR_7, VAR_6, 1, 0)) {
   VAR_8 = FUNC_2(VAR_1, VAR_7, VAR_2, VAR_4--);
   if (VAR_8 == -2)
    continue;
   if (VAR_8 < 0)
    break;
   if (VAR_4 == 1)
    break;
  }
 }

 FUNC_3(VAR_0,
   "WNM: BSS Transition Management Response candidate list",
   *VAR_2);
}
