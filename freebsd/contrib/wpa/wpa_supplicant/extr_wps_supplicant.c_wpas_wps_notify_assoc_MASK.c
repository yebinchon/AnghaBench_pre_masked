
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_ap_info {int last_attempt; int tries; } ;
struct wpa_supplicant {int wps_ap_iter; scalar_t__ after_wps; } ;


 int FUNC_0 (int *) ;
 struct wps_ap_info* FUNC_1 (struct wpa_supplicant*,int const*) ;

void FUNC_2(struct wpa_supplicant *VAR_0, const u8 *VAR_1)
{
 struct wps_ap_info *VAR_2;

 VAR_0->after_wps = 0;

 if (!VAR_0->wps_ap_iter)
  return;
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return;
 VAR_2->tries++;
 FUNC_0(&VAR_2->last_attempt);
}
