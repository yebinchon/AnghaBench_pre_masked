
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_used_freq_data {int dummy; } ;
struct wpa_supplicant {unsigned int num_multichan_concurrent; TYPE_1__* global; } ;
struct p2p_channels {int dummy; } ;
typedef enum wpas_p2p_channel_update_trig { ____Placeholder_wpas_p2p_channel_update_trig } wpas_p2p_channel_update_trig ;
typedef int cli_chan ;
typedef int chan ;
struct TYPE_2__ {int * p2p; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int) ;
 struct wpa_used_freq_data* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct wpa_used_freq_data*) ;
 int FUNC_3 (struct p2p_channels*,int ,int) ;
 int FUNC_4 (int *,struct p2p_channels*,struct p2p_channels*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int,int) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int) ;
 scalar_t__ FUNC_8 (struct wpa_supplicant*,struct p2p_channels*,struct p2p_channels*) ;

void FUNC_9(struct wpa_supplicant *VAR_1,
      enum wpas_p2p_channel_update_trig VAR_2)
{
 struct p2p_channels VAR_3, VAR_4;
 struct wpa_used_freq_data *VAR_5 = ((void*)0);
 unsigned int VAR_6 = VAR_1->num_multichan_concurrent;

 if (VAR_1->global == ((void*)0) || VAR_1->global->p2p == ((void*)0))
  return;

 VAR_5 = FUNC_1(VAR_6, sizeof(struct wpa_used_freq_data));
 if (!VAR_5)
  return;

 VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_6);

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 if (FUNC_8(VAR_1, &VAR_3, &VAR_4)) {
  FUNC_5(VAR_0, "P2P: Failed to update supported "
      "channel list");
  return;
 }

 FUNC_4(VAR_1->global->p2p, &VAR_3, &VAR_4);

 FUNC_7(VAR_1, VAR_5, VAR_6);







 FUNC_6(VAR_1, VAR_5, VAR_6, VAR_2);

 FUNC_2(VAR_5);
}
