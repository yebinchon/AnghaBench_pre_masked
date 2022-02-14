
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t frame_len; int datarate; int ssi_signal; int * frame; } ;
union wpa_event_data {TYPE_1__ rx_mgmt; } ;
typedef int u8 ;
typedef int u16 ;
struct wpa_driver_nl80211_data {int ctx; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct wpa_driver_nl80211_data*,int *,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union wpa_event_data*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_6(struct wpa_driver_nl80211_data *VAR_2,
    u8 *VAR_3, size_t VAR_4, int VAR_5, int VAR_6)
{
 struct ieee80211_hdr *VAR_7;
 u16 VAR_8;
 union wpa_event_data VAR_9;

 VAR_7 = (struct ieee80211_hdr *) VAR_3;
 VAR_8 = FUNC_2(VAR_7->frame_control);

 switch (FUNC_0(VAR_8)) {
 case 128:
  FUNC_3(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.rx_mgmt.frame = VAR_3;
  VAR_9.rx_mgmt.frame_len = VAR_4;
  VAR_9.rx_mgmt.datarate = VAR_5;
  VAR_9.rx_mgmt.ssi_signal = VAR_6;
  FUNC_5(VAR_2->ctx, VAR_0, &VAR_9);
  break;
 case 130:

  FUNC_4(VAR_1, "CTRL");
  FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 case 129:
  FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 }
}
