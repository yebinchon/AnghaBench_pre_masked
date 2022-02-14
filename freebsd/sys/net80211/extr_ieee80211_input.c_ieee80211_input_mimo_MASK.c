
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211_rx_stats {int c_nf; int c_rssi; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
typedef int rxs ;
struct TYPE_2__ {int (* iv_input ) (struct ieee80211_node*,struct mbuf*,struct ieee80211_rx_stats*,int ,int ) ;} ;


 int FUNC_0 (struct ieee80211_rx_stats*,int) ;
 scalar_t__ FUNC_1 (struct mbuf*,struct ieee80211_rx_stats*) ;
 int FUNC_2 (struct ieee80211_node*,struct ieee80211_rx_stats*) ;
 int FUNC_3 (struct ieee80211_node*,struct mbuf*,struct ieee80211_rx_stats*,int ,int ) ;

int
FUNC_4(struct ieee80211_node *VAR_0, struct mbuf *VAR_1)
{
 struct ieee80211_rx_stats VAR_2;


 FUNC_0(&VAR_2, sizeof(VAR_2));
 if (FUNC_1(VAR_1, &VAR_2) != 0)
  return (-1);


 FUNC_2(VAR_0, &VAR_2);


 return VAR_0->ni_vap->iv_input(VAR_0, VAR_1, &VAR_2, VAR_2.c_rssi, VAR_2.c_nf);
}
