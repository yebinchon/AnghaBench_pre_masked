
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int drv_flags; scalar_t__ action_tx_wait_time_used; scalar_t__ roc_waiting_drv_freq; scalar_t__ off_channel_freq; scalar_t__ action_tx_wait_time; int * pending_action_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (int ,char*,int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct wpa_supplicant *VAR_2)
{
 FUNC_2(VAR_0,
     "Off-channel: Action frame sequence done notification: pending_action_tx=%p drv_offchan_tx=%d action_tx_wait_time=%d off_channel_freq=%d roc_waiting_drv_freq=%d",
     VAR_2->pending_action_tx,
     !!(VAR_2->drv_flags & VAR_1),
     VAR_2->action_tx_wait_time, VAR_2->off_channel_freq,
     VAR_2->roc_waiting_drv_freq);
 FUNC_3(VAR_2->pending_action_tx);
 VAR_2->pending_action_tx = ((void*)0);
 if (VAR_2->drv_flags & VAR_1 &&
     (VAR_2->action_tx_wait_time || VAR_2->action_tx_wait_time_used))
  FUNC_1(VAR_2);
 else if (VAR_2->off_channel_freq || VAR_2->roc_waiting_drv_freq) {
  FUNC_0(VAR_2);
  VAR_2->off_channel_freq = 0;
  VAR_2->roc_waiting_drv_freq = 0;
 }
 VAR_2->action_tx_wait_time_used = 0;
}
