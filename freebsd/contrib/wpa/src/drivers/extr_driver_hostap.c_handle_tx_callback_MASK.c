
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t data_len; int ack; int * data; int dst; int stype; int type; } ;
union wpa_event_data {TYPE_1__ tx_status; } ;
typedef int u8 ;
typedef int u16 ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct hostap_driver_data {int hapd; } ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union wpa_event_data*,int ,int) ;
 int FUNC_4 (int ,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_5(struct hostap_driver_data *VAR_1, u8 *VAR_2,
          size_t VAR_3, int VAR_4)
{
 struct ieee80211_hdr *VAR_5;
 u16 VAR_6;
 union wpa_event_data VAR_7;

 VAR_5 = (struct ieee80211_hdr *) VAR_2;
 VAR_6 = FUNC_2(VAR_5->frame_control);

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.tx_status.type = FUNC_1(VAR_6);
 VAR_7.tx_status.stype = FUNC_0(VAR_6);
 VAR_7.tx_status.dst = VAR_5->addr1;
 VAR_7.tx_status.data = VAR_2;
 VAR_7.tx_status.data_len = VAR_3;
 VAR_7.tx_status.ack = VAR_4;
 FUNC_4(VAR_1->hapd, VAR_0, &VAR_7);
}
