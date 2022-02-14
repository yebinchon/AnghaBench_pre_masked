
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wmm_ac_assoc_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 if (!VAR_1->wmm_ac_assoc_info)
  return;

 FUNC_0(VAR_1);
 FUNC_1(VAR_0, "WMM AC: WMM AC is disabled");
}
