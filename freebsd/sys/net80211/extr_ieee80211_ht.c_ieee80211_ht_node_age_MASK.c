
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {int is_ampdu_rx_age; } ;
struct ieee80211vap {TYPE_1__ iv_stats; } ;
struct ieee80211_rx_ampdu {int rxa_flags; scalar_t__ rxa_qframes; scalar_t__ rxa_age; } ;
struct ieee80211_node {int ni_flags; struct ieee80211_rx_ampdu* ni_rx_ampdu; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_2 ;
 int FUNC_1 (struct ieee80211_node*,struct ieee80211_rx_ampdu*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_2(struct ieee80211_node *VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_5->ni_vap;
 uint8_t VAR_7;

 FUNC_0(VAR_5->ni_flags & VAR_1, ("not an HT sta"));

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct ieee80211_rx_ampdu *VAR_8;

  VAR_8 = &VAR_5->ni_rx_ampdu[VAR_7];
  if ((VAR_8->rxa_flags & VAR_0) == 0)
   continue;
  if (VAR_8->rxa_qframes == 0)
   continue;





  if (VAR_4 - VAR_8->rxa_age > VAR_3) {




   VAR_6->iv_stats.is_ampdu_rx_age += VAR_8->rxa_qframes;
   FUNC_1(VAR_5, VAR_8);
  }
 }
}
