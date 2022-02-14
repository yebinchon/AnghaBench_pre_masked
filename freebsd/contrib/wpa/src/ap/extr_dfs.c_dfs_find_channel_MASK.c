
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int allowed_bw; int chan; } ;
struct TYPE_2__ {scalar_t__ secondary_channel; scalar_t__ ieee80211n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_hw_modes*,int,int,int) ;
 int FUNC_1 (struct hostapd_iface*,int*) ;
 int FUNC_2 (struct hostapd_channel_data*,int) ;
 int FUNC_3 (struct hostapd_iface*,struct hostapd_channel_data*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct hostapd_iface *VAR_2,
       struct hostapd_channel_data **VAR_3,
       int VAR_4, int VAR_5)
{
 struct hostapd_hw_modes *VAR_6;
 struct hostapd_channel_data *VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10, VAR_11;

 VAR_6 = VAR_2->current_mode;
 VAR_10 = FUNC_1(VAR_2, &VAR_11);

 FUNC_4(VAR_1, "DFS new chan checking %d channels", VAR_10);
 for (VAR_8 = 0; VAR_8 < VAR_6->num_channels; VAR_8++) {
  VAR_7 = &VAR_6->channels[VAR_8];


  if (VAR_2->conf->ieee80211n &&
      VAR_2->conf->secondary_channel &&
      (!FUNC_2(VAR_7, VAR_10) ||
       !(VAR_7->allowed_bw & VAR_0)))
   continue;


  if (!FUNC_0(VAR_6, VAR_8, VAR_10, VAR_5))
   continue;

  if (!FUNC_3(VAR_2, VAR_7))
   continue;

  if (VAR_3 && VAR_4 == VAR_9) {
   FUNC_4(VAR_1, "Selected ch. #%d", VAR_7->chan);
   *VAR_3 = VAR_7;
   return VAR_4;
  }
  FUNC_4(VAR_1, "Adding channel: %d", VAR_7->chan);
  VAR_9++;
 }
 return VAR_9;
}
