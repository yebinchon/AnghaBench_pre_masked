
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ show_group_started; scalar_t__ p2p_in_provisioning; TYPE_2__* current_ssid; TYPE_1__* conf; } ;
struct TYPE_4__ {scalar_t__ mode; int p2p_group; } ;
struct TYPE_3__ {int p2p_group_idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_3, VAR_4, ((void*)0)) > 0)
  FUNC_2(VAR_0, "P2P: Cancelled P2P group idle timeout");

 if (VAR_4->current_ssid == ((void*)0) || !VAR_4->current_ssid->p2p_group)
  return;

 VAR_5 = VAR_4->conf->p2p_group_idle;
 if (VAR_4->current_ssid->mode == VAR_2 &&
     (VAR_5 == 0 || VAR_5 > VAR_1))
     VAR_5 = VAR_1;

 if (VAR_5 == 0)
  return;

 if (VAR_5 < 0) {
  if (VAR_4->current_ssid->mode == VAR_2)
   VAR_5 = 0;
  else
   return;
 }

 if (VAR_4->p2p_in_provisioning) {





  FUNC_2(VAR_0, "P2P: Do not use P2P group idle timeout "
      "during provisioning");
  return;
 }

 if (VAR_4->show_group_started) {






  FUNC_2(VAR_0, "P2P: Do not use P2P group idle timeout "
      "while waiting for initial 4-way handshake to "
      "complete");
  return;
 }

 FUNC_2(VAR_0, "P2P: Set P2P group idle timeout to %u seconds",
     VAR_5);
 FUNC_1(VAR_5, 0, VAR_3,
          VAR_4, ((void*)0));
}
