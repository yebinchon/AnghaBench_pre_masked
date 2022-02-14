
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ off_channel_freq; scalar_t__ pending_listen_freq; int pending_listen_duration; TYPE_1__* global; int roc_waiting_drv_freq; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,unsigned int,unsigned int,...) ;

void FUNC_2(struct wpa_supplicant *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0))
  return;
 FUNC_1(VAR_0, "P2P: remain-on-channel callback (off_channel_freq=%u pending_listen_freq=%d roc_waiting_drv_freq=%d freq=%u duration=%u)",
     VAR_1->off_channel_freq, VAR_1->pending_listen_freq,
     VAR_1->roc_waiting_drv_freq, VAR_2, VAR_3);
 if (VAR_1->off_channel_freq &&
     VAR_1->off_channel_freq == VAR_1->pending_listen_freq) {
  FUNC_0(VAR_1->global->p2p, VAR_1->pending_listen_freq,
         VAR_1->pending_listen_duration);
  VAR_1->pending_listen_freq = 0;
 } else {
  FUNC_1(VAR_0, "P2P: Ignore remain-on-channel callback (off_channel_freq=%u pending_listen_freq=%d freq=%u duration=%u)",
      VAR_1->off_channel_freq, VAR_1->pending_listen_freq,
      VAR_2, VAR_3);
 }
}
