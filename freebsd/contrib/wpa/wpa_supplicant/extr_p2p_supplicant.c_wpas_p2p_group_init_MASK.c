
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ max_stations; struct p2p_group* p2p_group; TYPE_4__* global; TYPE_3__* p2pdev; TYPE_1__* conf; int own_addr; } ;
struct wpa_ssid {scalar_t__ mode; int frequency; int ssid_len; int ssid; scalar_t__ p2p_persistent_group; int p2p_group; } ;
struct p2p_group_config {int persistent_group; scalar_t__ max_clients; int ip_addr_alloc; int idle_update; int ie_update; struct wpa_supplicant* cb_ctx; int freq; int ssid_len; int ssid; int interface_addr; } ;
struct p2p_group {int dummy; } ;
struct TYPE_8__ {int * p2p; scalar_t__ p2p_disabled; } ;
struct TYPE_7__ {TYPE_2__* conf; } ;
struct TYPE_6__ {int ip_addr_start; } ;
struct TYPE_5__ {scalar_t__ max_num_sta; scalar_t__ persistent_reconnect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct p2p_group_config*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct p2p_group_config* FUNC_3 (int) ;
 struct p2p_group* FUNC_4 (int *,struct p2p_group_config*) ;
 int FUNC_5 (struct p2p_group*) ;
 int VAR_2 ;
 int VAR_3 ;

struct p2p_group * FUNC_6(struct wpa_supplicant *VAR_4,
           struct wpa_ssid *VAR_5)
{
 struct p2p_group *VAR_6;
 struct p2p_group_config *VAR_7;

 if (VAR_4->global->p2p_disabled || VAR_4->global->p2p == ((void*)0) ||
     !VAR_5->p2p_group)
  return ((void*)0);

 VAR_7 = FUNC_3(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 if (VAR_5->p2p_persistent_group && VAR_4->conf->persistent_reconnect)
  VAR_7->persistent_group = 2;
 else if (VAR_5->p2p_persistent_group)
  VAR_7->persistent_group = 1;
 FUNC_2(VAR_7->interface_addr, VAR_4->own_addr, VAR_0);
 if (VAR_4->max_stations &&
     VAR_4->max_stations < VAR_4->conf->max_num_sta)
  VAR_7->max_clients = VAR_4->max_stations;
 else
  VAR_7->max_clients = VAR_4->conf->max_num_sta;
 FUNC_2(VAR_7->ssid, VAR_5->ssid, VAR_5->ssid_len);
 VAR_7->ssid_len = VAR_5->ssid_len;
 VAR_7->freq = VAR_5->frequency;
 VAR_7->cb_ctx = VAR_4;
 VAR_7->ie_update = VAR_3;
 VAR_7->idle_update = VAR_2;
 VAR_7->ip_addr_alloc = FUNC_0(VAR_4->p2pdev->conf->ip_addr_start)
  != 0;

 VAR_6 = FUNC_4(VAR_4->global->p2p, VAR_7);
 if (VAR_6 == ((void*)0))
  FUNC_1(VAR_7);
 if (VAR_5->mode != VAR_1)
  FUNC_5(VAR_6);
 VAR_4->p2p_group = VAR_6;
 return VAR_6;
}
