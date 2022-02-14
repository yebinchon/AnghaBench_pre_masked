
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int mode; int p2p_group; } ;
typedef enum wpas_p2p_role { ____Placeholder_wpas_p2p_role } wpas_p2p_role ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static enum wpas_p2p_role FUNC_0(struct wpa_supplicant *VAR_4)
{
 struct wpa_ssid *VAR_5 = VAR_4->current_ssid;

 if (!VAR_5)
  return VAR_1;
 if (VAR_4->wpa_state != VAR_3)
  return VAR_1;

 switch (VAR_5->mode) {
 case 129:
 case 128:
  return VAR_2;
 case 130:
  if (VAR_5->p2p_group)
   return VAR_0;
  return VAR_1;
 default:
  return VAR_1;
 }
}
