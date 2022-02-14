
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {int disabled; size_t ssid_len; scalar_t__ mode; size_t num_p2p_clients; int const* p2p_client_list; int const* bssid; int const* ssid; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;

struct wpa_ssid * FUNC_1(struct wpa_supplicant *VAR_2,
       const u8 *VAR_3, const u8 *VAR_4,
       size_t VAR_5)
{
 struct wpa_ssid *VAR_6;
 size_t VAR_7;

 for (VAR_6 = VAR_2->conf->ssid; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->disabled != 2)
   continue;
  if (VAR_4 &&
      (VAR_5 != VAR_6->ssid_len ||
       FUNC_0(VAR_4, VAR_6->ssid, VAR_5) != 0))
   continue;
  if (VAR_3 == ((void*)0)) {
   if (VAR_6->mode == VAR_1)
    return VAR_6;
   continue;
  }
  if (FUNC_0(VAR_6->bssid, VAR_3, VAR_0) == 0)
   return VAR_6;
  if (VAR_6->mode != VAR_1 || VAR_6->p2p_client_list == ((void*)0))
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_6->num_p2p_clients; VAR_7++) {
   if (FUNC_0(VAR_6->p2p_client_list + VAR_7 * 2 * VAR_0,
          VAR_3, VAR_0) == 0)
    return VAR_6;

  }
 }

 return ((void*)0);
}
