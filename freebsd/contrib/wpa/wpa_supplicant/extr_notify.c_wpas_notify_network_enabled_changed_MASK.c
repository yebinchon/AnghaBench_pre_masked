
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_mgmt; } ;
struct wpa_ssid {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*) ;

void FUNC_1(struct wpa_supplicant *VAR_0,
      struct wpa_ssid *VAR_1)
{
 if (VAR_0->p2p_mgmt)
  return;

 FUNC_0(VAR_0, VAR_1);
}
