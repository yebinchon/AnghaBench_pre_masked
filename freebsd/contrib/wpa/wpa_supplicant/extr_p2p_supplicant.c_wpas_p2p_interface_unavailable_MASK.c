
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* current_ssid; } ;
struct TYPE_2__ {int p2p_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;

void FUNC_2(struct wpa_supplicant *VAR_2)
{
 if (VAR_2->current_ssid == ((void*)0) || !VAR_2->current_ssid->p2p_group)
  return;

 FUNC_0(VAR_0, "P2P: Remove group due to driver resource not "
     "being available anymore");
 FUNC_1(VAR_2, VAR_1);
}
