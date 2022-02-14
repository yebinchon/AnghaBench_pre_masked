
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_iface {int hw_flags; int num_hw_features; int drv_flags; struct hostapd_hw_modes* hw_features; int dfs_domain; struct hostapd_data** bss; } ;
struct hostapd_hw_modes {int num_channels; TYPE_2__* channels; int mode; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_4__ {int flag; int max_tx_power; int freq; int chan; } ;
struct TYPE_3__ {scalar_t__ ieee80211h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct hostapd_data*) ;
 int FUNC_2 (struct hostapd_hw_modes*,int) ;
 struct hostapd_hw_modes* FUNC_3 (struct hostapd_data*,int*,int*,int *) ;
 int FUNC_4 (struct hostapd_data*,int *,int ,int ,char*) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ,char*) ;

int FUNC_6(struct hostapd_iface *VAR_8)
{
 struct hostapd_data *VAR_9 = VAR_8->bss[0];
 int VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 struct hostapd_hw_modes *VAR_14;
 u8 VAR_15;

 if (FUNC_1(VAR_9))
  return -1;
 VAR_14 = FUNC_3(VAR_9, &VAR_12, &VAR_13,
         &VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(VAR_9, ((void*)0), VAR_4,
          VAR_3,
          "Fetching hardware channel/rate support not "
          "supported.");
  return -1;
 }

 VAR_8->hw_flags = VAR_13;
 VAR_8->dfs_domain = VAR_15;

 FUNC_2(VAR_8->hw_features, VAR_8->num_hw_features);
 VAR_8->hw_features = VAR_14;
 VAR_8->num_hw_features = VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  struct hostapd_hw_modes *VAR_16 = &VAR_14[VAR_10];
  int VAR_17 = VAR_9->iconf->ieee80211h &&
   (VAR_8->drv_flags & VAR_7);



  for (VAR_11 = 0; VAR_11 < VAR_16->num_channels; VAR_11++) {
   int VAR_18 = 0;







   if ((VAR_16->channels[VAR_11].flag &
        VAR_2) && VAR_17) {
    VAR_18 = 1;
   } else if (((VAR_16->channels[VAR_11].flag &
         VAR_2) &&
        !(VAR_8->drv_flags &
          VAR_6)) ||
       (VAR_16->channels[VAR_11].flag &
        VAR_1)) {
    VAR_16->channels[VAR_11].flag |=
     VAR_0;
   }

   if (VAR_16->channels[VAR_11].flag & VAR_0)
    continue;

   FUNC_5(VAR_5, "Allowed channel: mode=%d "
       "chan=%d freq=%d MHz max_tx_power=%d dBm%s",
       VAR_16->mode,
       VAR_16->channels[VAR_11].chan,
       VAR_16->channels[VAR_11].freq,
       VAR_16->channels[VAR_11].max_tx_power,
       VAR_18 ? FUNC_0(&VAR_16->channels[VAR_11]) : "");
  }
 }

 return 0;
}
