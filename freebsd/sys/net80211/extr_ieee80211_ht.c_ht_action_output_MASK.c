
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211_node {int ni_txpower; TYPE_1__* ni_txparms; } ;
struct ieee80211_bpf_params {int ibp_power; int ibp_try0; int ibp_rate0; int ibp_pri; } ;
typedef int params ;
struct TYPE_2__ {int maxretry; int mgmtrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_node*,struct mbuf*,int ,struct ieee80211_bpf_params*) ;
 int FUNC_1 (struct ieee80211_bpf_params*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_node *VAR_2, struct mbuf *VAR_3)
{
 struct ieee80211_bpf_params VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ibp_pri = VAR_1;
 VAR_4.ibp_rate0 = VAR_2->ni_txparms->mgmtrate;

 VAR_4.ibp_try0 = VAR_2->ni_txparms->maxretry;
 VAR_4.ibp_power = VAR_2->ni_txpower;
 return FUNC_0(VAR_2, VAR_3, VAR_0,
      &VAR_4);
}
