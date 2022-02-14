
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
struct wpa_supplicant {TYPE_2__* conf; int confname; struct wpa_ssid* current_ssid; TYPE_1__* global; } ;
struct wpa_ssid {scalar_t__ mode; int disabled; scalar_t__ ssid_len; size_t num_p2p_clients; int const* p2p_client_list; int const* ssid; struct wpa_ssid* next; int p2p_persistent_group; } ;
struct TYPE_4__ {scalar_t__ update_config; struct wpa_ssid* ssid; } ;
struct TYPE_3__ {struct wpa_supplicant* p2p_init_wpa_s; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 int FUNC_1 (int const*,int const*,size_t) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (int const*,int,size_t) ;
 int const* FUNC_4 (int const*,int,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_4,
       const u8 *VAR_5)
{
 struct wpa_ssid *VAR_6, *VAR_7;
 u8 *VAR_8;
 size_t VAR_9;
 int VAR_10 = 0;
 struct wpa_supplicant *VAR_11 = VAR_4->global->p2p_init_wpa_s;

 VAR_6 = VAR_4->current_ssid;
 if (VAR_6 == ((void*)0) || VAR_6->mode != VAR_3 ||
     !VAR_6->p2p_persistent_group)
  return;

 for (VAR_7 = VAR_11->conf->ssid; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_7->disabled != 2 || VAR_7->mode != VAR_3)
   continue;

  if (VAR_7->ssid_len == VAR_6->ssid_len &&
      FUNC_0(VAR_7->ssid, VAR_6->ssid, VAR_7->ssid_len) == 0)
   break;
 }

 if (VAR_7 == ((void*)0))
  return;

 for (VAR_9 = 0; VAR_7->p2p_client_list && VAR_9 < VAR_7->num_p2p_clients; VAR_9++) {
  if (FUNC_0(VAR_7->p2p_client_list + VAR_9 * 2 * VAR_0, VAR_5,
         VAR_0) != 0)
   continue;

  if (VAR_9 == VAR_7->num_p2p_clients - 1)
   return;


  FUNC_2(VAR_7->p2p_client_list + VAR_9 * 2 * VAR_0,
      VAR_7->p2p_client_list + (VAR_9 + 1) * 2 * VAR_0,
      (VAR_7->num_p2p_clients - VAR_9 - 1) * 2 * VAR_0);
  FUNC_1(VAR_7->p2p_client_list +
     (VAR_7->num_p2p_clients - 1) * 2 * VAR_0, VAR_5,
     VAR_0);
  FUNC_3(VAR_7->p2p_client_list +
     (VAR_7->num_p2p_clients - 1) * 2 * VAR_0 + VAR_0,
     0xff, VAR_0);
  VAR_10 = 1;
  break;
 }

 if (!VAR_10 && VAR_7->num_p2p_clients < VAR_2) {
  VAR_8 = FUNC_4(VAR_7->p2p_client_list,
         VAR_7->num_p2p_clients + 1, 2 * VAR_0);
  if (VAR_8 == ((void*)0))
   return;
  FUNC_1(VAR_8 + VAR_7->num_p2p_clients * 2 * VAR_0, VAR_5,
     VAR_0);
  FUNC_3(VAR_8 + VAR_7->num_p2p_clients * 2 * VAR_0 + VAR_0,
     0xff, VAR_0);
  VAR_7->p2p_client_list = VAR_8;
  VAR_7->num_p2p_clients++;
 } else if (!VAR_10 && VAR_7->p2p_client_list) {


  FUNC_2(VAR_7->p2p_client_list,
      VAR_7->p2p_client_list + 2 * VAR_0,
      (VAR_7->num_p2p_clients - 1) * 2 * VAR_0);
  FUNC_1(VAR_7->p2p_client_list +
     (VAR_7->num_p2p_clients - 1) * 2 * VAR_0,
     VAR_5, VAR_0);
  FUNC_3(VAR_7->p2p_client_list +
     (VAR_7->num_p2p_clients - 1) * 2 * VAR_0 + VAR_0,
     0xff, VAR_0);
 }

 if (VAR_11->conf->update_config &&
     FUNC_5(VAR_11->confname, VAR_11->conf))
  FUNC_6(VAR_1, "P2P: Failed to update configuration");
}
