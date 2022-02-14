
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int is_rx_rstoobig; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211com {int ic_txstream; int ic_htcaps; } ;
struct ieee80211_rateset {int dummy; } ;
struct ieee80211_htrateset {int rs_nrates; int* rs_rates; } ;
struct ieee80211_node {struct ieee80211_htrateset ni_htrates; struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct ieee80211_ie_htcap {int hc_mcsset; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_node*,char*,int) ;
 int FUNC_1 (struct ieee80211_node*,struct ieee80211_rateset*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct ieee80211_htrateset*,int ,int) ;

int
FUNC_4(struct ieee80211_node *VAR_6, const uint8_t *VAR_7, int VAR_8)
{
 struct ieee80211com *VAR_9 = VAR_6->ni_ic;
 struct ieee80211vap *VAR_10 = VAR_6->ni_vap;
 const struct ieee80211_ie_htcap *VAR_11;
 struct ieee80211_htrateset *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_14 = VAR_9->ic_txstream * 8 - 1;
 VAR_15 = 0;
 if (VAR_9->ic_htcaps & VAR_2) {
  if (VAR_9->ic_txstream >= 2)
   VAR_15 = 38;
  if (VAR_9->ic_txstream >= 3)
   VAR_15 = 52;
  if (VAR_9->ic_txstream >= 4)
   VAR_15 = 76;
 }

 VAR_12 = &VAR_6->ni_htrates;
 FUNC_3(VAR_12, 0, sizeof(*VAR_12));
 if (VAR_7 != ((void*)0)) {
  if (VAR_7[0] == VAR_0)
   VAR_7 += 4;
  VAR_11 = (const struct ieee80211_ie_htcap *) VAR_7;
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if (FUNC_2(VAR_11->hc_mcsset, VAR_13))
    continue;
   if (VAR_12->rs_nrates == VAR_3) {
    FUNC_0(VAR_10,
        VAR_5 | VAR_4, VAR_6,
        "WARNING, HT rate set too large; only "
        "using %u rates", VAR_3);
    VAR_10->iv_stats.is_rx_rstoobig++;
    break;
   }
   if (VAR_13 <= 31 && VAR_13 > VAR_14)
    continue;
   if (VAR_13 == 32 &&
       (VAR_9->ic_htcaps & VAR_1) == 0)
    continue;
   if (VAR_13 > 32 && VAR_13 > VAR_15)
    continue;
   VAR_12->rs_rates[VAR_12->rs_nrates++] = VAR_13;
  }
 }
 return FUNC_1(VAR_6, (struct ieee80211_rateset *) VAR_12, VAR_8);
}
