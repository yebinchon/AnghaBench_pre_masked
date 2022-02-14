
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_mgmt {int frame_control; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;




 int FUNC_1 (struct ieee80211_sub_if_data*,int,struct ieee80211_mgmt*,int ,struct ieee80211_rx_status*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,int ,struct ieee80211_rx_status*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_sub_if_data *VAR_1,
       struct sk_buff *VAR_2)
{
 struct ieee80211_rx_status *VAR_3;
 struct ieee80211_mgmt *VAR_4;
 u16 VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = (struct ieee80211_mgmt *) VAR_2->data;
 VAR_5 = FUNC_4(VAR_4->frame_control) & VAR_0;

 switch (VAR_5) {
 case 128:
 case 130:
  FUNC_1(VAR_1, VAR_5, VAR_4, VAR_2->len,
         VAR_3);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_4, VAR_2->len);
  break;
 case 131:
  FUNC_2(VAR_1, VAR_4, VAR_2->len, VAR_3);
  break;
 }
}
