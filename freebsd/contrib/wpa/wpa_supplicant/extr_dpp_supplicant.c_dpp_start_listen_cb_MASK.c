
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpas_dpp_listen_work {scalar_t__ freq; } ;
struct wpa_supplicant {scalar_t__ roc_waiting_drv_freq; scalar_t__ off_channel_freq; scalar_t__ dpp_pending_listen_freq; scalar_t__ dpp_listen_freq; int max_remain_on_chan; struct wpa_radio_work* dpp_listen_work; } ;
struct wpa_radio_work {scalar_t__ started; struct wpas_dpp_listen_work* ctx; struct wpa_supplicant* wpa_s; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpas_dpp_listen_work*) ;

__attribute__((used)) static void FUNC_5(struct wpa_radio_work *VAR_1, int VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1->wpa_s;
 struct wpas_dpp_listen_work *VAR_4 = VAR_1->ctx;

 if (VAR_2) {
  if (VAR_1->started) {
   VAR_3->dpp_listen_work = ((void*)0);
   FUNC_2(VAR_3);
  }
  FUNC_4(VAR_4);
  return;
 }

 VAR_3->dpp_listen_work = VAR_1;

 VAR_3->dpp_pending_listen_freq = VAR_4->freq;

 if (FUNC_0(VAR_3, VAR_4->freq,
          VAR_3->max_remain_on_chan) < 0) {
  FUNC_1(VAR_0,
      "DPP: Failed to request the driver to remain on channel (%u MHz) for listen",
      VAR_4->freq);
  VAR_3->dpp_listen_freq = 0;
  FUNC_3(VAR_3);
  VAR_3->dpp_pending_listen_freq = 0;
  return;
 }
 VAR_3->off_channel_freq = 0;
 VAR_3->roc_waiting_drv_freq = VAR_4->freq;
}
