
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t frame_len; int * frame; } ;
union wpa_event_data {TYPE_1__ rx_mgmt; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_hdr {int frame_control; } ;
struct hostap_driver_data {int hapd; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int FUNC_2 (struct hostap_driver_data*,int *,size_t,scalar_t__) ;
 int FUNC_3 (struct hostap_driver_data*,int *,size_t,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (union wpa_event_data*,int ,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,char*,int *,size_t) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_10(struct hostap_driver_data *VAR_5, u8 *VAR_6, size_t VAR_7)
{
 struct ieee80211_hdr *VAR_8;
 u16 VAR_9, VAR_10, VAR_11;
 size_t VAR_12 = VAR_7;
 int VAR_13;
 union wpa_event_data VAR_14;



 if (VAR_7 < 24) {
  FUNC_8(VAR_2, "handle_frame: too short (%lu)",
      (unsigned long) VAR_7);
  return;
 }

 VAR_8 = (struct ieee80211_hdr *) VAR_6;
 VAR_9 = FUNC_4(VAR_8->frame_control);
 VAR_10 = FUNC_1(VAR_9);
 VAR_11 = FUNC_0(VAR_9);

 if (VAR_10 != 128 || VAR_11 != VAR_4) {
  FUNC_7(VAR_2, "Received management frame",
       VAR_6, VAR_7);
 }

 VAR_13 = VAR_9 & VAR_3;




 if (VAR_13 == 1 || VAR_13 == 2) {
  FUNC_3(VAR_5, VAR_6, VAR_12, VAR_13 == 2 ? 1 : 0);
  return;
 } else if (VAR_13 != 0) {
  FUNC_6("unknown protocol version %d\n", VAR_13);
  return;
 }

 switch (VAR_10) {
 case 128:
  FUNC_5(&VAR_14, 0, sizeof(VAR_14));
  VAR_14.rx_mgmt.frame = VAR_6;
  VAR_14.rx_mgmt.frame_len = VAR_12;
  FUNC_9(VAR_5->hapd, VAR_0, &VAR_14);
  break;
 case 130:
  FUNC_8(VAR_1, "CTRL");
  break;
 case 129:
  FUNC_8(VAR_1, "DATA");
  FUNC_2(VAR_5, VAR_6, VAR_12, VAR_11);
  break;
 default:
  FUNC_8(VAR_1, "unknown frame type %d", VAR_10);
  break;
 }
}
