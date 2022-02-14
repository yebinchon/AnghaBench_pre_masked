
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wpa_supplicant {scalar_t__ wpa_state; int waiting_presence_resp; int assoc_freq; int own_addr; int bssid; TYPE_2__* global; TYPE_1__* current_ssid; } ;
struct TYPE_4__ {int * p2p; scalar_t__ p2p_disabled; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_1(struct wpa_supplicant *VAR_2, u32 VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;

 if (VAR_2->global->p2p_disabled || VAR_2->global->p2p == ((void*)0))
  return -1;

 if (VAR_2->wpa_state < VAR_1 ||
     VAR_2->current_ssid == ((void*)0) ||
     VAR_2->current_ssid->mode != VAR_0)
  return -1;

 VAR_7 = FUNC_0(VAR_2->global->p2p, VAR_2->bssid,
          VAR_2->own_addr, VAR_2->assoc_freq,
          VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == 0)
  VAR_2->waiting_presence_resp = 1;

 return VAR_7;
}
