
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_2__ {int (* iv_recv_pspoll ) (struct ieee80211_node*,struct mbuf*) ;} ;




 int FUNC_0 (struct ieee80211_node*,struct mbuf*) ;
 int FUNC_1 (struct ieee80211_node*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_0, struct mbuf *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 128:
  VAR_0->ni_vap->iv_recv_pspoll(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_0(VAR_0, VAR_1);
  break;
 }
}
