
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
struct TYPE_2__ {int (* wv_recv_mgmt ) (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;} ;





 TYPE_1__* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_0, struct mbuf *VAR_1,
 int VAR_2, const struct ieee80211_rx_stats *VAR_3, int VAR_4, int VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_0->ni_vap;

 switch (VAR_2) {
 case 129:
 case 130:
 case 128:

  return;
 }
 FUNC_0(VAR_6)->wv_recv_mgmt(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
