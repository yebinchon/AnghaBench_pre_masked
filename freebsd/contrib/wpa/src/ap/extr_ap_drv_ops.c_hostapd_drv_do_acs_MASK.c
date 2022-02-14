
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_data {int drv_priv; TYPE_2__* driver; TYPE_1__* iface; } ;
struct hostapd_channel_data {scalar_t__ chan; int flag; int freq; } ;
struct drv_acs_params {scalar_t__* ch_list; unsigned int ch_list_len; int* freq_list; int ht_enabled; int ht40_enabled; int vht_enabled; int ch_width; int hw_mode; } ;
typedef int params ;
struct TYPE_8__ {int num; } ;
struct TYPE_7__ {int ht_capab; scalar_t__ ieee80211ac; scalar_t__ ieee80211ax; scalar_t__ ieee80211n; scalar_t__ acs_exclude_dfs; TYPE_4__ acs_ch_list; int hw_mode; } ;
struct TYPE_6__ {int (* do_acs ) (int ,struct drv_acs_params*) ;} ;
struct TYPE_5__ {int num_hw_features; TYPE_3__* conf; struct hostapd_hw_modes* hw_features; struct hostapd_hw_modes* current_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (struct hostapd_data*,struct hostapd_hw_modes*,int,int**) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int**,int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (struct drv_acs_params*,int ,int) ;
 int FUNC_7 (int ,struct drv_acs_params*) ;

int FUNC_8(struct hostapd_data *VAR_6)
{
 struct drv_acs_params VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;
 u8 *VAR_11 = ((void*)0);
 unsigned int VAR_12 = 0;
 struct hostapd_hw_modes *VAR_13;
 int *VAR_14 = ((void*)0);

 if (VAR_6->driver == ((void*)0) || VAR_6->driver->do_acs == ((void*)0))
  return 0;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.hw_mode = VAR_6->iface->conf->hw_mode;





 if (!VAR_6->iface->conf->acs_ch_list.num)
  VAR_10 = 1;

 VAR_13 = VAR_6->iface->current_mode;
 if (VAR_13) {
  VAR_11 = FUNC_5(VAR_13->num_channels);
  if (VAR_11 == ((void*)0))
   return -1;

  for (VAR_9 = 0; VAR_9 < VAR_13->num_channels; VAR_9++) {
   struct hostapd_channel_data *VAR_15 = &VAR_13->channels[VAR_9];
   if (!VAR_10 &&
       !FUNC_0(
        &VAR_6->iface->conf->acs_ch_list,
        VAR_15->chan))
    continue;
   if (VAR_6->iface->conf->acs_exclude_dfs &&
       (VAR_15->flag & VAR_4))
    continue;
   if (!(VAR_15->flag & VAR_3)) {
    VAR_11[VAR_12++] = VAR_15->chan;
    FUNC_3(&VAR_14, VAR_15->freq);
   }
  }
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_6->iface->num_hw_features; VAR_9++) {
   VAR_13 = &VAR_6->iface->hw_features[VAR_9];
   FUNC_1(VAR_6, VAR_13,
        VAR_10,
        &VAR_14);
  }
 }

 VAR_7.ch_list = VAR_11;
 VAR_7.ch_list_len = VAR_12;
 VAR_7.freq_list = VAR_14;

 VAR_7.ht_enabled = !!(VAR_6->iface->conf->ieee80211n);
 VAR_7.ht40_enabled = !!(VAR_6->iface->conf->ht_capab &
     VAR_5);
 VAR_7.vht_enabled = !!(VAR_6->iface->conf->ieee80211ac);
 VAR_7.ch_width = 20;
 if (VAR_6->iface->conf->ieee80211n && VAR_7.ht40_enabled)
  VAR_7.ch_width = 40;



 if ((VAR_6->iface->conf->ieee80211ax ||
      VAR_6->iface->conf->ieee80211ac) &&
     VAR_7.ht40_enabled) {
  u8 VAR_16 = FUNC_2(VAR_6->iface->conf);

  if (VAR_16 == VAR_1)
   VAR_7.ch_width = 80;
  else if (VAR_16 == VAR_0 ||
    VAR_16 == VAR_2)
   VAR_7.ch_width = 160;
 }

 VAR_8 = VAR_6->driver->do_acs(VAR_6->drv_priv, &VAR_7);
 FUNC_4(VAR_11);

 return VAR_8;
}
