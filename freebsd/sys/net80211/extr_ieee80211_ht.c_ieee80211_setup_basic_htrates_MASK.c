
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ieee80211_htrateset {int rs_nrates; int* rs_rates; } ;
struct ieee80211_node {int ni_vap; struct ieee80211_htrateset ni_htrates; } ;
struct ieee80211_ie_htinfo {int hi_basicmcsset; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct ieee80211_node*,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int) ;

void
FUNC_2(struct ieee80211_node *VAR_6, const uint8_t *VAR_7)
{
 const struct ieee80211_ie_htinfo *VAR_8;
 struct ieee80211_htrateset *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_7[0] == VAR_0)
  VAR_7 += 4;
 VAR_8 = (const struct ieee80211_ie_htinfo *) VAR_7;
 VAR_9 = &VAR_6->ni_htrates;
 if (VAR_9->rs_nrates == 0) {
  FUNC_0(VAR_6->ni_vap,
      VAR_3 | VAR_2, VAR_6,
      "%s", "WARNING, empty HT rate set");
  return;
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (FUNC_1(VAR_8->hi_basicmcsset, VAR_10))
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_9->rs_nrates; VAR_11++)
   if ((VAR_9->rs_rates[VAR_11] & VAR_5) == VAR_10)
    VAR_9->rs_rates[VAR_11] |= VAR_4;
 }
}
