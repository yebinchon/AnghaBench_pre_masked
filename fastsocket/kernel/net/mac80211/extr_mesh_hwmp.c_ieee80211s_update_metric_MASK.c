
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int fail_avg; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sta_info*) ;

void FUNC_3(struct ieee80211_local *VAR_1,
  struct sta_info *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *) VAR_3->data;
 int VAR_6;

 if (!FUNC_1(VAR_5->frame_control))
  return;

 VAR_6 = !(VAR_4->flags & VAR_0);


 VAR_2->fail_avg = ((80 * VAR_2->fail_avg + 5) / 100 + 20 * VAR_6);
 if (VAR_2->fail_avg > 95)
  FUNC_2(VAR_2);
}
