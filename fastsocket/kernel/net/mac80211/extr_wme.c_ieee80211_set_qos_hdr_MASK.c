
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sub_if_data {int noack_map; int vif; } ;
struct ieee80211_hdr {int frame_control; int addr1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_6 ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_7,
      struct sk_buff *VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (void *)VAR_8->data;
 struct ieee80211_tx_info *VAR_10 = FUNC_1(VAR_8);
 u8 *VAR_11;
 u8 VAR_12, VAR_13;

 if (!FUNC_3(VAR_9->frame_control))
  return;

 VAR_11 = FUNC_2(VAR_9);
 VAR_13 = VAR_8->priority & VAR_5;


 VAR_12 = *VAR_11 & VAR_1;

 if (FUNC_6(VAR_9->addr1) ||
     VAR_7->noack_map & FUNC_0(VAR_13)) {
  VAR_12 |= VAR_0;
  VAR_10->flags |= VAR_6;
 }


 *VAR_11++ = VAR_12 | VAR_13;
 if (FUNC_5(&VAR_7->vif)) {

  *VAR_11 &= ((VAR_4 |
   VAR_3) >> 8);


  if (!FUNC_4(VAR_9->frame_control))
   *VAR_11 |= (VAR_2 >> 8);
 } else {
  *VAR_11 = 0;
 }
}
