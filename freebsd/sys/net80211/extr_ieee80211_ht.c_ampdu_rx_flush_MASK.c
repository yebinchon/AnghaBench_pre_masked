
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_ampdu_rx_oor; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_rx_ampdu {int rxa_wnd; scalar_t__ rxa_qframes; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (struct ieee80211_rx_ampdu*,struct ieee80211_node*,int) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_node *VAR_0, struct ieee80211_rx_ampdu *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_0->ni_vap;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->rxa_wnd; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3);
  if (VAR_4 == 0)
   continue;
  VAR_2->iv_stats.is_ampdu_rx_oor += VAR_4;

  if (VAR_1->rxa_qframes == 0)
   break;
 }
}
