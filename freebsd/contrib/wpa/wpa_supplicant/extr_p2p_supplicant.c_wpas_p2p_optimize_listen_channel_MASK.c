
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_used_freq_data {int freq; } ;
struct wpa_supplicant {scalar_t__ wpa_state; TYPE_2__* global; int current_ssid; TYPE_1__* conf; } ;
struct TYPE_4__ {int p2p; } ;
struct TYPE_3__ {int p2p_optimize_listen_chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_2,
          struct wpa_used_freq_data *VAR_3,
          unsigned int VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;





 if (!VAR_2->conf->p2p_optimize_listen_chan)
  return;

 if (!VAR_2->current_ssid || VAR_2->wpa_state != VAR_1)
  return;

 VAR_5 = FUNC_1(VAR_2->global->p2p);
 for (VAR_8 = 0, VAR_6 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_0(VAR_3[VAR_8].freq, &VAR_7);
  if (VAR_5 == VAR_7) {
   VAR_6 = 0;
   break;
  }

  if (VAR_7 == 1 || VAR_7 == 6 || VAR_7 == 11)
   VAR_6 = VAR_7;
 }

 if (VAR_6) {
  FUNC_3(VAR_2, VAR_0,
   "P2P: Update Listen channel to %u based on operating channel",
   VAR_6);
  FUNC_2(VAR_2->global->p2p, 81, VAR_6, 0);
 }
}
