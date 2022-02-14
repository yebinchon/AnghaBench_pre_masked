
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_p2p_listen_work {unsigned int duration; scalar_t__ freq; int probe_resp_ie; } ;
struct wpa_supplicant {unsigned int pending_listen_duration; scalar_t__ roc_waiting_drv_freq; scalar_t__ off_channel_freq; scalar_t__ pending_listen_freq; scalar_t__ extra_roc_dur; struct wpa_radio_work* p2p_listen_work; } ;
struct wpa_radio_work {scalar_t__ started; struct wpas_p2p_listen_work* ctx; struct wpa_supplicant* wpa_s; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct wpa_supplicant*,int *,int ,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpas_p2p_listen_work*) ;
 int FUNC_6 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_7(struct wpa_radio_work *VAR_1, int VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1->wpa_s;
 struct wpas_p2p_listen_work *VAR_4 = VAR_1->ctx;
 unsigned int VAR_5;

 if (VAR_2) {
  if (VAR_1->started) {
   VAR_3->p2p_listen_work = ((void*)0);
   FUNC_6(VAR_3);
  }
  FUNC_5(VAR_4);
  return;
 }

 VAR_3->p2p_listen_work = VAR_1;

 FUNC_2(VAR_3, ((void*)0), VAR_4->probe_resp_ie, ((void*)0));

 if (FUNC_0(VAR_3, 1) < 0) {
  FUNC_3(VAR_0, "P2P: Failed to request the driver to "
      "report received Probe Request frames");
  FUNC_4(VAR_3);
  return;
 }

 VAR_3->pending_listen_freq = VAR_4->freq;
 VAR_3->pending_listen_duration = VAR_4->duration;

 VAR_5 = VAR_4->duration;
 if (FUNC_1(VAR_3, VAR_4->freq, VAR_5) < 0) {
  FUNC_3(VAR_0, "P2P: Failed to request the driver "
      "to remain on channel (%u MHz) for Listen "
      "state", VAR_4->freq);
  FUNC_4(VAR_3);
  VAR_3->pending_listen_freq = 0;
  return;
 }
 VAR_3->off_channel_freq = 0;
 VAR_3->roc_waiting_drv_freq = VAR_4->freq;
}
