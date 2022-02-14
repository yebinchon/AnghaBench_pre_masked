
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* current_ssid; int p2p_mgmt; } ;
struct TYPE_2__ {scalar_t__ p2p_persistent_group; scalar_t__ p2p_group; int disabled; } ;



__attribute__((used)) static unsigned int FUNC_0(struct wpa_supplicant *VAR_0)
{
 return !VAR_0->p2p_mgmt && VAR_0->current_ssid &&
  !VAR_0->current_ssid->disabled &&
  VAR_0->current_ssid->p2p_group &&
  VAR_0->current_ssid->p2p_persistent_group;
}
