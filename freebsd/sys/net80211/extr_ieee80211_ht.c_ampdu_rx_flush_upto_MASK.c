
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_ampdu_rx_oor; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_rx_ampdu {int rxa_wnd; int rxa_start; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
typedef int ieee80211_seq ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_rx_ampdu*,struct ieee80211_node*,int) ;
 int FUNC_3 (struct ieee80211_rx_ampdu*,struct ieee80211_node*,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_node *VAR_0,
 struct ieee80211_rx_ampdu *VAR_1, ieee80211_seq VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_0->ni_vap;
 ieee80211_seq VAR_4;
 int VAR_5, VAR_6;
 VAR_4 = VAR_1->rxa_start;
 for (VAR_5 = 0; VAR_5 < VAR_1->rxa_wnd; VAR_5++) {
  VAR_6 = FUNC_2(VAR_1, VAR_0, VAR_5);
  if (VAR_6 == 0) {
   if (!FUNC_0(VAR_4, VAR_2))
    break;
  }
  VAR_3->iv_stats.is_ampdu_rx_oor += VAR_6;
  VAR_4 = FUNC_1(VAR_4);
 }




 FUNC_3(VAR_1, VAR_0, VAR_5, VAR_2);







 VAR_1->rxa_start = VAR_4;
}
