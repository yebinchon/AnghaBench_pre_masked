
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int addr; } ;
struct sta_info {TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,char*,char*,int ) ;
 struct sk_buff* FUNC_5 (struct sta_info*) ;

__attribute__((used)) static void FUNC_6(struct sta_info *VAR_5, bool VAR_6, bool VAR_7)
{
 struct ieee80211_sub_if_data *VAR_8 = VAR_5->sdata;
 struct sk_buff *VAR_9;
 struct ieee80211_hdr *VAR_10;
 struct ieee80211_tx_info *VAR_11;
 u8 *VAR_12;

 VAR_9 = FUNC_5(VAR_5);
 if (!VAR_9)
  return;

 VAR_10 = (struct ieee80211_hdr *) VAR_9->data;
 if (!VAR_7)
  VAR_10->frame_control |=
    FUNC_1(VAR_0);
 VAR_12 = FUNC_2(VAR_10);
 if (VAR_6)
  VAR_12[1] |= (VAR_2 >> 8);
 if (VAR_7)
  VAR_12[0] |= VAR_1;

 VAR_11 = FUNC_0(VAR_9);

 VAR_11->flags |= VAR_3 |
         VAR_4;

 FUNC_4(VAR_8, "sending MPSP trigger%s%s to %pM\n",
  VAR_6 ? " RSPI" : "", VAR_7 ? " EOSP" : "", VAR_5->sta.addr);

 FUNC_3(VAR_8, VAR_9);
}
