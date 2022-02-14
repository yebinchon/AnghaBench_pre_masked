
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int p2p_group; TYPE_1__* conf; struct wpa_supplicant* next; TYPE_2__* global; } ;
struct wpa_ssid {scalar_t__ mode; scalar_t__ p2p_group; int disabled; struct wpa_ssid* next; } ;
struct TYPE_4__ {struct wpa_supplicant* ifaces; } ;
struct TYPE_3__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,struct wpa_supplicant*,struct wpa_ssid*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct wpa_supplicant *VAR_2)
{
 unsigned int VAR_3 = 0;
 struct wpa_ssid *VAR_4;

 for (VAR_2 = VAR_2->global->ifaces; VAR_2; VAR_2 = VAR_2->next) {
  for (VAR_4 = VAR_2->conf->ssid; VAR_4; VAR_4 = VAR_4->next) {
   FUNC_1(VAR_0,
       "P2P: sup:%p ssid:%p disabled:%d p2p:%d mode:%d",
       VAR_2, VAR_4, VAR_4->disabled, VAR_4->p2p_group,
       VAR_4->mode);
   if (!VAR_4->disabled && VAR_4->p2p_group &&
       VAR_4->mode == VAR_1) {
    VAR_3 += FUNC_0(
     VAR_2->p2p_group);
   }
  }
 }

 return VAR_3;
}
