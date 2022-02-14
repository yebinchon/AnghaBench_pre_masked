
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; void* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211vap {int iv_ifp; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int (* ic_raw_xmit ) (struct ieee80211_node*,struct mbuf*,struct ieee80211_bpf_params const*) ;} ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*,struct ieee80211_bpf_params const*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ieee80211_node*,struct mbuf*,struct ieee80211_bpf_params const*) ;

int
FUNC_5(struct ieee80211vap *VAR_2, struct ieee80211_node *VAR_3,
    struct mbuf *VAR_4, const struct ieee80211_bpf_params *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_2->iv_ic;
 int VAR_7;






 FUNC_0((VAR_4->m_pkthdr.csum_flags & VAR_0) == 0);
 VAR_4->m_pkthdr.rcvif = (void *)VAR_3;
 if (VAR_5)
  (void) FUNC_1(VAR_4, VAR_5);

 VAR_7 = VAR_6->ic_raw_xmit(VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_2->iv_ifp, VAR_1, 1);
  FUNC_2(VAR_3);
 }
 return (VAR_7);
}
