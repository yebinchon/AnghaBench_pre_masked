
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int is_rx_rstoobig; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_rateset {scalar_t__ rs_nrates; scalar_t__ rs_rates; } ;
struct ieee80211_node {struct ieee80211_rateset ni_rates; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,scalar_t__,scalar_t__ const) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_node*,struct ieee80211_rateset*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__ const*,scalar_t__) ;
 int FUNC_3 (struct ieee80211_rateset*,int ,int) ;

int
FUNC_4(struct ieee80211_node *VAR_2,
 const uint8_t *VAR_3, const uint8_t *VAR_4, int VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_2->ni_vap;
 struct ieee80211_rateset *VAR_7 = &VAR_2->ni_rates;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->rs_nrates = VAR_3[1];
 FUNC_2(VAR_7->rs_rates, VAR_3 + 2, VAR_7->rs_nrates);
 if (VAR_4 != ((void*)0)) {
  uint8_t VAR_8;



  VAR_8 = VAR_4[1];
  if (VAR_7->rs_nrates + VAR_8 > VAR_1) {
   VAR_8 = VAR_1 - VAR_7->rs_nrates;
   FUNC_0(VAR_6, VAR_0, VAR_2,
       "extended rate set too large; only using "
       "%u of %u rates", VAR_8, VAR_4[1]);
   VAR_6->iv_stats.is_rx_rstoobig++;
  }
  FUNC_2(VAR_7->rs_rates + VAR_7->rs_nrates, VAR_4+2, VAR_8);
  VAR_7->rs_nrates += VAR_8;
 }
 return FUNC_1(VAR_2, VAR_7, VAR_5);
}
