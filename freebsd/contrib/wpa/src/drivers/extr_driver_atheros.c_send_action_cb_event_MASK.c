
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t data_len; int ack; int const* data; int dst; int stype; int type; } ;
union wpa_event_data {TYPE_1__ tx_status; } ;
typedef int u8 ;
typedef int u16 ;
struct ieee80211_send_action_cb {int ack; int dst_addr; } ;
struct ieee80211_hdr {int frame_control; } ;
struct atheros_driver_data {int hapd; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union wpa_event_data*,int ,int) ;
 int FUNC_4 (int ,char*,char*,size_t) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_7(struct atheros_driver_data *VAR_2,
     char *VAR_3, size_t VAR_4)
{
 union wpa_event_data VAR_5;
 struct ieee80211_send_action_cb *VAR_6;
 const struct ieee80211_hdr *VAR_7;
 u16 VAR_8;

 if (VAR_4 < sizeof(*VAR_6) + 24) {
  FUNC_5(VAR_1,
      "athr: Too short event message (data_len=%d sizeof(*sa)=%d)",
      (int) VAR_4, (int) sizeof(*VAR_6));
  FUNC_4(VAR_1, "athr: Short event message",
       VAR_3, VAR_4);
  return;
 }

 VAR_6 = (struct ieee80211_send_action_cb *) VAR_3;

 VAR_7 = (const struct ieee80211_hdr *) (VAR_6 + 1);
 VAR_8 = FUNC_2(VAR_7->frame_control);

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.tx_status.type = FUNC_1(VAR_8);
 VAR_5.tx_status.stype = FUNC_0(VAR_8);
 VAR_5.tx_status.dst = VAR_6->dst_addr;
 VAR_5.tx_status.data = (const u8 *) VAR_7;
 VAR_5.tx_status.data_len = VAR_4 - sizeof(*VAR_6);
 VAR_5.tx_status.ack = VAR_6->ack;
 FUNC_6(VAR_2->hapd, VAR_0, &VAR_5);
}
