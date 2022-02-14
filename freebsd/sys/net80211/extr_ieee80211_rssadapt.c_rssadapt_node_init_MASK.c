
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_ifp; struct ieee80211_rssadapt* iv_rs; } ;
struct ieee80211_rateset {size_t rs_nrates; int* rs_rates; } ;
struct ieee80211_rssadapt_node {size_t ra_rix; int ra_ticks; struct ieee80211_rateset ra_rates; struct ieee80211_rssadapt* ra_rs; } ;
struct ieee80211_rssadapt {int dummy; } ;
struct ieee80211_node {int ni_txrate; struct ieee80211vap* ni_vap; struct ieee80211_rssadapt_node* ni_rctls; struct ieee80211_rateset ni_rates; } ;


 struct ieee80211_rssadapt_node* FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ieee80211_rssadapt_node*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_node *VAR_6)
{
 struct ieee80211_rssadapt_node *VAR_7;
 struct ieee80211vap *VAR_8 = VAR_6->ni_vap;
 struct ieee80211_rssadapt *VAR_9 = VAR_8->iv_rs;
 const struct ieee80211_rateset *VAR_10 = &VAR_6->ni_rates;

 if (!VAR_9) {
  FUNC_2(VAR_8->iv_ifp, "ratectl structure was not allocated, "
      "per-node structure allocation skipped\n");
  return;
 }

 if (VAR_6->ni_rctls == ((void*)0)) {
  VAR_6->ni_rctls = VAR_7 =
      FUNC_0(sizeof(struct ieee80211_rssadapt_node),
          VAR_4, VAR_1 | VAR_2);
  if (VAR_7 == ((void*)0)) {
   FUNC_2(VAR_8->iv_ifp, "couldn't alloc per-node ratectl "
       "structure\n");
   return;
  }
 } else
  VAR_7 = VAR_6->ni_rctls;
 VAR_7->ra_rs = VAR_9;
 VAR_7->ra_rates = *VAR_10;
 FUNC_3(VAR_7);


 for (VAR_7->ra_rix = VAR_10->rs_nrates - 1;
      VAR_7->ra_rix > 0 && (VAR_10->rs_rates[VAR_7->ra_rix] & VAR_3) > 72;
      VAR_7->ra_rix--)
  ;
 VAR_6->ni_txrate = VAR_10->rs_rates[VAR_7->ra_rix] & VAR_3;
 VAR_7->ra_ticks = VAR_5;

 FUNC_1(VAR_6->ni_vap, VAR_0, VAR_6,
     "RSSADAPT initial rate %d", VAR_6->ni_txrate);
}
