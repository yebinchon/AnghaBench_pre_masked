
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int iv_flags_ht; } ;
struct ieee80211_node {scalar_t__ ni_ht2ndchan; struct ieee80211vap* ni_vap; } ;
struct ieee80211_ie_htinfo {int hi_byte1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ieee80211_node*,int,int) ;
 int FUNC_1 (struct ieee80211_node*,int) ;

int
FUNC_2(struct ieee80211_node *VAR_8,
 const uint8_t *VAR_9, const uint8_t *VAR_10)
{
 struct ieee80211vap *VAR_11 = VAR_8->ni_vap;
 const struct ieee80211_ie_htinfo *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_12 = (const struct ieee80211_ie_htinfo *) VAR_10;

 VAR_13 = (VAR_11->iv_flags_ht & VAR_3) ?
     VAR_0 : 0;


 if ((VAR_12->hi_byte1 & VAR_7) &&
     (VAR_11->iv_flags_ht & VAR_4)) {
  if (VAR_8->ni_ht2ndchan == VAR_5)
   VAR_13 = VAR_2;
  else if (VAR_8->ni_ht2ndchan == VAR_6)
   VAR_13 = VAR_1;
 }






 VAR_14 = FUNC_1(VAR_8, VAR_13);

 if (FUNC_0(VAR_8, VAR_13, VAR_14))
  VAR_15 = 1;

 return (VAR_15);
}
