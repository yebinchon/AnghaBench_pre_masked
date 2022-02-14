
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wds; int addr; int bssid; } ;
union wpa_event_data {TYPE_1__ rx_from_unknown; } ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct nlattr {int dummy; } ;
struct i802_bss {int addr; struct wpa_driver_nl80211_data* drv; } ;
typedef int event ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_3(struct i802_bss *VAR_2, struct nlattr **VAR_3,
       int VAR_4)
{
 struct wpa_driver_nl80211_data *VAR_5 = VAR_2->drv;
 union wpa_event_data VAR_6;

 if (!VAR_3[VAR_1])
  return;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.rx_from_unknown.bssid = VAR_2->addr;
 VAR_6.rx_from_unknown.addr = FUNC_0(VAR_3[VAR_1]);
 VAR_6.rx_from_unknown.wds = VAR_4;

 FUNC_2(VAR_5->ctx, VAR_0, &VAR_6);
}
