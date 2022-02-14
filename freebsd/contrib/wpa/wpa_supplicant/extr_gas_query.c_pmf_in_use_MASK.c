
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {scalar_t__ wpa_state; int wpa; int bssid; int * current_ssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct wpa_supplicant *VAR_2, const u8 *VAR_3)
{
 if (VAR_2->current_ssid == ((void*)0) ||
     VAR_2->wpa_state < VAR_1 ||
     FUNC_0(VAR_3, VAR_2->bssid, VAR_0) != 0)
  return 0;
 return FUNC_1(VAR_2->wpa);
}
