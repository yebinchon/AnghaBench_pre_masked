
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ieee80211vap {int iv_htcaps; int iv_flags_ht; } ;
struct ieee80211_node {int ni_flags; struct ieee80211vap* ni_vap; } ;
struct ieee80211_ie_htinfo {int hi_byte1; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (struct ieee80211_node*,struct ieee80211_ie_htinfo const*) ;
 int FUNC_4 (struct ieee80211_node*,scalar_t__ const*) ;

void
FUNC_5(struct ieee80211_node *VAR_5,
 const uint8_t *VAR_6, const uint8_t *VAR_7)
{
 struct ieee80211vap *VAR_8 = VAR_5->ni_vap;
 const struct ieee80211_ie_htinfo *VAR_9;

 FUNC_4(VAR_5, VAR_6);
 if (VAR_8->iv_htcaps & VAR_2)
  FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 FUNC_0(VAR_5);

 if (VAR_7[0] == VAR_0)
  VAR_7 += 4;
 VAR_9 = (const struct ieee80211_ie_htinfo *) VAR_7;
 FUNC_3(VAR_5, VAR_9);






 if ((VAR_9->hi_byte1 & VAR_3) &&
     (VAR_8->iv_flags_ht & VAR_1))
  VAR_5->ni_flags |= VAR_4;
 else
  VAR_5->ni_flags &= ~VAR_4;
}
