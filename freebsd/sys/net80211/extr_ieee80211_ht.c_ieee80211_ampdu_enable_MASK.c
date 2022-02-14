
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__* iv_ampdu_mintraffic; } ;
struct ieee80211_tx_ampdu {scalar_t__ txa_avgpps; scalar_t__ txa_attempts; int txa_pkts; int txa_tid; int txa_nextrequest; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,int ,int ,scalar_t__,int ,scalar_t__) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_node *VAR_4,
 struct ieee80211_tx_ampdu *VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_4->ni_vap;

 if (VAR_5->txa_avgpps <
     VAR_6->iv_ampdu_mintraffic[FUNC_1(VAR_5->txa_tid)])
  return 0;

 if (VAR_5->txa_attempts >= VAR_1 &&
     FUNC_2(VAR_3, VAR_5->txa_nextrequest)) {





  return 0;
 }
 FUNC_0(VAR_6, VAR_0, VAR_4,
     "enable AMPDU on tid %d (%s), avgpps %d pkts %d attempt %d",
     VAR_5->txa_tid, VAR_2[FUNC_1(VAR_5->txa_tid)],
     VAR_5->txa_avgpps, VAR_5->txa_pkts, VAR_5->txa_attempts);
 return 1;
}
