
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wds; int addr; int bssid; } ;
union wpa_event_data {TYPE_1__ rx_from_unknown; } ;
typedef int u8 ;
typedef int u16 ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hdr*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union wpa_event_data*,int ,int) ;
 int FUNC_3 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_4(struct wpa_driver_nl80211_data *VAR_3,
        u8 *VAR_4, size_t VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (void *)VAR_4;
 u16 VAR_7;
 union wpa_event_data VAR_8;

 if (VAR_5 < sizeof(*VAR_6))
  return;

 VAR_7 = FUNC_1(VAR_6->frame_control);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.rx_from_unknown.bssid = FUNC_0(VAR_6, VAR_5);
 VAR_8.rx_from_unknown.addr = VAR_6->addr2;
 VAR_8.rx_from_unknown.wds = (VAR_7 & (VAR_1 | VAR_2)) ==
  (VAR_1 | VAR_2);
 FUNC_3(VAR_3->ctx, VAR_0, &VAR_8);
}
