
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ ap_iface; scalar_t__ cross_connect_disallowed; TYPE_1__* current_ssid; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int VAR_2 ;

void FUNC_4(struct wpa_supplicant *VAR_3)
{
 if (VAR_3->ap_iface || VAR_3->current_ssid == ((void*)0) ||
     VAR_3->current_ssid->mode != VAR_1 ||
     VAR_3->cross_connect_disallowed)
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);
 if (!VAR_3->ap_iface &&
     FUNC_0(VAR_2, VAR_3, ((void*)0)) > 0)
  FUNC_1(VAR_0, "P2P: Cancelled P2P group idle timeout");
}
