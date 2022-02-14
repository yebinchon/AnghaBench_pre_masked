
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {int cac_started; int dfs_cac_start; TYPE_1__* conf; struct hostapd_hw_modes* current_mode; struct hostapd_data** bss; } ;
struct hostapd_hw_modes {int * he_capab; int vht_capab; } ;
struct hostapd_freq_params {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_2__* driver; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;
struct TYPE_4__ {int (* start_dfs_cac ) (int ,struct hostapd_freq_params*) ;} ;
struct TYPE_3__ {int ieee80211h; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostapd_freq_params*,int,int,int,int,int,int,int,int,int,int,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct hostapd_freq_params*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct hostapd_iface *VAR_2,
     enum hostapd_hw_mode VAR_3, int VAR_4,
     int VAR_5, int VAR_6, int VAR_7,
     int VAR_8,
     int VAR_9, int VAR_10,
     int VAR_11, int VAR_12)
{
 struct hostapd_data *VAR_13 = VAR_2->bss[0];
 struct hostapd_freq_params VAR_14;
 int VAR_15;
 struct hostapd_hw_modes *VAR_16 = VAR_2->current_mode;

 if (!VAR_13->driver || !VAR_13->driver->start_dfs_cac || !VAR_16)
  return 0;

 if (!VAR_2->conf->ieee80211h) {
  FUNC_3(VAR_1, "Can't start DFS CAC, DFS functionality "
      "is not enabled");
  return -1;
 }

 if (FUNC_0(&VAR_14, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_11,
        VAR_12,
        VAR_16->vht_capab,
        &VAR_16->he_capab[VAR_0])) {
  FUNC_3(VAR_1, "Can't set freq params");
  return -1;
 }

 VAR_15 = VAR_13->driver->start_dfs_cac(VAR_13->drv_priv, &VAR_14);
 if (!VAR_15) {
  VAR_2->cac_started = 1;
  FUNC_1(&VAR_2->dfs_cac_start);
 }

 return VAR_15;
}
