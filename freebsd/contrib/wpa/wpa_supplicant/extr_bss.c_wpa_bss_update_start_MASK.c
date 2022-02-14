
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ last_scan_res_used; int bss_update_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,int ) ;

void FUNC_1(struct wpa_supplicant *VAR_1)
{
 VAR_1->bss_update_idx++;
 FUNC_0(VAR_1, VAR_0, "BSS: Start scan result update %u",
  VAR_1->bss_update_idx);
 VAR_1->last_scan_res_used = 0;
}
