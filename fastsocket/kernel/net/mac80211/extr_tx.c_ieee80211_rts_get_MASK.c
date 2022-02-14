
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_rts {int ta; int ra; int duration; int frame_control; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr2; int addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,size_t,struct ieee80211_tx_info const*) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3,
         const void *VAR_4, size_t VAR_5,
         const struct ieee80211_tx_info *VAR_6,
         struct ieee80211_rts *VAR_7)
{
 const struct ieee80211_hdr *VAR_8 = VAR_4;

 VAR_7->frame_control =
     FUNC_0(VAR_0 | VAR_1);
 VAR_7->duration = FUNC_1(VAR_2, VAR_3, VAR_5,
            VAR_6);
 FUNC_2(VAR_7->ra, VAR_8->addr1, sizeof(VAR_7->ra));
 FUNC_2(VAR_7->ta, VAR_8->addr2, sizeof(VAR_7->ta));
}
