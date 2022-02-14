
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; struct wpa_supplicant* next; TYPE_1__* global; } ;
struct wpa_ssid {scalar_t__ mode; size_t ssid_len; int ssid; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int ,size_t) ;

struct wpa_supplicant * FUNC_1(struct wpa_supplicant *VAR_3,
           const u8 *VAR_4, size_t VAR_5)
{
 for (VAR_3 = VAR_3->global->ifaces; VAR_3; VAR_3 = VAR_3->next) {
  struct wpa_ssid *VAR_6 = VAR_3->current_ssid;
  if (VAR_6 == ((void*)0))
   continue;
  if (VAR_6->mode != VAR_1 &&
      VAR_6->mode != VAR_0 &&
      VAR_6->mode != VAR_2)
   continue;
  if (VAR_6->ssid_len != VAR_5 ||
      FUNC_0(VAR_4, VAR_6->ssid, VAR_5) != 0)
   continue;
  return VAR_3;
 }

 return ((void*)0);

}
